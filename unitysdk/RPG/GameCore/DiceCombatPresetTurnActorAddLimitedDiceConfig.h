#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPRESETTURNACTORADDLIMITEDDICECONFIG_METHOD_2_DBEAB8C8A0CF9DEE_OFFSET UNITYSDK_OFFSET(0x188708B0)
#define RPG_GAMECORE_DICECOMBATPRESETTURNACTORADDLIMITEDDICECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18870A20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPresetTurnActorAddLimitedDiceConfig_TypeDefinitionIndex = 15298;

	class DiceCombatPresetTurnActorAddLimitedDiceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 RollCount; // 0x10
		::System::Int32 Result; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNACTORADDLIMITEDDICECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_DBEAB8C8A0CF9DEE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPresetTurnActorAddLimitedDiceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPresetTurnActorAddLimitedDiceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNACTORADDLIMITEDDICECONFIG_METHOD_2_DBEAB8C8A0CF9DEE_OFFSET))(a1, a2);
		}
	};
}
