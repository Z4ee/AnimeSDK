#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveBaseTeamInfo.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveBaseTeamInfo_SimpleSlotData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/InGameTeamSlotUiData.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_D1E0AD3915BCCF29_56;
class Class_3_1C169A0F2ACF26E7;
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarInfo; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamRecommendData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_ADDTEAMAVATAR_1_OFFSET UNITYSDK_OFFSET(0xB1379D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_ADDTEAMAVATAR_OFFSET UNITYSDK_OFFSET(0xB137960)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_CHECKTEAMISVALID_OFFSET UNITYSDK_OFFSET(0xB136990)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_CLEARALLTEAMAVATAR_OFFSET UNITYSDK_OFFSET(0xB136E80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_CLEARSAVEDTEAM_OFFSET UNITYSDK_OFFSET(0xB137660)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GETALLTEAMGAMEPLAYSLOTDATAS_OFFSET UNITYSDK_OFFSET(0xB137A50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GETCURPOWER_OFFSET UNITYSDK_OFFSET(0xB1369E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GETRECOMMENDDATALIST_OFFSET UNITYSDK_OFFSET(0xB137CB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GET_BATTLEAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0xB138650)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GET_DUNGEONID_OFFSET UNITYSDK_OFFSET(0xB138640)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GET__CURRENTSAVEDTEAM_OFFSET UNITYSDK_OFFSET(0xB137080)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_INIT_OFFSET UNITYSDK_OFFSET(0xB12F6E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_ISCURRENTTEAMSAMEASBATTLETEAM_OFFSET UNITYSDK_OFFSET(0xB1376F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_ONSLOTINFOPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0xB1366C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_REBUILDBYDUNGEONID_OFFSET UNITYSDK_OFFSET(0xB131690)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_REFRESHTEAM_OFFSET UNITYSDK_OFFSET(0xB137290)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_REMOVETEAMAVATAR_OFFSET UNITYSDK_OFFSET(0xB137730)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_REPLACETEAM_OFFSET UNITYSDK_OFFSET(0xB1347C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_SYNCPOWER_OFFSET UNITYSDK_OFFSET(0xB136A40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_TRIGGERPOWERCHANGE_OFFSET UNITYSDK_OFFSET(0xB136AA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_WRITETEAM_OFFSET UNITYSDK_OFFSET(0xB130320)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__CREATEANDREGISTERAVATAR_OFFSET UNITYSDK_OFFSET(0xB137E60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB12F630)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__GETBATTLEAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0xB138090)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__GETCURRENTSAVEDTEAM_OFFSET UNITYSDK_OFFSET(0xB1383F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__ONPOWERCHANGE_OFFSET UNITYSDK_OFFSET(0xB136AF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__REBUILDALLAVATARS_OFFSET UNITYSDK_OFFSET(0xB136EE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__REPLACETEAM_OFFSET UNITYSDK_OFFSET(0xB137090)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__SYNCSLOTDATASTOSAVEDTEAM_OFFSET UNITYSDK_OFFSET(0xB1372F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__UPDATEAVATARMGR_OFFSET UNITYSDK_OFFSET(0xB136940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__UPDATEUPGRADESLOT_OFFSET UNITYSDK_OFFSET(0xB136810)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___IFIXBASEPROXY_ONSLOTINFOPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0xB138660)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonTeamInfo_TypeDefinitionIndex = 70090;

	class IdleLiveDungeonTeamInfo : public ::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal _CurPower; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*>* _SavedTeam; // 0x58
		::System::UInt32 _DungeonId; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo* a1, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarInfo*, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void OnSlotInfoProtocolReceived(::System::Object* a1, ::Class_3_1C169A0F2ACF26E7* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_ONSLOTINFOPROTOCOLRECEIVED_OFFSET))(this, a1, a2);
		}

		::System::Void WriteTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_WRITETEAM_OFFSET))(this);
		}

		::System::Boolean CheckTeamIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_CHECKTEAMISVALID_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal GetCurPower()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GETCURPOWER_OFFSET))(this);
		}

		::System::Void SyncPower()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_SYNCPOWER_OFFSET))(this);
		}

		::System::Void TriggerPowerChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_TRIGGERPOWERCHANGE_OFFSET))(this);
		}

		::System::Void ClearAllTeamAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_CLEARALLTEAMAVATAR_OFFSET))(this);
		}

		::System::Void RebuildByDungeonId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_REBUILDBYDUNGEONID_OFFSET))(this, a1);
		}

		::System::Void RefreshTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_REFRESHTEAM_OFFSET))(this);
		}

		::System::Void ClearSavedTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_CLEARSAVEDTEAM_OFFSET))(this);
		}

		::System::Boolean IsCurrentTeamSameAsBattleTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_ISCURRENTTEAMSAMEASBATTLETEAM_OFFSET))(this);
		}

		::System::Void ReplaceTeam(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_REPLACETEAM_OFFSET))(this, a1);
		}

		::System::Void _ReplaceTeam(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__REPLACETEAM_OFFSET))(this, a1);
		}

		::System::Void RemoveTeamAvatar(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_REMOVETEAMAVATAR_OFFSET))(this, a1);
		}

		::System::Void AddTeamAvatar(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_ADDTEAMAVATAR_OFFSET))(this, a1);
		}

		::System::Void AddTeamAvatar_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_ADDTEAMAVATAR_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData>* GetAllTeamGamePlaySlotDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::InGameTeamSlotUiData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GETALLTEAMGAMEPLAYSLOTDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*>* GetRecommendDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveTeamRecommendData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GETRECOMMENDDATALIST_OFFSET))(this);
		}

		::System::Void _UpdateUpgradeSlot(::Class_1_D1E0AD3915BCCF29_56* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_56*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__UPDATEUPGRADESLOT_OFFSET))(this, a1);
		}

		::System::Void _CreateAndRegisterAvatar(::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__CREATEANDREGISTERAVATAR_OFFSET))(this, a1);
		}

		::System::Void _RebuildAllAvatars()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__REBUILDALLAVATARS_OFFSET))(this);
		}

		::System::Void _SyncSlotDatasToSavedTeam(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__SYNCSLOTDATASTOSAVEDTEAM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData>* _GetBattleAvatarIdList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__GETBATTLEAVATARIDLIST_OFFSET))(this);
		}

		::System::Void _OnPowerChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__ONPOWERCHANGE_OFFSET))(this);
		}

		::System::Void _UpdateAvatarMgr()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__UPDATEAVATARMGR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GetCurrentSavedTeam()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO__GETCURRENTSAVEDTEAM_OFFSET))(this);
		}

		::System::UInt32 get_DungeonId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GET_DUNGEONID_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get__CurrentSavedTeam()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GET__CURRENTSAVEDTEAM_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData>* get_BattleAvatarIdList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveBaseTeamInfo_SimpleSlotData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO_GET_BATTLEAVATARIDLIST_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnSlotInfoProtocolReceived(::System::Object* a1, ::Class_3_1C169A0F2ACF26E7* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_3_1C169A0F2ACF26E7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___IFIXBASEPROXY_ONSLOTINFOPROTOCOLRECEIVED_OFFSET))(this, a1, a2);
		}
	};
}
