#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG_METHOD_3_7BEC950BFA48B828_OFFSET UNITYSDK_OFFSET(0x19B99630)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG_METHOD_3_A5EB6CAEC68CD711_OFFSET UNITYSDK_OFFSET(0x19B99560)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B995E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyWorkbenchMagicScepterShopConfig_TypeDefinitionIndex = 16994;

	class RogueModifierModifyWorkbenchMagicScepterShopConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A5EB6CAEC68CD711(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicScepterShopConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicScepterShopConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG_METHOD_3_A5EB6CAEC68CD711_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7BEC950BFA48B828(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicScepterShopConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyWorkbenchMagicScepterShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYWORKBENCHMAGICSCEPTERSHOPCONFIG_METHOD_3_7BEC950BFA48B828_OFFSET))(a1, a2);
		}
	};
}
