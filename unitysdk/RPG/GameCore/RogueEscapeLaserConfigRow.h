#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEESCAPELASERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D15DC0)
#define RPG_GAMECORE_ROGUEESCAPELASERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D16500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueEscapeLaserConfigRow_TypeDefinitionIndex = 13872;

	class RogueEscapeLaserConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ScoreperRound; // 0x10
		::Il2CppArray<::System::UInt32>* ScoreRange; // 0x18
		::System::UInt32 PrepareTime; // 0x20
		::System::UInt32 TotalRounds; // 0x24
		::System::UInt32 GameTimeperRound; // 0x28
		::System::UInt32 ParamGroupID; // 0x2C
		::System::UInt32 ScoreperWave; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEESCAPELASERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueEscapeLaserConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueEscapeLaserConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEESCAPELASERCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
