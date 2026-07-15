#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCOUNTCONFIG_METHOD_3_34FD02C8669BDC02_OFFSET UNITYSDK_OFFSET(0x1CFC03E0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCOUNTCONFIG_METHOD_3_BE4AD85C6FE7301E_OFFSET UNITYSDK_OFFSET(0x1CFC0430)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC0420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnEnterRogueTournRoomCountConfig_TypeDefinitionIndex = 17052;

	class RogueModifierExecuteActionOnEnterRogueTournRoomCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_34FD02C8669BDC02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournRoomCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournRoomCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCOUNTCONFIG_METHOD_3_34FD02C8669BDC02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BE4AD85C6FE7301E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournRoomCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRogueTournRoomCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROGUETOURNROOMCOUNTCONFIG_METHOD_3_BE4AD85C6FE7301E_OFFSET))(a1, a2);
		}
	};
}
