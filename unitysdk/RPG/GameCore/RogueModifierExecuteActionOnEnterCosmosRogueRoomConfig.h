#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCOSMOSROGUEROOMCONFIG_METHOD_3_420B5F644B2A051B_OFFSET UNITYSDK_OFFSET(0x19B51540)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCOSMOSROGUEROOMCONFIG_METHOD_3_8B4DE780567E3782_OFFSET UNITYSDK_OFFSET(0x19B5CBA0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCOSMOSROGUEROOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B514F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnEnterCosmosRogueRoomConfig_TypeDefinitionIndex = 17051;

	class RogueModifierExecuteActionOnEnterCosmosRogueRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCOSMOSROGUEROOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8B4DE780567E3782(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterCosmosRogueRoomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterCosmosRogueRoomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCOSMOSROGUEROOMCONFIG_METHOD_3_8B4DE780567E3782_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_420B5F644B2A051B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterCosmosRogueRoomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterCosmosRogueRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCOSMOSROGUEROOMCONFIG_METHOD_3_420B5F644B2A051B_OFFSET))(a1, a2);
		}
	};
}
