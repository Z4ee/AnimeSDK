#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByHaveDyingEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8090595C7DEE92B1_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9120DF0)
#define CLASS_3_8090595C7DEE92B1__CTOR_OFFSET UNITYSDK_OFFSET(0x9120DC0)

inline static constexpr unsigned int Class_3_8090595C7DEE92B1_TypeDefinitionIndex = 50639;

class Class_3_8090595C7DEE92B1 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByHaveDyingEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByHaveDyingEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByHaveDyingEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8090595C7DEE92B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8090595C7DEE92B1_EVALUATE_OFFSET))(this);
	}
};
