#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BASECHENLINGBATTLEABILITYNODECONFIG_METHOD_2_01722AB5C1B1D7F0_OFFSET UNITYSDK_OFFSET(0x194B9FB0)
#define RPG_GAMECORE_BASECHENLINGBATTLEABILITYNODECONFIG_METHOD_2_B02D10049B0F6C90_OFFSET UNITYSDK_OFFSET(0x194BA860)
#define RPG_GAMECORE_BASECHENLINGBATTLEABILITYNODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194BA8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseChenLingBattleAbilityNodeConfig_TypeDefinitionIndex = 14957;

	class BaseChenLingBattleAbilityNodeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEABILITYNODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_01722AB5C1B1D7F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEABILITYNODECONFIG_METHOD_2_01722AB5C1B1D7F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_B02D10049B0F6C90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASECHENLINGBATTLEABILITYNODECONFIG_METHOD_2_B02D10049B0F6C90_OFFSET))(a1, a2);
		}
	};
}
