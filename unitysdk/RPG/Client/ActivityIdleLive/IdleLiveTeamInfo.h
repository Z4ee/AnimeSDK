#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveBaseTeamInfo.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveBaseTeamInfo_SimpleSlotData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"

class Class_1_28D410CCE235575F_12;
class Class_1_7FF19F6206AF6DD7_43;
class Class_1_A8B77D0FCA806220;
class Class_1_D17272E82AE804C2_113;
class Class_1_D17272E82AE804C2_568;
class Class_1_D17272E82AE804C2_578;
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

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATARBYEVENTID_OFFSET UNITYSDK_OFFSET(0x1BA50CA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATAR_1_OFFSET UNITYSDK_OFFSET(0x1BA50C30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATAR_OFFSET UNITYSDK_OFFSET(0x1BA50BC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_CHECKTEAMISVALID_OFFSET UNITYSDK_OFFSET(0x1BA50730)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_CLEARALLTEAMAVATAR_OFFSET UNITYSDK_OFFSET(0x1BA503E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GETCURPOWER_OFFSET UNITYSDK_OFFSET(0x1BA50780)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GETRECOMMENDDATALIST_OFFSET UNITYSDK_OFFSET(0x1BA50D90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GET_BATTLEAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x1BA51B50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GET_LIMITLEVEL_OFFSET UNITYSDK_OFFSET(0x1BA51A40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_INITTEAM_OFFSET UNITYSDK_OFFSET(0x1BA4EA00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1BA4DA60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ISALLSLOTSFULL_OFFSET UNITYSDK_OFFSET(0x1BA50440)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ISCURRENTTEAMSAMEASBATTLETEAM_OFFSET UNITYSDK_OFFSET(0x1BA4F940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ONAVATARINFOPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x1BA4DC90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ONSLOTINFOPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x1BA4E7B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REFRESHTEAM_OFFSET UNITYSDK_OFFSET(0x1BA4DAC0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REMOVETEAMAVATAR_OFFSET UNITYSDK_OFFSET(0x1BA507E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REPLACETEAM_OFFSET UNITYSDK_OFFSET(0x1BA50180)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_SYNCPOWER_OFFSET UNITYSDK_OFFSET(0x1BA4DB10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_SYNCTEAM_OFFSET UNITYSDK_OFFSET(0x1BA50310)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1BA4F190)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BA4F130)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__CONVERTSLOTDATASTOAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1BA4FBB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__CREATEANDREGISTERAVATAR_OFFSET UNITYSDK_OFFSET(0x1BA51750)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA51BE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__ONPOWERCHANGE_OFFSET UNITYSDK_OFFSET(0x1BA4F630)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEADDAVATAR_OFFSET UNITYSDK_OFFSET(0x1BA4DDD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEMGRINFO_OFFSET UNITYSDK_OFFSET(0x1BA4DE70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEUPGRADESLOT_OFFSET UNITYSDK_OFFSET(0x1BA4E8D0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamInfo_TypeDefinitionIndex = 74800;

	class IdleLiveTeamInfo : public ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _TeamAvatarIdDict; // 0x40
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _CurPower; // 0x48
		::RPG::Client::Promises::Promise* _ReplaceTeamPromise; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData>* _BattleAvatarIdList; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* a1, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REFRESHTEAM_OFFSET))(this);
		}

		::System::Void SyncPower()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_SYNCPOWER_OFFSET))(this);
		}

		::System::Void OnAvatarInfoProtocolReceived(::System::Object* a1, ::Class_3_1C169A0F2ACF26E7* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ONAVATARINFOPROTOCOLRECEIVED_OFFSET))(this, a1, a2);
		}

		::System::Void OnSlotInfoProtocolReceived(::System::Object* a1, ::Class_3_1C169A0F2ACF26E7* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ONSLOTINFOPROTOCOLRECEIVED_OFFSET))(this, a1, a2);
		}

		::System::Void InitTeam(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_113*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_113*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_INITTEAM_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_28D410CCE235575F_12* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_28D410CCE235575F_12*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_UPDATE_OFFSET))(this, a1);
		}

		::System::Void Update_1(::Class_1_7FF19F6206AF6DD7_43* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7FF19F6206AF6DD7_43*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_UPDATE_1_OFFSET))(this, a1);
		}

		::System::Boolean IsCurrentTeamSameAsBattleTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ISCURRENTTEAMSAMEASBATTLETEAM_OFFSET))(this);
		}

		::System::Void ReplaceTeam(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REPLACETEAM_OFFSET))(this, a1);
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

		::System::Void RemoveTeamAvatar(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_REMOVETEAMAVATAR_OFFSET))(this, a1);
		}

		::System::Void AddTeamAvatar(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATAR_OFFSET))(this, a1);
		}

		::System::Void AddTeamAvatar_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATAR_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddTeamAvatarByEventId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_ADDTEAMAVATARBYEVENTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*>* GetRecommendDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO_GETRECOMMENDDATALIST_OFFSET))(this);
		}

		::System::Void _UpdateAddAvatar(::Class_1_D17272E82AE804C2_568* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_568*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEADDAVATAR_OFFSET))(this, a1);
		}

		::System::Void _UpdateMgrInfo(::Class_1_A8B77D0FCA806220* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A8B77D0FCA806220*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEMGRINFO_OFFSET))(this, a1);
		}

		::System::Void _UpdateUpgradeSlot(::Class_1_D17272E82AE804C2_578* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_578*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__UPDATEUPGRADESLOT_OFFSET))(this, a1);
		}

		::System::Void _OnPowerChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__ONPOWERCHANGE_OFFSET))(this);
		}

		::System::Void _CreateAndRegisterAvatar(::Class_1_D17272E82AE804C2_568* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_568*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO__CREATEANDREGISTERAVATAR_OFFSET))(this, a1);
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
	};
}
