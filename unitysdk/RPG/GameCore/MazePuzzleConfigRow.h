#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PuzzleFunc.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MAZEPUZZLECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D25FB00)
#define RPG_GAMECORE_MAZEPUZZLECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2601D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleConfigRow_TypeDefinitionIndex = 14403;

	class MazePuzzleConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::PuzzleFunc PuzzleFuncType; // 0x18
		::System::Single DefaultCDDuration; // 0x1C
		::RPG::Client::TextID ShowFuncBtnHint; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazePuzzleConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazePuzzleConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
