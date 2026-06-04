#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFRANDOMENHANCECONFIG_METHOD_3_6C0EB268EAAD27B7_OFFSET UNITYSDK_OFFSET(0x19B9CD20)
#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFRANDOMENHANCECONFIG_METHOD_3_E55187651EE3568E_OFFSET UNITYSDK_OFFSET(0x19B9CDF0)
#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFRANDOMENHANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9CDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetSelectBuffRandomEnhanceConfig_TypeDefinitionIndex = 17081;

	class RogueModifierSetSelectBuffRandomEnhanceConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFRANDOMENHANCECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6C0EB268EAAD27B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetSelectBuffRandomEnhanceConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetSelectBuffRandomEnhanceConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFRANDOMENHANCECONFIG_METHOD_3_6C0EB268EAAD27B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E55187651EE3568E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetSelectBuffRandomEnhanceConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetSelectBuffRandomEnhanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFRANDOMENHANCECONFIG_METHOD_3_E55187651EE3568E_OFFSET))(a1, a2);
		}
	};
}
