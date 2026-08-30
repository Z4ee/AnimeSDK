#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG_METHOD_3_7BEC950BFA48B828_OFFSET UNITYSDK_OFFSET(0x1D3FB090)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG_METHOD_3_B2E3343B2760B4AC_OFFSET UNITYSDK_OFFSET(0x1D3FB040)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FB080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyWorkbenchMagicScepterShopConfig_TypeDefinitionIndex = 17672;

	class RogueModifierModifyWorkbenchMagicScepterShopConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B2E3343B2760B4AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicScepterShopConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicScepterShopConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG_METHOD_3_B2E3343B2760B4AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7BEC950BFA48B828(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicScepterShopConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicScepterShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG_METHOD_3_7BEC950BFA48B828_OFFSET))(a1, a2);
		}
	};
}
