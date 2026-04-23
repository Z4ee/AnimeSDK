#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_23.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class GridFightGuideQuestConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETCHAPTERQUESTLISTREWARD_OFFSET UNITYSDK_OFFSET(0xA4EE530)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETCHAPTERREWARD_OFFSET UNITYSDK_OFFSET(0xA4EE7F0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETQUESTBYINDEX_OFFSET UNITYSDK_OFFSET(0xA4EE300)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERAIMQUESTDATA_OFFSET UNITYSDK_OFFSET(0xA4EDEB0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERAIMQUESTID_OFFSET UNITYSDK_OFFSET(0xA4EDE90)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0xA4EC9D0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERQUESTIDS_OFFSET UNITYSDK_OFFSET(0xA4ECA20)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERQUESTSTATUS_OFFSET UNITYSDK_OFFSET(0xA4EE110)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERQUESTS_OFFSET UNITYSDK_OFFSET(0xA4EDF60)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_COMPLETEDQUESTCNT_OFFSET UNITYSDK_OFFSET(0xA4EE170)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_COMPLETENEEDCNT_OFFSET UNITYSDK_OFFSET(0xA4EE0B0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0xA4ECC90)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_ISCHAPTERAIMCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA4EDB90)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_ISCHAPTERCLEAR_OFFSET UNITYSDK_OFFSET(0xA4EDC20)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_TOTALQUESTCNT_OFFSET UNITYSDK_OFFSET(0xA4EE2A0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_QUESTWEIGHT_OFFSET UNITYSDK_OFFSET(0xA4EE8A0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4ED930)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGuideChapter_TypeDefinitionIndex = 59741;

	class GridFightGuideChapter : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightGuideQuestConfigRow* _ConfigRow; // 0x10

		::System::Void _ctor(::RPG::GameCore::GridFightGuideQuestConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightGuideQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_ChapterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERID_OFFSET))(this);
		}

		::System::UInt32 get_ChapterAimQuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERAIMQUESTID_OFFSET))(this);
		}

		::RPG::Client::QuestData* get_ChapterAimQuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERAIMQUESTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* get_ChapterQuests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERQUESTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ChapterQuestIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERQUESTIDS_OFFSET))(this);
		}

		::System::Boolean get_IsChapterAimCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_ISCHAPTERAIMCOMPLETED_OFFSET))(this);
		}

		::System::UInt32 get_CompleteNeedCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_COMPLETENEEDCNT_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_23 get_ChapterQuestStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_23(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERQUESTSTATUS_OFFSET))(this);
		}

		::System::Boolean get_IsChapterClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_ISCHAPTERCLEAR_OFFSET))(this);
		}

		::System::Int32 get_CompletedQuestCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_COMPLETEDQUESTCNT_OFFSET))(this);
		}

		::System::Int32 get_TotalQuestCnt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_TOTALQUESTCNT_OFFSET))(this);
		}

		::System::Boolean get_HasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_HASREWARD_OFFSET))(this);
		}

		::RPG::Client::QuestData* GetQuestByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETQUESTBYINDEX_OFFSET))(this, index);
		}

		::System::Void GetChapterQuestListReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETCHAPTERQUESTLISTREWARD_OFFSET))(this);
		}

		::System::Void GetChapterReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETCHAPTERREWARD_OFFSET))(this);
		}

		static ::System::Int32 QuestWeight(::RPG::Client::QuestData* questData)
		{
			return ((::System::Int32(*)(::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_QUESTWEIGHT_OFFSET))(questData);
		}
	};
}
