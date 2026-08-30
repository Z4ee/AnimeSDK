#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG_METHOD_3_C2E067DA87FCC4D2_OFFSET UNITYSDK_OFFSET(0x1D3F9BA0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG_METHOD_3_E71CB7B8F5B63C6E_OFFSET UNITYSDK_OFFSET(0x1D3F9BF0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F9BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyBuffShopBuffNumConfig_TypeDefinitionIndex = 17721;

	class RogueModifierModifyBuffShopBuffNumConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C2E067DA87FCC4D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBuffShopBuffNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBuffShopBuffNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG_METHOD_3_C2E067DA87FCC4D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E71CB7B8F5B63C6E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyBuffShopBuffNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyBuffShopBuffNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYBUFFSHOPBUFFNUMCONFIG_METHOD_3_E71CB7B8F5B63C6E_OFFSET))(a1, a2);
		}
	};
}
