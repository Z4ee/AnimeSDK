#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNLAYERCONFIG_METHOD_3_C7E2BF61DE45BD6D_OFFSET UNITYSDK_OFFSET(0x1CFC0320)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNLAYERCONFIG_METHOD_3_F8D654CB709264D1_OFFSET UNITYSDK_OFFSET(0x1CFC0370)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC0360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnEnterRogueTournLayerConfig_TypeDefinitionIndex = 17054;

	class RogueModifierExecuteActionOnEnterRogueTournLayerConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNLAYERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C7E2BF61DE45BD6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournLayerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournLayerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNLAYERCONFIG_METHOD_3_C7E2BF61DE45BD6D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F8D654CB709264D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournLayerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNLAYERCONFIG_METHOD_3_F8D654CB709264D1_OFFSET))(a1, a2);
		}
	};
}
