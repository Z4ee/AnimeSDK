#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_METHOD_2_0948BEEF78D5D811_OFFSET UNITYSDK_OFFSET(0x1887E580)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_METHOD_2_EE996B6F5A6A973A_OFFSET UNITYSDK_OFFSET(0x1887E0F0)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1887E570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatV2SingleDialogPerformanceTriggerCondition_TypeDefinitionIndex = 15349;

	class DiceCombatV2SingleDialogPerformanceTriggerCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EE996B6F5A6A973A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_METHOD_2_EE996B6F5A6A973A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_0948BEEF78D5D811(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_METHOD_2_0948BEEF78D5D811_OFFSET))(a1, a2);
		}
	};
}
