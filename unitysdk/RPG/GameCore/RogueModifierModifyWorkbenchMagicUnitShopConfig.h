#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICUNITSHOPCONFIG_METHOD_3_7F8CCEE644E20153_OFFSET UNITYSDK_OFFSET(0x17636B10)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICUNITSHOPCONFIG_METHOD_3_F1E7671503A2C88A_OFFSET UNITYSDK_OFFSET(0x17636BE0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICUNITSHOPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17636B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyWorkbenchMagicUnitShopConfig_TypeDefinitionIndex = 16426;

	class RogueModifierModifyWorkbenchMagicUnitShopConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICUNITSHOPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7F8CCEE644E20153(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicUnitShopConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicUnitShopConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICUNITSHOPCONFIG_METHOD_3_7F8CCEE644E20153_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F1E7671503A2C88A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicUnitShopConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicUnitShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICUNITSHOPCONFIG_METHOD_3_F1E7671503A2C88A_OFFSET))(a1, a2);
		}
	};
}
