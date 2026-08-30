#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOUNTCONFIG_METHOD_3_61AADF88EA5BB58A_OFFSET UNITYSDK_OFFSET(0x1EEFB880)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOUNTCONFIG_METHOD_3_7B30C5DDB59B434E_OFFSET UNITYSDK_OFFSET(0x1EEFB830)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFB870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyShopRefreshCountConfig_TypeDefinitionIndex = 17537;

	class RogueModifierModifyShopRefreshCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7B30C5DDB59B434E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopRefreshCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopRefreshCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOUNTCONFIG_METHOD_3_7B30C5DDB59B434E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_61AADF88EA5BB58A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopRefreshCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopRefreshCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOUNTCONFIG_METHOD_3_61AADF88EA5BB58A_OFFSET))(a1, a2);
		}
	};
}
