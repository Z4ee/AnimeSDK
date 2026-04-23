#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONBEFOREENTERROGUETOURNROOMCONFIG_METHOD_3_69E2E4C39E90C2A7_OFFSET UNITYSDK_OFFSET(0x18D34B80)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONBEFOREENTERROGUETOURNROOMCONFIG_METHOD_3_A3CE6E496660592E_OFFSET UNITYSDK_OFFSET(0x18D3C8F0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONBEFOREENTERROGUETOURNROOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D34B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionBeforeEnterRogueTournRoomConfig_TypeDefinitionIndex = 16873;

	class RogueModifierExecuteActionBeforeEnterRogueTournRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONBEFOREENTERROGUETOURNROOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A3CE6E496660592E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionBeforeEnterRogueTournRoomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionBeforeEnterRogueTournRoomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONBEFOREENTERROGUETOURNROOMCONFIG_METHOD_3_A3CE6E496660592E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_69E2E4C39E90C2A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionBeforeEnterRogueTournRoomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionBeforeEnterRogueTournRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONBEFOREENTERROGUETOURNROOMCONFIG_METHOD_3_69E2E4C39E90C2A7_OFFSET))(a1, a2);
		}
	};
}
