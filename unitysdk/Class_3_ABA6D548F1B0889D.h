#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsTriggerBattleAttacker; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_ABA6D548F1B0889D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12987900)
#define CLASS_3_ABA6D548F1B0889D__CTOR_OFFSET UNITYSDK_OFFSET(0x129878D0)

inline static constexpr unsigned int Class_3_ABA6D548F1B0889D_TypeDefinitionIndex = 50466;

class Class_3_ABA6D548F1B0889D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsTriggerBattleAttacker*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsTriggerBattleAttacker* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsTriggerBattleAttacker*))((::PBYTE)hIl2Cpp + CLASS_3_ABA6D548F1B0889D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA6D548F1B0889D_EVALUATE_OFFSET))(this);
	}
};
