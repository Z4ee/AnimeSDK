#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLECOREGIFTLEVELINTERVALCONFIG_METHOD_3_C14D2EB2055005FB_OFFSET UNITYSDK_OFFSET(0x1D3F6FF0)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLECOREGIFTLEVELINTERVALCONFIG_METHOD_3_DA89F808742B3A7F_OFFSET UNITYSDK_OFFSET(0x1D3F7040)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLECOREGIFTLEVELINTERVALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F7030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierChangePersonaStyleCoreGiftLevelIntervalConfig_TypeDefinitionIndex = 17590;

	class RogueModifierChangePersonaStyleCoreGiftLevelIntervalConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLECOREGIFTLEVELINTERVALCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C14D2EB2055005FB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierChangePersonaStyleCoreGiftLevelIntervalConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierChangePersonaStyleCoreGiftLevelIntervalConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLECOREGIFTLEVELINTERVALCONFIG_METHOD_3_C14D2EB2055005FB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA89F808742B3A7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierChangePersonaStyleCoreGiftLevelIntervalConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierChangePersonaStyleCoreGiftLevelIntervalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPERSONASTYLECOREGIFTLEVELINTERVALCONFIG_METHOD_3_DA89F808742B3A7F_OFFSET))(a1, a2);
		}
	};
}
