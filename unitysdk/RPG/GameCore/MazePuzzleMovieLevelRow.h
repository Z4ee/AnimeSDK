#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MazePuzzleMovieGameMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF4F7A0)
#define RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF50020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleMovieLevelRow_TypeDefinitionIndex = 13559;

	class MazePuzzleMovieLevelRow : public ::System::Object
	{
	public:
		::System::String* TriggerCustomString; // 0x10
		::Il2CppArray<::System::UInt32>* QuestList; // 0x18
		::System::UInt32 Tutorial; // 0x20
		::System::UInt32 UnlockConditionMode; // 0x24
		::RPG::Client::TextID Description; // 0x28
		::RPG::Client::TextID Title; // 0x38
		::System::UInt32 UnlockCondition; // 0x48
		::RPG::GameCore::MazePuzzleMovieGameMode MovieMode; // 0x4C
		::System::UInt32 UnlockSubmission; // 0x50
		::System::UInt32 MovieLevel; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazePuzzleMovieLevelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleMovieLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEMOVIELEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
