#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSICRHYTHMGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17466FC0)
#define RPG_GAMECORE_MUSICRHYTHMGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17467B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmGroupRow_TypeDefinitionIndex = 13059;

	class MusicRhythmGroupRow : public ::System::Object
	{
	public:
		::System::String* BGMpath; // 0x10
		::System::String* GroupCoverImgPath; // 0x18
		::Il2CppArray<::System::Single>* InputTimeList; // 0x20
		::Il2CppArray<::System::Single>* LongInputUpTimeList; // 0x28
		::Il2CppArray<::System::Single>* LongInputTimeList; // 0x30
		::Il2CppArray<::System::UInt32>* RewardTrackIDList; // 0x38
		::RPG::Client::TextID MapName; // 0x40
		::RPG::Client::TextID GroupName; // 0x50
		::System::UInt32 GotoID; // 0x60
		::System::UInt32 Phase; // 0x64
		::System::UInt32 EntityGroup; // 0x68
		::System::UInt32 UnlockSubMissionID; // 0x6C
		::System::UInt32 ID; // 0x70
		::System::UInt32 EntityGroupMission; // 0x74
		::RPG::Client::TextID GroupDesc; // 0x78
		::System::UInt32 EntranceID; // 0x88
		::System::UInt32 MapInfoID; // 0x8C
		::System::UInt32 TakeMissionID; // 0x90
		::System::UInt32 Index; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MusicRhythmGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
