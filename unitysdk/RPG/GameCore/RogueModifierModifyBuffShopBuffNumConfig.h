#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG_METHOD_3_21AF0A473A31F097_OFFSET UNITYSDK_OFFSET(0x19B5EEC0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG_METHOD_3_E71CB7B8F5B63C6E_OFFSET UNITYSDK_OFFSET(0x19B54E20)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B54DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyBuffShopBuffNumConfig_TypeDefinitionIndex = 17043;

	class RogueModifierModifyBuffShopBuffNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_21AF0A473A31F097(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBuffShopBuffNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBuffShopBuffNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG_METHOD_3_21AF0A473A31F097_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E71CB7B8F5B63C6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBuffShopBuffNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBuffShopBuffNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG_METHOD_3_E71CB7B8F5B63C6E_OFFSET))(a1, a2);
		}
	};
}
