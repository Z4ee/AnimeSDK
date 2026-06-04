#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERATURNUPDATECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBDE3590)
#define RPG_CLIENT_LITTLEGAME_CHIMERATURNUPDATECOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xBDE3780)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraTurnUpdateCommand_TypeDefinitionIndex = 71202;

	class ChimeraTurnUpdateCommand : public ::System::Object
	{
	public:
		::System::UInt32 NewTurnIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATURNUPDATECOMMAND__CTOR_OFFSET))(this);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERATURNUPDATECOMMAND_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
