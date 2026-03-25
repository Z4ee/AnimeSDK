#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7370FAEB2C64106B;
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAUSEABILITYCOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0x99A22B0)
#define RPG_CLIENT_LITTLEGAME_CHIMERAUSEABILITYCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x99A2280)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraUseAbilityCommand_TypeDefinitionIndex = 62385;

	class ChimeraUseAbilityCommand : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::System::UInt32 FromID; // 0x18
		::System::UInt32 TriggerID; // 0x1C

		::System::Void _ctor(::System::UInt32 fromID, ::System::String* jsonPath, ::Class_1_7370FAEB2C64106B* trigger)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Class_1_7370FAEB2C64106B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAUSEABILITYCOMMAND__CTOR_OFFSET))(this, fromID, jsonPath, trigger);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAUSEABILITYCOMMAND_EXECUTE_OFFSET))(this, puzzle, finishCallback);
		}
	};
}
