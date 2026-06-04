#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattleAbilityNodeConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTALK_METHOD_3_0F4766B42B59ED9D_OFFSET UNITYSDK_OFFSET(0x1961DC70)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTALK_METHOD_3_16E4F92B31FF9B1D_OFFSET UNITYSDK_OFFSET(0x1961DC10)
#define RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTALK__CTOR_OFFSET UNITYSDK_OFFSET(0x1961DC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleAbility_ShowTalk_TypeDefinitionIndex = 15044;

	class ChenLingBattleAbility_ShowTalk : public ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig
	{
	public:
		::System::UInt32 Target; // 0x10
		::RPG::Client::TextID TalkText; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTALK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_16E4F92B31FF9B1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_ShowTalk*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_ShowTalk*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTALK_METHOD_3_16E4F92B31FF9B1D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0F4766B42B59ED9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingBattleAbility_ShowTalk* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingBattleAbility_ShowTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEABILITY_SHOWTALK_METHOD_3_0F4766B42B59ED9D_OFFSET))(a1, a2);
		}
	};
}
