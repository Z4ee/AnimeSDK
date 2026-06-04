#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKINJUREDCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBDE4280)
#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKINJUREDCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xBDE42E0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraWorkInjuredCommand_TypeDefinitionIndex = 71206;

	class ChimeraWorkInjuredCommand : public ::System::Object
	{
	public:
		::System::Single CurVal; // 0x10
		::System::UInt32 WorkID; // 0x14
		::System::Single ChangeVal; // 0x18

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKINJUREDCOMMAND__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKINJUREDCOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
