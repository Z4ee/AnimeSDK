#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRACKPHOTOSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190A3530)
#define RPG_GAMECORE_TRACKPHOTOSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190A3B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackPhotoStageRow_TypeDefinitionIndex = 11805;

	class TrackPhotoStageRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::Il2CppArray<::System::Single>* XYRange; // 0x18
		::Il2CppArray<::System::UInt32>* JunkNumList; // 0x20
		::Il2CppArray<::System::UInt32>* StarList; // 0x28
		::RPG::Client::TextID StageName; // 0x30
		::RPG::Client::TextID StageLocation; // 0x40
		::RPG::Client::TextID StageDesc; // 0x50
		::System::UInt32 UnlockSubMissionID; // 0x60
		::System::Single DisLimit; // 0x64
		::System::UInt32 ActivityModuleID; // 0x68
		::System::Single TrackMoveSpeed; // 0x6C
		::System::UInt32 MainMissionID; // 0x70
		::System::Single Fov; // 0x74
		::System::UInt32 StageID; // 0x78
		::System::UInt32 MaxScore; // 0x7C
		::System::UInt32 TotalTrashCanNum; // 0x80
		::System::UInt32 RaidID; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrackPhotoStageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrackPhotoStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOSTAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
