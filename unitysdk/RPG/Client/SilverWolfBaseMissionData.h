#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SILVERWOLFBASEMISSIONDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0xE086F20)
#define RPG_CLIENT_SILVERWOLFBASEMISSIONDATA_GET_HASREWARDAVAIL_OFFSET UNITYSDK_OFFSET(0xE087160)
#define RPG_CLIENT_SILVERWOLFBASEMISSIONDATA_GET_QUESTCLOSE_OFFSET UNITYSDK_OFFSET(0xE087050)
#define RPG_CLIENT_SILVERWOLFBASEMISSIONDATA_GET_QUESTFINISH_OFFSET UNITYSDK_OFFSET(0xE086FA0)
#define RPG_CLIENT_SILVERWOLFBASEMISSIONDATA_GET_UNLOCKMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0xE087270)
#define RPG_CLIENT_SILVERWOLFBASEMISSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE087330)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfBaseMissionData_TypeDefinitionIndex = 67953;

	class SilverWolfBaseMissionData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestIDs; // 0x10
		::System::UInt32 UnlockMission; // 0x18
		::System::UInt32 MappingInfoID; // 0x1C
		::System::UInt32 FinalQuestID; // 0x20
		::System::UInt32 MissionID; // 0x24
		::System::UInt32 EntranceID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFBASEMISSIONDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFBASEMISSIONDATA_GET_GOTOID_OFFSET))(this);
		}

		::System::Boolean get_QuestFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFBASEMISSIONDATA_GET_QUESTFINISH_OFFSET))(this);
		}

		::System::Boolean get_QuestClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFBASEMISSIONDATA_GET_QUESTCLOSE_OFFSET))(this);
		}

		::System::Boolean get_HasRewardAvail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFBASEMISSIONDATA_GET_HASREWARDAVAIL_OFFSET))(this);
		}

		::System::Boolean get_UnlockMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFBASEMISSIONDATA_GET_UNLOCKMISSIONFINISH_OFFSET))(this);
		}
	};
}
