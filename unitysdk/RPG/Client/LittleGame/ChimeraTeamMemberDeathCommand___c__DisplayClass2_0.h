#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class ChimeraTeamMemberDeathCommand; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA692270)
#define RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND___C__DISPLAYCLASS2_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0xA6923B0)
#define RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND___C__DISPLAYCLASS2_0__EXECUTE_B__1_OFFSET UNITYSDK_OFFSET(0xA692530)
#define RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND___C__DISPLAYCLASS2_0__EXECUTE_B__2_OFFSET UNITYSDK_OFFSET(0xA6925B0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraTeamMemberDeathCommand___c__DisplayClass2_0_TypeDefinitionIndex = 70400;

	class ChimeraTeamMemberDeathCommand___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle; // 0x10
		::System::Action* finishCallback; // 0x18
		::RPG::Client::LittleGame::ChimeraTeamMemberDeathCommand* __4__this; // 0x20
		::System::Action* __9__2; // 0x28
		::System::UInt32 blockID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND___C__DISPLAYCLASS2_0__EXECUTE_B__0_OFFSET))(this);
		}

		::System::Void _Execute_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND___C__DISPLAYCLASS2_0__EXECUTE_B__1_OFFSET))(this);
		}

		::System::Void _Execute_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND___C__DISPLAYCLASS2_0__EXECUTE_B__2_OFFSET))(this);
		}
	};
}
