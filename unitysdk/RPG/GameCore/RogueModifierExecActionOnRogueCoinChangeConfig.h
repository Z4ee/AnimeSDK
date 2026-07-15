#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONROGUECOINCHANGECONFIG_METHOD_3_4D19B1205F180DCD_OFFSET UNITYSDK_OFFSET(0x1CFBF9B0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONROGUECOINCHANGECONFIG_METHOD_3_FD17DAFD7A57D1C9_OFFSET UNITYSDK_OFFSET(0x1CFBF960)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONROGUECOINCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBF9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecActionOnRogueCoinChangeConfig_TypeDefinitionIndex = 17104;

	class RogueModifierExecActionOnRogueCoinChangeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONROGUECOINCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FD17DAFD7A57D1C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecActionOnRogueCoinChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecActionOnRogueCoinChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONROGUECOINCHANGECONFIG_METHOD_3_FD17DAFD7A57D1C9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4D19B1205F180DCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecActionOnRogueCoinChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecActionOnRogueCoinChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONROGUECOINCHANGECONFIG_METHOD_3_4D19B1205F180DCD_OFFSET))(a1, a2);
		}
	};
}
