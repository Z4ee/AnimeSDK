#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYTELEVISIONSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D383130)
#define RPG_GAMECORE_ACTIVITYTELEVISIONSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D383810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityTelevisionStageRow_TypeDefinitionIndex = 12500;

	class ActivityTelevisionStageRow : public ::System::Object
	{
	public:
		::System::String* OriginalMiniImagePath; // 0x10
		::System::String* MiniImagePath; // 0x18
		::System::String* OriginalImagePath; // 0x20
		::System::String* ImagePath; // 0x28
		::System::String* OriginalOutlineImagePath; // 0x30
		::RPG::Client::TextID Desc; // 0x38
		::RPG::Client::TextID OriginalDesc; // 0x48
		::RPG::Client::TextID OriginalStageName; // 0x58
		::System::UInt32 MissionID; // 0x68
		::System::UInt32 TelevisionID; // 0x6C
		::System::UInt32 Season; // 0x70
		::System::UInt32 QuestGroupID; // 0x74
		::System::UInt32 GotoID; // 0x78
		::System::UInt32 MappingInfo; // 0x7C
		::RPG::Client::TextID StageName; // 0x80
		::RPG::Client::TextID ChannelName; // 0x90
		::System::UInt32 EntranceID; // 0xA0
		::System::UInt32 ActivityModuleID; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityTelevisionStageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityTelevisionStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
