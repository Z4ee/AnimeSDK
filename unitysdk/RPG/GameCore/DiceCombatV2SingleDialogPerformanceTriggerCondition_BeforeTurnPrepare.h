#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatV2SingleDialogPerformanceTriggerCondition.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BEFORETURNPREPARE_METHOD_3_85E0B5493BA97E37_OFFSET UNITYSDK_OFFSET(0x1D039B60)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BEFORETURNPREPARE_METHOD_3_AC6E958F98C06F83_OFFSET UNITYSDK_OFFSET(0x1D039870)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BEFORETURNPREPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D039860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatV2SingleDialogPerformanceTriggerCondition_BeforeTurnPrepare_TypeDefinitionIndex = 16012;

	class DiceCombatV2SingleDialogPerformanceTriggerCondition_BeforeTurnPrepare : public ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition
	{
	public:
		::System::Int32 Turn; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BEFORETURNPREPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_85E0B5493BA97E37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_BeforeTurnPrepare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_BeforeTurnPrepare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BEFORETURNPREPARE_METHOD_3_85E0B5493BA97E37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AC6E958F98C06F83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_BeforeTurnPrepare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_BeforeTurnPrepare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BEFORETURNPREPARE_METHOD_3_AC6E958F98C06F83_OFFSET))(a1, a2);
		}
	};
}
