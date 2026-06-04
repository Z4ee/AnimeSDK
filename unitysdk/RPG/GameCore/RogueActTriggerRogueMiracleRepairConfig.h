#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG_METHOD_6_003688B3F8829D9D_OFFSET UNITYSDK_OFFSET(0x19AFD5E0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG_METHOD_6_3A1509B27DBF4610_OFFSET UNITYSDK_OFFSET(0x19AFD800)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AFD720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMiracleRepairConfig_TypeDefinitionIndex = 18567;

	class RogueActTriggerRogueMiracleRepairConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_003688B3F8829D9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleRepairConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleRepairConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG_METHOD_6_003688B3F8829D9D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_3A1509B27DBF4610(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleRepairConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleRepairConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEREPAIRCONFIG_METHOD_6_3A1509B27DBF4610_OFFSET))(a1, a2);
		}
	};
}
