#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_22.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class GridFightGuideQuestConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETCHAPTERQUESTLISTREWARD_OFFSET UNITYSDK_OFFSET(0xBB953B0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETCHAPTERREWARD_OFFSET UNITYSDK_OFFSET(0xBB956B0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETQUESTBYINDEX_OFFSET UNITYSDK_OFFSET(0xBB95120)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERAIMQUESTDATA_OFFSET UNITYSDK_OFFSET(0xBB94C80)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERAIMQUESTID_OFFSET UNITYSDK_OFFSET(0xBB94C60)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERID_OFFSET UNITYSDK_OFFSET(0xBB936C0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERQUESTIDS_OFFSET UNITYSDK_OFFSET(0xBB93710)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERQUESTSTATUS_OFFSET UNITYSDK_OFFSET(0xBB94F00)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERQUESTS_OFFSET UNITYSDK_OFFSET(0xBB94D30)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_COMPLETEDQUESTCNT_OFFSET UNITYSDK_OFFSET(0xBB94F60)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_COMPLETENEEDCNT_OFFSET UNITYSDK_OFFSET(0xBB94EA0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0xBB93970)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_ISCHAPTERAIMCOMPLETED_OFFSET UNITYSDK_OFFSET(0xBB94930)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_ISCHAPTERCLEAR_OFFSET UNITYSDK_OFFSET(0xBB949C0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_TOTALQUESTCNT_OFFSET UNITYSDK_OFFSET(0xBB950C0)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_QUESTWEIGHT_OFFSET UNITYSDK_OFFSET(0xBB95760)
#define RPG_CLIENT_GRIDFIGHTGUIDECHAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0xBB946E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGuideChapter_TypeDefinitionIndex = 60676;

	class GridFightGuideChapter : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightGuideQuestConfigRow* _ConfigRow; // 0x10

		::System::Void _ctor(::RPG::GameCore::GridFightGuideQuestConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightGuideQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER__CTOR_OFFSET))(this, a1);
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

		::Enum_3_4608E37A1B3D374A_22 get_ChapterQuestStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_22(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GET_CHAPTERQUESTSTATUS_OFFSET))(this);
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

		::RPG::Client::QuestData* GetQuestByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETQUESTBYINDEX_OFFSET))(this, a1);
		}

		::System::Void GetChapterQuestListReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETCHAPTERQUESTLISTREWARD_OFFSET))(this);
		}

		::System::Void GetChapterReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_GETCHAPTERREWARD_OFFSET))(this);
		}

		static ::System::Int32 QuestWeight(::RPG::Client::QuestData* a1)
		{
			return ((::System::Int32(*)(::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGUIDECHAPTER_QUESTWEIGHT_OFFSET))(a1);
		}
	};
}
