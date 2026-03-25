#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNEXPSCOREROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x176657C0)
#define RPG_GAMECORE_ROGUETOURNEXPSCOREROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17665940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournExpScoreRow_TypeDefinitionIndex = 13708;

	class RogueTournExpScoreRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 ScoreExpID; // 0x14
		::System::UInt32 WeeklyScore; // 0x18
		::System::UInt32 Exp; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXPSCOREROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournExpScoreRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournExpScoreRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNEXPSCOREROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
