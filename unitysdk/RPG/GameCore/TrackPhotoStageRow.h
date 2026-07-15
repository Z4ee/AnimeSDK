#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRACKPHOTOSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C15A710)
#define RPG_GAMECORE_TRACKPHOTOSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C15AD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackPhotoStageRow_TypeDefinitionIndex = 12033;

	class TrackPhotoStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* JunkNumList; // 0x10
		::Il2CppArray<::System::UInt32>* StarList; // 0x18
		::Il2CppArray<::System::Single>* XYRange; // 0x20
		::System::String* ImagePath; // 0x28
		::System::UInt32 MainMissionID; // 0x30
		::System::UInt32 ActivityModuleID; // 0x34
		::RPG::Client::TextID StageDesc; // 0x38
		::System::UInt32 RaidID; // 0x48
		::System::Single DisLimit; // 0x4C
		::RPG::Client::TextID StageName; // 0x50
		::RPG::Client::TextID StageLocation; // 0x60
		::System::UInt32 StageID; // 0x70
		::System::UInt32 UnlockSubMissionID; // 0x74
		::System::UInt32 TotalTrashCanNum; // 0x78
		::System::UInt32 MaxScore; // 0x7C
		::System::Single TrackMoveSpeed; // 0x80
		::System::Single Fov; // 0x84

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
