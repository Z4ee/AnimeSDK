#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRACKPHOTOSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5D7AF0)
#define RPG_GAMECORE_TRACKPHOTOSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D8110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackPhotoStageRow_TypeDefinitionIndex = 12422;

	class TrackPhotoStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* JunkNumList; // 0x10
		::System::String* ImagePath; // 0x18
		::Il2CppArray<::System::Single>* XYRange; // 0x20
		::Il2CppArray<::System::UInt32>* StarList; // 0x28
		::System::UInt32 MaxScore; // 0x30
		::System::UInt32 ActivityModuleID; // 0x34
		::RPG::Client::TextID StageLocation; // 0x38
		::System::UInt32 MainMissionID; // 0x48
		::System::UInt32 UnlockSubMissionID; // 0x4C
		::RPG::Client::TextID StageName; // 0x50
		::System::UInt32 RaidID; // 0x60
		::System::UInt32 TotalTrashCanNum; // 0x64
		::System::Single DisLimit; // 0x68
		::System::Single TrackMoveSpeed; // 0x6C
		::RPG::Client::TextID StageDesc; // 0x70
		::System::Single Fov; // 0x80
		::System::UInt32 StageID; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrackPhotoStageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrackPhotoStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKPHOTOSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
