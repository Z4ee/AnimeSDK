#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveBaseTeamInfo.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveBaseTeamInfo_SimpleSlotData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"

class Class_1_0AC743E88BB51C0B;
class Class_1_455008579EB95638_44;
class Class_1_7FF19F6206AF6DD7_27;
class Class_1_D17272E82AE804C2_102;
class Class_1_D17272E82AE804C2_478;
class Class_1_D1E0AD3915BCCF29_54;
class Class_3_1C169A0F2ACF26E7;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamRecommendData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotInfo; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATARBYEVENTID_OFFSET UNITYSDK_OFFSET(0x9B7D190)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATAR_1_OFFSET UNITYSDK_OFFSET(0x9B7D120)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATAR_OFFSET UNITYSDK_OFFSET(0x9B7D0B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_CHECKTEAMISVALID_OFFSET UNITYSDK_OFFSET(0x9B7CC20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_CLEARALLTEAMAVATAR_OFFSET UNITYSDK_OFFSET(0x9B7CA20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GETCURPOWER_OFFSET UNITYSDK_OFFSET(0x9B7CC70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GETRECOMMENDDATALIST_OFFSET UNITYSDK_OFFSET(0x9B7D280)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GET_BATTLEAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x9B7DE20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GET_LIMITLEVEL_OFFSET UNITYSDK_OFFSET(0x9B7DD70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_INITTEAM_OFFSET UNITYSDK_OFFSET(0x9B7B3E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9B7A4E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ISALLSLOTSFULL_OFFSET UNITYSDK_OFFSET(0x9B7CA80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ISCURRENTTEAMSAMEASBATTLETEAM_OFFSET UNITYSDK_OFFSET(0x9B7C060)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ONAVATARINFOPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x9B7A710)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ONSLOTINFOPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x9B7B190)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REFRESHTEAM_OFFSET UNITYSDK_OFFSET(0x9B7A540)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REMOVETEAMAVATAR_OFFSET UNITYSDK_OFFSET(0x9B7CCE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REPLACETEAM_OFFSET UNITYSDK_OFFSET(0x9B7C7B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_SYNCPOWER_OFFSET UNITYSDK_OFFSET(0x9B7A590)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_SYNCTEAM_OFFSET UNITYSDK_OFFSET(0x9B7C950)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x9B7B9E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x9B7B980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__CONVERTSLOTDATASTOAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9B7C300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__CREATEANDREGISTERAVATAR_OFFSET UNITYSDK_OFFSET(0x9B7DAA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9B7DEB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__ONPOWERCHANGE_OFFSET UNITYSDK_OFFSET(0x9B7BD50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEADDAVATAR_OFFSET UNITYSDK_OFFSET(0x9B7A850)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEMGRINFO_OFFSET UNITYSDK_OFFSET(0x9B7A930)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEUPGRADESLOT_OFFSET UNITYSDK_OFFSET(0x9B7B2B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___IFIXBASEPROXY_ONAVATARINFOPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x9B7DFC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___IFIXBASEPROXY_ONSLOTINFOPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x9B7E030)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamInfo_TypeDefinitionIndex = 69159;

	class IdleLiveTeamInfo : public ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _TeamAvatarIdDict; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData>* _BattleAvatarIdList; // 0x48
		::RPG::Client::Promises::Promise* _ReplaceTeamPromise; // 0x50
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _CurPower; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* avatarInfo, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotInfo* slotInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_INIT_OFFSET))(this, avatarInfo, slotInfo);
		}

		::System::Void RefreshTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REFRESHTEAM_OFFSET))(this);
		}

		::System::Void SyncPower()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_SYNCPOWER_OFFSET))(this);
		}

		::System::Void OnAvatarInfoProtocolReceived(::System::Object* sender, ::Class_3_1C169A0F2ACF26E7* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ONAVATARINFOPROTOCOLRECEIVED_OFFSET))(this, sender, e);
		}

		::System::Void OnSlotInfoProtocolReceived(::System::Object* sender, ::Class_3_1C169A0F2ACF26E7* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ONSLOTINFOPROTOCOLRECEIVED_OFFSET))(this, sender, e);
		}

		::System::Void InitTeam(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_102*>* slotAvatarList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_102*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_INITTEAM_OFFSET))(this, slotAvatarList);
		}

		::System::Void Update(::Class_1_7FF19F6206AF6DD7_27* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_27*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_UPDATE_OFFSET))(this, rsp);
		}

		::System::Void Update_1(::Class_1_455008579EB95638_44* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_44*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_UPDATE_1_OFFSET))(this, rsp);
		}

		::System::Boolean IsCurrentTeamSameAsBattleTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ISCURRENTTEAMSAMEASBATTLETEAM_OFFSET))(this);
		}

		::System::Void ReplaceTeam(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* avatarIdDict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REPLACETEAM_OFFSET))(this, avatarIdDict);
		}

		::RPG::Client::Promises::Promise* SyncTeam()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_SYNCTEAM_OFFSET))(this);
		}

		::System::Void ClearAllTeamAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_CLEARALLTEAMAVATAR_OFFSET))(this);
		}

		::System::Boolean IsAllSlotsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ISALLSLOTSFULL_OFFSET))(this);
		}

		::System::Boolean CheckTeamIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_CHECKTEAMISVALID_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetCurPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GETCURPOWER_OFFSET))(this);
		}

		::System::Void RemoveTeamAvatar(::System::UInt32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REMOVETEAMAVATAR_OFFSET))(this, avatarId);
		}

		::System::Void AddTeamAvatar(::System::UInt32 avatarId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATAR_OFFSET))(this, avatarId);
		}

		::System::Void AddTeamAvatar_1(::System::UInt32 avatarId, ::System::UInt32 slotID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATAR_1_OFFSET))(this, avatarId, slotID);
		}

		::System::Void AddTeamAvatarByEventId(::System::UInt32 eventId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATARBYEVENTID_OFFSET))(this, eventId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*>* GetRecommendDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GETRECOMMENDDATALIST_OFFSET))(this);
		}

		::System::Void _UpdateAddAvatar(::Class_1_D17272E82AE804C2_478* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_478*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEADDAVATAR_OFFSET))(this, avatar);
		}

		::System::Void _UpdateMgrInfo(::Class_1_0AC743E88BB51C0B* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0AC743E88BB51C0B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEMGRINFO_OFFSET))(this, info);
		}

		::System::Void _UpdateUpgradeSlot(::Class_1_D1E0AD3915BCCF29_54* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_54*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEUPGRADESLOT_OFFSET))(this, rsp);
		}

		::System::Void _OnPowerChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__ONPOWERCHANGE_OFFSET))(this);
		}

		::System::Void _CreateAndRegisterAvatar(::Class_1_D17272E82AE804C2_478* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_478*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__CREATEANDREGISTERAVATAR_OFFSET))(this, avatar);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _ConvertSlotDatasToAvatarIDs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__CONVERTSLOTDATASTOAVATARIDS_OFFSET))(this);
		}

		::System::Int32 get_LimitLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GET_LIMITLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData>* get_BattleAvatarIdList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GET_BATTLEAVATARIDLIST_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnAvatarInfoProtocolReceived(::System::Object* P0, ::Class_3_1C169A0F2ACF26E7* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___IFIXBASEPROXY_ONAVATARINFOPROTOCOLRECEIVED_OFFSET))(this, P0, P1);
		}

		::System::Void __iFixBaseProxy_OnSlotInfoProtocolReceived(::System::Object* P0, ::Class_3_1C169A0F2ACF26E7* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___IFIXBASEPROXY_ONSLOTINFOPROTOCOLRECEIVED_OFFSET))(this, P0, P1);
		}
	};
}
