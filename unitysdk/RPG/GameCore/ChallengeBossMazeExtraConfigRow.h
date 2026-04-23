#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHALLENGEBOSSMAZEEXTRACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187BD650)
#define RPG_GAMECORE_CHALLENGEBOSSMAZEEXTRACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187BD790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeBossMazeExtraConfigRow_TypeDefinitionIndex = 12245;

	class ChallengeBossMazeExtraConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 MonsterID1; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 MonsterID2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSMAZEEXTRACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChallengeBossMazeExtraConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeBossMazeExtraConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSMAZEEXTRACONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
