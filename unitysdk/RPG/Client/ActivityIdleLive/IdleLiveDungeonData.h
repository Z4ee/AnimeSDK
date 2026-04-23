#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_36E3880E987172D7_7;
class Class_1_C821CB457FB5EBC6_9;
class Class_1_D17272E82AE804C2_481;
namespace RPG::Client::ActivityIdleLive { class IdleLiveChatService; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonAssistData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonConfig; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonFriendSoltData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_CLEARFRIENDSOLTDATAS_OFFSET UNITYSDK_OFFSET(0x9B44260)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9B43F10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GETCHATSERVICE_OFFSET UNITYSDK_OFFSET(0x9B441C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_ASSISTDATAS_OFFSET UNITYSDK_OFFSET(0x9B45600)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9B45660)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_FRIENDSOLTDATAS_OFFSET UNITYSDK_OFFSET(0x9B45680)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9B45650)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_MAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B45610)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_SAVEDTEAM_OFFSET UNITYSDK_OFFSET(0x9B45630)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_ISASSISTDATAINFRIENDSOLT_OFFSET UNITYSDK_OFFSET(0x9B44980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SETSAVEDTEAM_OFFSET UNITYSDK_OFFSET(0x9B44120)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9B45670)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SET_FRIENDSOLTDATAS_OFFSET UNITYSDK_OFFSET(0x9B45690)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SET_MAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x9B45620)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SET_SAVEDTEAM_OFFSET UNITYSDK_OFFSET(0x9B45640)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_TRYADDASSISTDATA_OFFSET UNITYSDK_OFFSET(0x9B44440)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_TRYREMOVEASSISTDATA_OFFSET UNITYSDK_OFFSET(0x9B447F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x9B44D90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_UPDATE_2_OFFSET UNITYSDK_OFFSET(0x9B44E00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_UPDATE_3_OFFSET UNITYSDK_OFFSET(0x9B450F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x9B44B30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B440A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA__GETASSISTDATAS_OFFSET UNITYSDK_OFFSET(0x9B45320)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA__ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9B45150)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonData_TypeDefinitionIndex = 69258;

	class IdleLiveDungeonData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData*>* _FriendSoltDatas_k__BackingField; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveDungeonConfig* _Config_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _SavedTeam_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData*>* _AssistDatas; // 0x28
		::System::UInt32 _MaxProgress_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* Create(::System::UInt32 dungeonId)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_CREATE_OFFSET))(dungeonId);
		}

		::System::Void SetSavedTeam(::System::Collections::Generic::List_1<::System::UInt32>* team)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SETSAVEDTEAM_OFFSET))(this, team);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveChatService* GetChatService()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveChatService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GETCHATSERVICE_OFFSET))(this);
		}

		::System::Void ClearFriendSoltDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_CLEARFRIENDSOLTDATAS_OFFSET))(this);
		}

		::System::Boolean TryAddAssistData(::System::UInt32 uid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_TRYADDASSISTDATA_OFFSET))(this, uid);
		}

		::System::Boolean TryRemoveAssistData(::System::UInt32 uid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_TRYREMOVEASSISTDATA_OFFSET))(this, uid);
		}

		::System::Boolean IsAssistDataInFriendSolt(::System::UInt32 uid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_ISASSISTDATAINFRIENDSOLT_OFFSET))(this, uid);
		}

		::System::Void Update(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* assistList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_UPDATE_OFFSET))(this, assistList);
		}

		::System::Void Update_1(::Class_1_D17272E82AE804C2_481* record)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_481*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_UPDATE_1_OFFSET))(this, record);
		}

		::System::Void Update_2(::Class_1_36E3880E987172D7_7* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_36E3880E987172D7_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_UPDATE_2_OFFSET))(this, rsp);
		}

		::System::Void Update_3(::Class_1_C821CB457FB5EBC6_9* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C821CB457FB5EBC6_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_UPDATE_3_OFFSET))(this, rsp);
		}

		::System::Boolean _IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA__ISUNLOCKED_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData*>* _GetAssistDatas()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA__GETASSISTDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData*>* get_AssistDatas()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_ASSISTDATAS_OFFSET))(this);
		}

		::System::UInt32 get_MaxProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_MAXPROGRESS_OFFSET))(this);
		}

		::System::Void set_MaxProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SET_MAXPROGRESS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SavedTeam()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_SAVEDTEAM_OFFSET))(this);
		}

		::System::Void set_SavedTeam(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SET_SAVEDTEAM_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDungeonConfig* get_Config()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::ActivityIdleLive::IdleLiveDungeonConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData*>* get_FriendSoltDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_FRIENDSOLTDATAS_OFFSET))(this);
		}

		::System::Void set_FriendSoltDatas(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SET_FRIENDSOLTDATAS_OFFSET))(this, value);
		}
	};
}
