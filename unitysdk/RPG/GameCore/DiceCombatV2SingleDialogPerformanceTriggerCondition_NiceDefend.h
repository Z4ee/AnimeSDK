#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatV2SingleDialogPerformanceTriggerCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_NICEDEFEND_METHOD_3_A908C534FE7E2613_OFFSET UNITYSDK_OFFSET(0x1DB09C80)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_NICEDEFEND_METHOD_3_C2EE12075EA4446F_OFFSET UNITYSDK_OFFSET(0x1DB09900)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_NICEDEFEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB098F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatV2SingleDialogPerformanceTriggerCondition_NiceDefend_TypeDefinitionIndex = 16011;

	class DiceCombatV2SingleDialogPerformanceTriggerCondition_NiceDefend : public ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition
	{
	public:
		::System::Int32 Damage; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_NICEDEFEND__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A908C534FE7E2613(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_NiceDefend*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_NiceDefend*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_NICEDEFEND_METHOD_3_A908C534FE7E2613_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C2EE12075EA4446F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_NiceDefend* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_NiceDefend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_NICEDEFEND_METHOD_3_C2EE12075EA4446F_OFFSET))(a1, a2);
		}
	};
}
