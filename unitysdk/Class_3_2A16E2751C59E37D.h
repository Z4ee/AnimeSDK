#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByRandomChanceClientOnly; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_2A16E2751C59E37D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17076800)
#define CLASS_3_2A16E2751C59E37D__CTOR_OFFSET UNITYSDK_OFFSET(0x170767D0)

inline static constexpr unsigned int Class_3_2A16E2751C59E37D_TypeDefinitionIndex = 54921;

class Class_3_2A16E2751C59E37D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByRandomChanceClientOnly*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByRandomChanceClientOnly* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByRandomChanceClientOnly*))((::PBYTE)hIl2Cpp + CLASS_3_2A16E2751C59E37D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2A16E2751C59E37D_EVALUATE_OFFSET))(this);
	}
};
