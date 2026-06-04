#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicStoryCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_104;
namespace RPG::Client { class QuestData; }
namespace RPG::Client { class RogueMagicStoryArchiveDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_COUNTNOTHIDESTORIES_OFFSET UNITYSDK_OFFSET(0xC7B4E50)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7A6AE0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GETAVAILABLESTORYITEMLIST_OFFSET UNITYSDK_OFFSET(0xC7B49D0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GETREWARDQUESTDATALIST_OFFSET UNITYSDK_OFFSET(0xC7B4510)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GETSTORYITEMLISTBYCATEGORY_OFFSET UNITYSDK_OFFSET(0xC7B4260)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GETSTORYITEM_OFFSET UNITYSDK_OFFSET(0xC7B4160)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GET_FINALREWARDQUESTDATA_OFFSET UNITYSDK_OFFSET(0xC7B4DB0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GET_FINISHSTORYIDLIST_OFFSET UNITYSDK_OFFSET(0xC7B5000)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GET_STORYARCHIVEDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0xC7B4FE0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_HAVEREWARDTAKE_OFFSET UNITYSDK_OFFSET(0xC799B10)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_INIT_OFFSET UNITYSDK_OFFSET(0xC7A6300)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_SET_FINISHSTORYIDLIST_OFFSET UNITYSDK_OFFSET(0xC7B5010)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_SET_STORYARCHIVEDATAITEMLIST_OFFSET UNITYSDK_OFFSET(0xC7B4FF0)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_SYNCALL_OFFSET UNITYSDK_OFFSET(0xC7AA360)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0xC7AC670)
#define RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC7A5D20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicStoryArchiveCollection_TypeDefinitionIndex = 63070;

	class RogueMagicStoryArchiveCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>* _StoryArchiveDataItemList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _QuestIDList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishStoryIDList_k__BackingField; // 0x20
		::System::UInt32 _FinalRewardQuestID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::Class_1_075C34D03AFA1215_104* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_104*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_SYNCALL_OFFSET))(this, a1);
		}

		::System::Void SyncUpdate(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_SYNCUPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicStoryArchiveDataItem* GetStoryItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueMagicStoryArchiveDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GETSTORYITEM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>* GetStoryItemListByCategory(::RPG::GameCore::RogueMagicStoryCategory a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>*(*)(::PVOID, ::RPG::GameCore::RogueMagicStoryCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GETSTORYITEMLISTBYCATEGORY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetRewardQuestDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GETREWARDQUESTDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>* GetAvailableStoryItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GETAVAILABLESTORYITEMLIST_OFFSET))(this);
		}

		::System::Boolean HaveRewardTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_HAVEREWARDTAKE_OFFSET))(this);
		}

		::System::UInt32 CountNotHideStories()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_COUNTNOTHIDESTORIES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>* get_StoryArchiveDataItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GET_STORYARCHIVEDATAITEMLIST_OFFSET))(this);
		}

		::System::Void set_StoryArchiveDataItemList(::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueMagicStoryArchiveDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_SET_STORYARCHIVEDATAITEMLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishStoryIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GET_FINISHSTORYIDLIST_OFFSET))(this);
		}

		::System::Void set_FinishStoryIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_SET_FINISHSTORYIDLIST_OFFSET))(this, a1);
		}

		::RPG::Client::QuestData* get_FinalRewardQuestData()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSTORYARCHIVECOLLECTION_GET_FINALREWARDQUESTDATA_OFFSET))(this);
		}
	};
}
