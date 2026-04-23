#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETFIXEDMIRACLEINSHOPCONFIG_METHOD_3_34716EDAE31239BB_OFFSET UNITYSDK_OFFSET(0x18D469C0)
#define RPG_GAMECORE_ROGUEMODIFIERSETFIXEDMIRACLEINSHOPCONFIG_METHOD_3_DD956CC4777DD532_OFFSET UNITYSDK_OFFSET(0x18D46A90)
#define RPG_GAMECORE_ROGUEMODIFIERSETFIXEDMIRACLEINSHOPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D46A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetFixedMiracleInShopConfig_TypeDefinitionIndex = 16892;

	class RogueModifierSetFixedMiracleInShopConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETFIXEDMIRACLEINSHOPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_34716EDAE31239BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetFixedMiracleInShopConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetFixedMiracleInShopConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETFIXEDMIRACLEINSHOPCONFIG_METHOD_3_34716EDAE31239BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DD956CC4777DD532(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetFixedMiracleInShopConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetFixedMiracleInShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETFIXEDMIRACLEINSHOPCONFIG_METHOD_3_DD956CC4777DD532_OFFSET))(a1, a2);
		}
	};
}
