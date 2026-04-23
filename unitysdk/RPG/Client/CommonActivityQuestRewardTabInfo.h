#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class ActivityQuestRewardDataRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABINFO_GET_QUESTDATALIST_OFFSET UNITYSDK_OFFSET(0xA0B9C30)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABINFO_GET_TABID_OFFSET UNITYSDK_OFFSET(0xA0B9C10)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABINFO_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xA0B9C20)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABINFO_GET_UNLOCKQUEST_OFFSET UNITYSDK_OFFSET(0xA0B9C40)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABINFO_GET_UNLOCKSCHEDULE_OFFSET UNITYSDK_OFFSET(0xA0B9C60)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABINFO_REFRESHALLQUESTDATA_OFFSET UNITYSDK_OFFSET(0xA0B99C0)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABINFO_SET_UNLOCKQUEST_OFFSET UNITYSDK_OFFSET(0xA0B9C50)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA0B9B10)

namespace RPG::Client
{
	inline static constexpr unsigned int CommonActivityQuestRewardTabInfo_TypeDefinitionIndex = 56939;

	class CommonActivityQuestRewardTabInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _QuestIDArr; // 0x10
		::RPG::Client::ScheduleData* _UnlockSchedule_k__BackingField; // 0x18
		::RPG::Client::QuestData* _UnlockQuest_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* _QuestDataList_k__BackingField; // 0x28
		::System::UInt32 _UnlockQuestID; // 0x30
		::System::UInt32 _TabID_k__BackingField; // 0x34
		::RPG::Client::TextID _Title_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::GameCore::ActivityQuestRewardDataRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityQuestRewardDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABINFO__CTOR_OFFSET))(this, row);
		}

		::System::Void RefreshAllQuestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABINFO_REFRESHALLQUESTDATA_OFFSET))(this);
		}

		::System::UInt32 get_TabID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABINFO_GET_TABID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABINFO_GET_TITLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* get_QuestDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABINFO_GET_QUESTDATALIST_OFFSET))(this);
		}

		::RPG::Client::QuestData* get_UnlockQuest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABINFO_GET_UNLOCKQUEST_OFFSET))(this);
		}

		::System::Void set_UnlockQuest(::RPG::Client::QuestData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABINFO_SET_UNLOCKQUEST_OFFSET))(this, value);
		}

		::RPG::Client::ScheduleData* get_UnlockSchedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABINFO_GET_UNLOCKSCHEDULE_OFFSET))(this);
		}
	};
}
