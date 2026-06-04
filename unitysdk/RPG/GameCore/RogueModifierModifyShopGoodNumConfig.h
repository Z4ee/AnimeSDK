#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODNUMCONFIG_METHOD_3_152461E3D4C6E1AD_OFFSET UNITYSDK_OFFSET(0x19B572E0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODNUMCONFIG_METHOD_3_B97D9F25199163B4_OFFSET UNITYSDK_OFFSET(0x19B603C0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B57290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyShopGoodNumConfig_TypeDefinitionIndex = 17095;

	class RogueModifierModifyShopGoodNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B97D9F25199163B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopGoodNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopGoodNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODNUMCONFIG_METHOD_3_B97D9F25199163B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_152461E3D4C6E1AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopGoodNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopGoodNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODNUMCONFIG_METHOD_3_152461E3D4C6E1AD_OFFSET))(a1, a2);
		}
	};
}
