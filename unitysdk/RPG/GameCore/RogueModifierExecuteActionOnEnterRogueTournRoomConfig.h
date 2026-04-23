#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCONFIG_METHOD_3_36DC267BC54A0715_OFFSET UNITYSDK_OFFSET(0x18D35B40)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCONFIG_METHOD_3_B3D6112E2C58043C_OFFSET UNITYSDK_OFFSET(0x18D3D1F0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D35AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnEnterRogueTournRoomConfig_TypeDefinitionIndex = 16872;

	class RogueModifierExecuteActionOnEnterRogueTournRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B3D6112E2C58043C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournRoomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournRoomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCONFIG_METHOD_3_B3D6112E2C58043C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_36DC267BC54A0715(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournRoomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCONFIG_METHOD_3_36DC267BC54A0715_OFFSET))(a1, a2);
		}
	};
}
