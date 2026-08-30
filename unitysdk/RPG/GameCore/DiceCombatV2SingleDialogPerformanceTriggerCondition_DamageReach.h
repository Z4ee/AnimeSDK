#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatV2SingleDialogPerformanceTriggerCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_DAMAGEREACH_METHOD_3_589D0B89518192D4_OFFSET UNITYSDK_OFFSET(0x1DB09B90)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_DAMAGEREACH_METHOD_3_C5A8B46F2D4CBC88_OFFSET UNITYSDK_OFFSET(0x1DB09840)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_DAMAGEREACH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB09830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatV2SingleDialogPerformanceTriggerCondition_DamageReach_TypeDefinitionIndex = 16010;

	class DiceCombatV2SingleDialogPerformanceTriggerCondition_DamageReach : public ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition
	{
	public:
		::System::Int32 Damage; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_DAMAGEREACH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_589D0B89518192D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_DamageReach*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_DamageReach*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_DAMAGEREACH_METHOD_3_589D0B89518192D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C5A8B46F2D4CBC88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_DamageReach* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_DamageReach*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_DAMAGEREACH_METHOD_3_C5A8B46F2D4CBC88_OFFSET))(a1, a2);
		}
	};
}
