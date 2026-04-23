#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACEMAGICUNITAUTOCOMPOSERANDOMCONFIG_METHOD_3_05C43C0511AD7255_OFFSET UNITYSDK_OFFSET(0x18D45DB0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEMAGICUNITAUTOCOMPOSERANDOMCONFIG_METHOD_3_1CC6C70D5EF5757C_OFFSET UNITYSDK_OFFSET(0x18D45CE0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACEMAGICUNITAUTOCOMPOSERANDOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D45D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceMagicUnitAutoComposeRandomConfig_TypeDefinitionIndex = 16842;

	class RogueModifierReplaceMagicUnitAutoComposeRandomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEMAGICUNITAUTOCOMPOSERANDOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1CC6C70D5EF5757C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceMagicUnitAutoComposeRandomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceMagicUnitAutoComposeRandomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEMAGICUNITAUTOCOMPOSERANDOMCONFIG_METHOD_3_1CC6C70D5EF5757C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_05C43C0511AD7255(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceMagicUnitAutoComposeRandomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceMagicUnitAutoComposeRandomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACEMAGICUNITAUTOCOMPOSERANDOMCONFIG_METHOD_3_05C43C0511AD7255_OFFSET))(a1, a2);
		}
	};
}
