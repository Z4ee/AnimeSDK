#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraAbilityProgressBase; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERASHOWWORKINITPERFORMANCECOMMAND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA691550)
#define RPG_CLIENT_LITTLEGAME_CHIMERASHOWWORKINITPERFORMANCECOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xA691510)
#define RPG_CLIENT_LITTLEGAME_CHIMERASHOWWORKINITPERFORMANCECOMMAND__EXECUTE_B__3_0_OFFSET UNITYSDK_OFFSET(0xA691680)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraShowWorkInitPerformanceCommand_TypeDefinitionIndex = 70404;

	class ChimeraShowWorkInitPerformanceCommand : public ::System::Object
	{
	public:
		::System::Action* _FinishCallback; // 0x10
		::RPG::GameCore::ChimeraAbilityProgressBase* _Config; // 0x18

		::System::Void _ctor(::RPG::GameCore::ChimeraAbilityProgressBase* start, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraAbilityProgressBase*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERASHOWWORKINITPERFORMANCECOMMAND__CTOR_OFFSET))(this, start, finishCallback);
		}

		::System::Void Execute(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle, ::System::Action* finishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERASHOWWORKINITPERFORMANCECOMMAND_EXECUTE_OFFSET))(this, puzzle, finishCallback);
		}

		::System::Void _Execute_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERASHOWWORKINITPERFORMANCECOMMAND__EXECUTE_B__3_0_OFFSET))(this);
		}
	};
}
