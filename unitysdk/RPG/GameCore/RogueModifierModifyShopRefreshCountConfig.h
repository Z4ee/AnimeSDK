#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOUNTCONFIG_METHOD_3_61AADF88EA5BB58A_OFFSET UNITYSDK_OFFSET(0x18D42D90)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOUNTCONFIG_METHOD_3_EF50475A2B9AEE53_OFFSET UNITYSDK_OFFSET(0x18D42CC0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D42D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyShopRefreshCountConfig_TypeDefinitionIndex = 16857;

	class RogueModifierModifyShopRefreshCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EF50475A2B9AEE53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopRefreshCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopRefreshCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOUNTCONFIG_METHOD_3_EF50475A2B9AEE53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_61AADF88EA5BB58A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyShopRefreshCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyShopRefreshCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSHOPREFRESHCOUNTCONFIG_METHOD_3_61AADF88EA5BB58A_OFFSET))(a1, a2);
		}
	};
}
