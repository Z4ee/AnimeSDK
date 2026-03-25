#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEANIMEVENTCONFIG_METHOD_2_E04AE21E10E67161_OFFSET UNITYSDK_OFFSET(0x1707BCC0)
#define RPG_GAMECORE_CHENLINGBATTLEANIMEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1707BE10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAnimEventConfig_TypeDefinitionIndex = 14410;

	class ChenLingBattleAnimEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single AnimNormalizedTime; // 0x10
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*>* OnAnimEvent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEANIMEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E04AE21E10E67161(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAnimEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAnimEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEANIMEVENTCONFIG_METHOD_2_E04AE21E10E67161_OFFSET))(a1, a2);
		}
	};
}
