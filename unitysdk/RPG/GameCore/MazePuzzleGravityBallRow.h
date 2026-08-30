#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLEGRAVITYBALLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D27DEE0)
#define RPG_GAMECORE_MAZEPUZZLEGRAVITYBALLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D27E0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleGravityBallRow_TypeDefinitionIndex = 13989;

	class MazePuzzleGravityBallRow : public ::System::Object
	{
	public:
		::System::String* HiddenStoryCode; // 0x10
		::System::String* WallPrefab; // 0x18
		::Il2CppArray<::System::UInt32>* DestructablePropList; // 0x20
		::System::UInt32 PuzzleID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEGRAVITYBALLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazePuzzleGravityBallRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleGravityBallRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLEGRAVITYBALLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
