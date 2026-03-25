#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCOUNTONLEVELUPCONFIG_METHOD_3_7D08009170ABAC05_OFFSET UNITYSDK_OFFSET(0x17636F70)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCOUNTONLEVELUPCONFIG_METHOD_3_A213D59F64491FFC_OFFSET UNITYSDK_OFFSET(0x17637040)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCOUNTONLEVELUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17636FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaChangeStyleGiftSelectCountOnLevelUpConfig_TypeDefinitionIndex = 16375;

	class RogueModifierPersonaChangeStyleGiftSelectCountOnLevelUpConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCOUNTONLEVELUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7D08009170ABAC05(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaChangeStyleGiftSelectCountOnLevelUpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaChangeStyleGiftSelectCountOnLevelUpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCOUNTONLEVELUPCONFIG_METHOD_3_7D08009170ABAC05_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A213D59F64491FFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaChangeStyleGiftSelectCountOnLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaChangeStyleGiftSelectCountOnLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONACHANGESTYLEGIFTSELECTCOUNTONLEVELUPCONFIG_METHOD_3_A213D59F64491FFC_OFFSET))(a1, a2);
		}
	};
}
