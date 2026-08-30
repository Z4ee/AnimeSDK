#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUESHOPCONFIG_METHOD_3_B529F2C2775F1EC5_OFFSET UNITYSDK_OFFSET(0x1D3FC1E0)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUESHOPCONFIG_METHOD_3_F3E4E3C80E506749_OFFSET UNITYSDK_OFFSET(0x1D3FC230)
#define RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUESHOPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FC220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierReplaceContentRogueShopConfig_TypeDefinitionIndex = 17491;

	class RogueModifierReplaceContentRogueShopConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUESHOPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B529F2C2775F1EC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueShopConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueShopConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUESHOPCONFIG_METHOD_3_B529F2C2775F1EC5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F3E4E3C80E506749(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierReplaceContentRogueShopConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierReplaceContentRogueShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREPLACECONTENTROGUESHOPCONFIG_METHOD_3_F3E4E3C80E506749_OFFSET))(a1, a2);
		}
	};
}
