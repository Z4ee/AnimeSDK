#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_A7B2F9D1AE8AB549_4;
class Class_1_D17272E82AE804C2_571;
class Class_1_E577B5580A99D425_2;
namespace RPG::Client::ActivityIdleLive { class IdleLiveChatService; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonAssistData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonConfig; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonFriendSoltData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_CLEARFRIENDSOLTDATAS_OFFSET UNITYSDK_OFFSET(0x1C0CEE20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C0CEAB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GETCHATSERVICE_OFFSET UNITYSDK_OFFSET(0x1C0CED80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_ASSISTDATAS_OFFSET UNITYSDK_OFFSET(0x1C0D0490)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C0D0570)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_FRIENDSOLTDATAS_OFFSET UNITYSDK_OFFSET(0x1C0D0590)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C0D0520)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_MAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C0D04E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_SAVEDTEAM_OFFSET UNITYSDK_OFFSET(0x1C0D0500)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_ISASSISTDATAINFRIENDSOLT_OFFSET UNITYSDK_OFFSET(0x1C0CF560)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SETSAVEDTEAM_OFFSET UNITYSDK_OFFSET(0x1C0CED10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C0D0580)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SET_FRIENDSOLTDATAS_OFFSET UNITYSDK_OFFSET(0x1C0D05A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SET_MAXPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C0D04F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SET_SAVEDTEAM_OFFSET UNITYSDK_OFFSET(0x1C0D0510)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_TRYADDASSISTDATA_OFFSET UNITYSDK_OFFSET(0x1C0CF000)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_TRYREMOVEASSISTDATA_OFFSET UNITYSDK_OFFSET(0x1C0CF3A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1C0CF970)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_UPDATE_2_OFFSET UNITYSDK_OFFSET(0x1C0CF9E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_UPDATE_3_OFFSET UNITYSDK_OFFSET(0x1C0CFE30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C0CF6D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0CEC90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA__GETASSISTDATAS_OFFSET UNITYSDK_OFFSET(0x1C0D00F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA__ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C0CFE90)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonData_TypeDefinitionIndex = 74899;

	class IdleLiveDungeonData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveDungeonConfig* _Config_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData*>* _AssistDatas; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _SavedTeam_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData*>* _FriendSoltDatas_k__BackingField; // 0x28
		::System::UInt32 _MaxProgress_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_CREATE_OFFSET))(a1);
		}

		::System::Void SetSavedTeam(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SETSAVEDTEAM_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveChatService* GetChatService()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveChatService*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GETCHATSERVICE_OFFSET))(this);
		}

		::System::Void ClearFriendSoltDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_CLEARFRIENDSOLTDATAS_OFFSET))(this);
		}

		::System::Boolean TryAddAssistData(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_TRYADDASSISTDATA_OFFSET))(this, a1);
		}

		::System::Boolean TryRemoveAssistData(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_TRYREMOVEASSISTDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsAssistDataInFriendSolt(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_ISASSISTDATAINFRIENDSOLT_OFFSET))(this, a1);
		}

		::System::Void Update(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Update_1(::Class_1_D17272E82AE804C2_571* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_571*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_UPDATE_1_OFFSET))(this, a1);
		}

		::System::Void Update_2(::Class_1_E577B5580A99D425_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_UPDATE_2_OFFSET))(this, a1);
		}

		::System::Void Update_3(::Class_1_A7B2F9D1AE8AB549_4* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A7B2F9D1AE8AB549_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_UPDATE_3_OFFSET))(this, a1);
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

		::System::Void set_MaxProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SET_MAXPROGRESS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SavedTeam()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_SAVEDTEAM_OFFSET))(this);
		}

		::System::Void set_SavedTeam(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SET_SAVEDTEAM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDungeonConfig* get_Config()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::ActivityIdleLive::IdleLiveDungeonConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData*>* get_FriendSoltDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_GET_FRIENDSOLTDATAS_OFFSET))(this);
		}

		::System::Void set_FriendSoltDatas(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA_SET_FRIENDSOLTDATAS_OFFSET))(this, a1);
		}
	};
}
