#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IActivityQuestRewardTabInfo; }
namespace RPG::GameCore { class ActivityQuestRewardTabRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABGROUPINFO_ADDTAB_OFFSET UNITYSDK_OFFSET(0x940BD30)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABGROUPINFO_GET_BGPREFABPATH_OFFSET UNITYSDK_OFFSET(0x940BEF0)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABGROUPINFO_GET_TABGROUPID_OFFSET UNITYSDK_OFFSET(0x940BEC0)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABGROUPINFO_GET_TABINFOLIST_OFFSET UNITYSDK_OFFSET(0x940BEE0)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABGROUPINFO_GET_TABITEMPREFABPATH_OFFSET UNITYSDK_OFFSET(0x940BF00)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABGROUPINFO_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x940BED0)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABGROUPINFO_REFRESHALLQUESTDATA_OFFSET UNITYSDK_OFFSET(0x940B780)
#define RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABGROUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x940BC70)

namespace RPG::Client
{
	inline static constexpr unsigned int CommonActivityQuestRewardTabGroupInfo_TypeDefinitionIndex = 50095;

	class CommonActivityQuestRewardTabGroupInfo : public ::System::Object
	{
	public:
		::System::String* _BgPrefabPath_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::IActivityQuestRewardTabInfo*>* _TabInfoList_k__BackingField; // 0x18
		::System::String* _TabItemPrefabPath_k__BackingField; // 0x20
		::RPG::Client::TextID _Title_k__BackingField; // 0x28
		::System::UInt32 _TabGroupID_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::GameCore::ActivityQuestRewardTabRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityQuestRewardTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABGROUPINFO__CTOR_OFFSET))(this, row);
		}

		::System::Void AddTab(::RPG::Client::IActivityQuestRewardTabInfo* tabInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IActivityQuestRewardTabInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABGROUPINFO_ADDTAB_OFFSET))(this, tabInfo);
		}

		::System::Void RefreshAllQuestData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABGROUPINFO_REFRESHALLQUESTDATA_OFFSET))(this);
		}

		::System::UInt32 get_TabGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABGROUPINFO_GET_TABGROUPID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABGROUPINFO_GET_TITLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IActivityQuestRewardTabInfo*>* get_TabInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IActivityQuestRewardTabInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABGROUPINFO_GET_TABINFOLIST_OFFSET))(this);
		}

		::System::String* get_BgPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABGROUPINFO_GET_BGPREFABPATH_OFFSET))(this);
		}

		::System::String* get_TabItemPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYQUESTREWARDTABGROUPINFO_GET_TABITEMPREFABPATH_OFFSET))(this);
		}
	};
}
