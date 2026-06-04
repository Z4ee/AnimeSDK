#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRACKPHOTOSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19DEE2F0)
#define RPG_GAMECORE_TRACKPHOTOSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEE910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackPhotoStageRow_TypeDefinitionIndex = 11901;

	class TrackPhotoStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* XYRange; // 0x10
		::Il2CppArray<::System::UInt32>* JunkNumList; // 0x18
		::System::String* ImagePath; // 0x20
		::Il2CppArray<::System::UInt32>* StarList; // 0x28
		::System::UInt32 MaxScore; // 0x30
		::System::UInt32 ActivityModuleID; // 0x34
		::RPG::Client::TextID StageLocation; // 0x38
		::System::Single TrackMoveSpeed; // 0x48
		::System::Single Fov; // 0x4C
		::System::UInt32 RaidID; // 0x50
		::System::UInt32 TotalTrashCanNum; // 0x54
		::System::Single DisLimit; // 0x58
		::System::UInt32 UnlockSubMissionID; // 0x5C
		::RPG::Client::TextID StageDesc; // 0x60
		::RPG::Client::TextID StageName; // 0x70
		::System::UInt32 MainMissionID; // 0x80
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
