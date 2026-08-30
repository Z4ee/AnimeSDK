#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFHINTCONFIG_METHOD_3_2299FFD33B3CF9B1_OFFSET UNITYSDK_OFFSET(0x1D3FBC90)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFHINTCONFIG_METHOD_3_B207D2485BA23CCD_OFFSET UNITYSDK_OFFSET(0x1D3FBC40)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFHINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FBC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueBuffHintConfig_TypeDefinitionIndex = 17488;

	class RogueModifierReplaceContentRogueBuffHintConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFHINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B207D2485BA23CCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffHintConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffHintConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFHINTCONFIG_METHOD_3_B207D2485BA23CCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2299FFD33B3CF9B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffHintConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueBuffHintConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUEBUFFHINTCONFIG_METHOD_3_2299FFD33B3CF9B1_OFFSET))(a1, a2);
		}
	};
}
