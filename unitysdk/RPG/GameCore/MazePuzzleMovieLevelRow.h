#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MazePuzzleMovieGameMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x173C76E0)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x173C7F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleMovieLevelRow_TypeDefinitionIndex = 12876;

	class MazePuzzleMovieLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::String* TriggerCustomString; // 0x18
		::System::UInt32 UnlockConditionMode; // 0x20
		::System::UInt32 UnlockSubmission; // 0x24
		::System::UInt32 UnlockCondition; // 0x28
		::RPG::GameCore::MazePuzzleMovieGameMode MovieMode; // 0x2C
		::RPG::Client::TextID Description; // 0x30
		::RPG::Client::TextID Title; // 0x40
		::System::UInt32 Tutorial; // 0x50
		::System::UInt32 MovieLevel; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MazePuzzleMovieLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleMovieLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
