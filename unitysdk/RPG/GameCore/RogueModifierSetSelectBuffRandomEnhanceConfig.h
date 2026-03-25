#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFRANDOMENHANCECONFIG_METHOD_3_6C0EB268EAAD27B7_OFFSET UNITYSDK_OFFSET(0x176399B0)
#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFRANDOMENHANCECONFIG_METHOD_3_E55187651EE3568E_OFFSET UNITYSDK_OFFSET(0x1762D650)
#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFRANDOMENHANCECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1762D600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetSelectBuffRandomEnhanceConfig_TypeDefinitionIndex = 16514;

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
