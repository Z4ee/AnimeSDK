#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByGridFightHasTrait; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_CA64B1CE93D499A8_EVALUATE_OFFSET UNITYSDK_OFFSET(0x179C9D90)
#define CLASS_3_CA64B1CE93D499A8__CTOR_OFFSET UNITYSDK_OFFSET(0x179C9D60)

inline static constexpr unsigned int Class_3_CA64B1CE93D499A8_TypeDefinitionIndex = 52133;

class Class_3_CA64B1CE93D499A8 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByGridFightHasTrait*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByGridFightHasTrait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByGridFightHasTrait*))((::PBYTE)hIl2Cpp + CLASS_3_CA64B1CE93D499A8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CA64B1CE93D499A8_EVALUATE_OFFSET))(this);
	}
};
