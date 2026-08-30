#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSTYLEEXPGAININPERCENTAGECONFIG_METHOD_3_C0E23BBE776568D4_OFFSET UNITYSDK_OFFSET(0x1EEFB8E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSTYLEEXPGAININPERCENTAGECONFIG_METHOD_3_F562E5CBF6802DD8_OFFSET UNITYSDK_OFFSET(0x1EEFB890)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSTYLEEXPGAININPERCENTAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFB8D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyStyleExpGainInPercentageConfig_TypeDefinitionIndex = 17591;

	class RogueModifierModifyStyleExpGainInPercentageConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSTYLEEXPGAININPERCENTAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F562E5CBF6802DD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyStyleExpGainInPercentageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyStyleExpGainInPercentageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSTYLEEXPGAININPERCENTAGECONFIG_METHOD_3_F562E5CBF6802DD8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C0E23BBE776568D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyStyleExpGainInPercentageConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyStyleExpGainInPercentageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSTYLEEXPGAININPERCENTAGECONFIG_METHOD_3_C0E23BBE776568D4_OFFSET))(a1, a2);
		}
	};
}
