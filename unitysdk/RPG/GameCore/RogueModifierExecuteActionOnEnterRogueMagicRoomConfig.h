#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUEMAGICROOMCONFIG_METHOD_3_063C78141455A29E_OFFSET UNITYSDK_OFFSET(0x1D3F8020)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUEMAGICROOMCONFIG_METHOD_3_B5FF1A2D7E2DA6DA_OFFSET UNITYSDK_OFFSET(0x1D3F8070)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUEMAGICROOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F8060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnEnterRogueMagicRoomConfig_TypeDefinitionIndex = 17513;

	class RogueModifierExecuteActionOnEnterRogueMagicRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUEMAGICROOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_063C78141455A29E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueMagicRoomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueMagicRoomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUEMAGICROOMCONFIG_METHOD_3_063C78141455A29E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B5FF1A2D7E2DA6DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueMagicRoomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueMagicRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUEMAGICROOMCONFIG_METHOD_3_B5FF1A2D7E2DA6DA_OFFSET))(a1, a2);
		}
	};
}
