#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUETOURNPOSTSTARTCONFIG_METHOD_3_8C7CC3E5AF8558AA_OFFSET UNITYSDK_OFFSET(0x1EEF9710)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUETOURNPOSTSTARTCONFIG_METHOD_3_EC1BDFAF9E9E9406_OFFSET UNITYSDK_OFFSET(0x1EEF9760)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUETOURNPOSTSTARTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF9750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnRogueTournPostStartConfig_TypeDefinitionIndex = 17558;

	class RogueModifierExecuteActionOnRogueTournPostStartConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUETOURNPOSTSTARTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8C7CC3E5AF8558AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRogueTournPostStartConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnRogueTournPostStartConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUETOURNPOSTSTARTCONFIG_METHOD_3_8C7CC3E5AF8558AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EC1BDFAF9E9E9406(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRogueTournPostStartConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnRogueTournPostStartConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUETOURNPOSTSTARTCONFIG_METHOD_3_EC1BDFAF9E9E9406_OFFSET))(a1, a2);
		}
	};
}
