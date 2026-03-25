#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUETOURNPOSTSTARTCONFIG_METHOD_3_22D1A53D9AD018AF_OFFSET UNITYSDK_OFFSET(0x176319C0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUETOURNPOSTSTARTCONFIG_METHOD_3_EC1BDFAF9E9E9406_OFFSET UNITYSDK_OFFSET(0x17631A90)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUETOURNPOSTSTARTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17631A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnRogueTournPostStartConfig_TypeDefinitionIndex = 16322;

	class RogueModifierExecuteActionOnRogueTournPostStartConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUETOURNPOSTSTARTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_22D1A53D9AD018AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRogueTournPostStartConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnRogueTournPostStartConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUETOURNPOSTSTARTCONFIG_METHOD_3_22D1A53D9AD018AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC1BDFAF9E9E9406(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRogueTournPostStartConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnRogueTournPostStartConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUETOURNPOSTSTARTCONFIG_METHOD_3_EC1BDFAF9E9E9406_OFFSET))(a1, a2);
		}
	};
}
