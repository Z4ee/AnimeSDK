#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRACKPHOTOSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x178A4A10)
#define RPG_GAMECORE_TRACKPHOTOSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x178A5040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackPhotoStageRow_TypeDefinitionIndex = 11403;

	class TrackPhotoStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* XYRange; // 0x10
		::Il2CppArray<::System::UInt32>* StarList; // 0x18
		::System::String* ImagePath; // 0x20
		::Il2CppArray<::System::UInt32>* JunkNumList; // 0x28
		::RPG::Client::TextID StageLocation; // 0x30
		::System::UInt32 ActivityModuleID; // 0x40
		::System::Single Fov; // 0x44
		::System::Single DisLimit; // 0x48
		::System::Single TrackMoveSpeed; // 0x4C
		::System::UInt32 StageID; // 0x50
		::System::UInt32 RaidID; // 0x54
		::System::UInt32 MaxScore; // 0x58
		::System::UInt32 MainMissionID; // 0x5C
		::System::UInt32 UnlockSubMissionID; // 0x60
		::System::UInt32 TotalTrashCanNum; // 0x64
		::RPG::Client::TextID StageName; // 0x68
		::RPG::Client::TextID StageDesc; // 0x78

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
