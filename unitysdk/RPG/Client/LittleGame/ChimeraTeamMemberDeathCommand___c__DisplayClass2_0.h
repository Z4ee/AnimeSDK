#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class ChimeraTeamMemberDeathCommand; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC313C0)
#define RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND___C__DISPLAYCLASS2_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x1AC31510)
#define RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND___C__DISPLAYCLASS2_0__EXECUTE_B__1_OFFSET UNITYSDK_OFFSET(0x1AC316C0)
#define RPG_CLIENT_LITTLEGAME_CHIMERATEAMMEMBERDEATHCOMMAND___C__DISPLAYCLASS2_0__EXECUTE_B__2_OFFSET UNITYSDK_OFFSET(0x1AC31760)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraTeamMemberDeathCommand___c__DisplayClass2_0_TypeDefinitionIndex = 76165;

	class ChimeraTeamMemberDeathCommand___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChimeraTeamMemberDeathCommand* __4__this; // 0x10
		::System::Action* finishCallback; // 0x18
		::System::Action* __9__2; // 0x20
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle; // 0x28
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
