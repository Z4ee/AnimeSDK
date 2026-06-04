#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatV2SingleDialogPerformanceTriggerCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BOSSCHANGEPHASE_METHOD_3_5A6DB1817D0A4B20_OFFSET UNITYSDK_OFFSET(0x196BB510)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BOSSCHANGEPHASE_METHOD_3_61B7F5FD6B22396C_OFFSET UNITYSDK_OFFSET(0x196BB830)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BOSSCHANGEPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0x196BB500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatV2SingleDialogPerformanceTriggerCondition_BossChangePhase_TypeDefinitionIndex = 15408;

	class DiceCombatV2SingleDialogPerformanceTriggerCondition_BossChangePhase : public ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition
	{
	public:
		::System::Int32 Phase; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BOSSCHANGEPHASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_61B7F5FD6B22396C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_BossChangePhase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_BossChangePhase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BOSSCHANGEPHASE_METHOD_3_61B7F5FD6B22396C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5A6DB1817D0A4B20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_BossChangePhase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_BossChangePhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BOSSCHANGEPHASE_METHOD_3_5A6DB1817D0A4B20_OFFSET))(a1, a2);
		}
	};
}
