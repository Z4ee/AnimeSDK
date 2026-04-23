#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18AD85A0)
#define RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18AD8CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleSpecialUIInfoRow_TypeDefinitionIndex = 13290;

	class MazePuzzleSpecialUIInfoRow : public ::System::Object
	{
	public:
		::System::String* Title; // 0x10
		::System::String* Desc01; // 0x18
		::System::String* Desc02; // 0x20
		::System::String* Desc03; // 0x28
		::System::Boolean IsUImode; // 0x30
		::System::UInt32 SpecialModeID; // 0x34
		::System::UInt32 PuzzleType; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MazePuzzleSpecialUIInfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleSpecialUIInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLESPECIALUIINFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
