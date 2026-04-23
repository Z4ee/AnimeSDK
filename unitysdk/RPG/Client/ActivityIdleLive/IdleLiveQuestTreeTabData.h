#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveQuestTreeItemData; }
namespace RPG::GameCore { class IdleLiveQuestTreeTabRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B6E6D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_GETCHAPTERQUESTLISTREWARD_OFFSET UNITYSDK_OFFSET(0x9B6FEC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_GETQUESTLIST_OFFSET UNITYSDK_OFFSET(0x9B6FBC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9B702F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9B6EB30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B70310)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_GET_QUESTLIST_OFFSET UNITYSDK_OFFSET(0x9B70350)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_GET_UNLOCKCHAPTER_OFFSET UNITYSDK_OFFSET(0x9B70330)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_HASANYIDLELIVEQUESTFINISH_OFFSET UNITYSDK_OFFSET(0x9B6E9C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9B70300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x9B70320)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_SET_QUESTLIST_OFFSET UNITYSDK_OFFSET(0x9B70360)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_SET_UNLOCKCHAPTER_OFFSET UNITYSDK_OFFSET(0x9B70340)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B6FB40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA__ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9B70180)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveQuestTreeTabData_TypeDefinitionIndex = 69436;

	class IdleLiveQuestTreeTabData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _QuestList_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*>* _QuestCache; // 0x18
		::RPG::Client::TextID _Name_k__BackingField; // 0x20
		::System::UInt32 _UnlockChapter_k__BackingField; // 0x30
		::System::UInt32 _ID_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeTabData* Create(::RPG::GameCore::IdleLiveQuestTreeTabRow* row)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeTabData*(*)(::RPG::GameCore::IdleLiveQuestTreeTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_CREATE_OFFSET))(row);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*>* GetQuestList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveQuestTreeItemData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_GETQUESTLIST_OFFSET))(this);
		}

		::System::Boolean HasAnyIdleLiveQuestFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_HASANYIDLELIVEQUESTFINISH_OFFSET))(this);
		}

		::System::Void GetChapterQuestListReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_GETCHAPTERQUESTLISTREWARD_OFFSET))(this);
		}

		::System::Boolean _IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA__ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_SET_ID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_SET_NAME_OFFSET))(this, value);
		}

		::System::UInt32 get_UnlockChapter()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_GET_UNLOCKCHAPTER_OFFSET))(this);
		}

		::System::Void set_UnlockChapter(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_SET_UNLOCKCHAPTER_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_QuestList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_GET_QUESTLIST_OFFSET))(this);
		}

		::System::Void set_QuestList(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEQUESTTREETABDATA_SET_QUESTLIST_OFFSET))(this, value);
		}
	};
}
