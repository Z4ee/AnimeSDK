#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSICRHYTHMLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x174683D0)
#define RPG_GAMECORE_MUSICRHYTHMLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17468B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmLevelRow_TypeDefinitionIndex = 13057;

	class MusicRhythmLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StarScoreList; // 0x10
		::Il2CppArray<::System::UInt32>* InputScore; // 0x18
		::Il2CppArray<::System::UInt32>* StarRewardIDList; // 0x20
		::System::UInt32 ID; // 0x28
		::System::UInt32 EnterTypeParam; // 0x2C
		::System::UInt32 EnterType; // 0x30
		::System::UInt32 FeverComboCount; // 0x34
		::System::UInt32 LevelSecCount; // 0x38
		::System::UInt32 Difficulty; // 0x3C
		::System::UInt32 Group; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MusicRhythmLevelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMLEVELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
