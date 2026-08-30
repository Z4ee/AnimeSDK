#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODNUMCONFIG_METHOD_3_152461E3D4C6E1AD_OFFSET UNITYSDK_OFFSET(0x1D3FABB0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODNUMCONFIG_METHOD_3_53B8693196289C29_OFFSET UNITYSDK_OFFSET(0x1D3FAB60)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FABA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyShopGoodNumConfig_TypeDefinitionIndex = 17774;

	class RogueModifierModifyShopGoodNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_53B8693196289C29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopGoodNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopGoodNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODNUMCONFIG_METHOD_3_53B8693196289C29_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_152461E3D4C6E1AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopGoodNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopGoodNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPGOODNUMCONFIG_METHOD_3_152461E3D4C6E1AD_OFFSET))(a1, a2);
		}
	};
}
