#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYTELEVISIONSEASONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19409290)
#define RPG_GAMECORE_ACTIVITYTELEVISIONSEASONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19409550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityTelevisionSeasonRow_TypeDefinitionIndex = 11895;

	class ActivityTelevisionSeasonRow : public ::System::Object
	{
	public:
		::System::String* BuffLevelDefaultBackgroundPath; // 0x10
		::Il2CppArray<::System::String*>* BuffLevelBackgroundPathList; // 0x18
		::Il2CppArray<::System::String*>* BuffLevelIconPathList; // 0x20
		::System::UInt32 LastStage; // 0x28
		::System::UInt32 LastStageQuest; // 0x2C
		::System::UInt32 LevelMessageSubmission; // 0x30
		::System::UInt32 Season; // 0x34
		::System::UInt32 FirstMainMissionID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONSEASONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityTelevisionSeasonRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityTelevisionSeasonRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONSEASONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
