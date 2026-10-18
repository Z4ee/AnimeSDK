#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSICRHYTHMGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D89E6E0)
#define RPG_GAMECORE_MUSICRHYTHMGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D89F240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmGroupRow_TypeDefinitionIndex = 14263;

	class MusicRhythmGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* InputTimeList; // 0x10
		::Il2CppArray<::System::Single>* LongInputUpTimeList; // 0x18
		::System::String* GroupCoverImgPath; // 0x20
		::Il2CppArray<::System::UInt32>* RewardTrackIDList; // 0x28
		::Il2CppArray<::System::Single>* LongInputTimeList; // 0x30
		::System::String* BGMpath; // 0x38
		::System::UInt32 TakeMissionID; // 0x40
		::System::UInt32 UnlockSubMissionID; // 0x44
		::System::UInt32 Phase; // 0x48
		::System::UInt32 EntranceID; // 0x4C
		::System::UInt32 EntityGroupMission; // 0x50
		::System::UInt32 ID; // 0x54
		::RPG::Client::TextID GroupName; // 0x58
		::RPG::Client::TextID MapName; // 0x68
		::System::UInt32 GotoID; // 0x78
		::System::UInt32 EntityGroup; // 0x7C
		::System::UInt32 MapInfoID; // 0x80
		::System::UInt32 Index; // 0x84
		::RPG::Client::TextID GroupDesc; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MusicRhythmGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
