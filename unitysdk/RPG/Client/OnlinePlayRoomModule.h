#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"

class Class_1_58D4E6FABD47E257;
class Class_1_7F718CD59698556E;
class Class_1_9C60DFCC04FDF0DC;
class Class_1_D40936EF3BF54118_6;
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class LittleWheelSelectConfig; }
namespace RPG::Client { class OnlinePlayRoomModule_PendingVisitUIDInfo; }
namespace RPG::Client { class OnlinePlayRoomRecentVisitorInfo; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE_CLEARPENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0xABEE3B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_DISBANDONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xABED470)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xABE92A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ENTERONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xABED0E0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETCHATMESSAGEDATALIST_OFFSET UNITYSDK_OFFSET(0xABEDAD0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0xABECBF0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERCAPACITY_OFFSET UNITYSDK_OFFSET(0xABED000)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERINDEX_OFFSET UNITYSDK_OFFSET(0xABED800)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETPENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0xABEE370)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETRECENTVISITORLIST_OFFSET UNITYSDK_OFFSET(0xABEE630)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMNAME_OFFSET UNITYSDK_OFFSET(0xABEBCD0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMPOPULARITYVALUE_OFFSET UNITYSDK_OFFSET(0xABEDB40)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_CURRENTROOMOWNERUID_OFFSET UNITYSDK_OFFSET(0xABEF7C0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISINSESSION_OFFSET UNITYSDK_OFFSET(0xABCF0A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISVISITTOASTACTIVE_OFFSET UNITYSDK_OFFSET(0xABEF810)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__CURRENTSESSION_OFFSET UNITYSDK_OFFSET(0xABEF830)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__ONLINEPLAYERINFOLISTINROOM_OFFSET UNITYSDK_OFFSET(0xABEF850)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0xABEF8B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGTARGETUID_OFFSET UNITYSDK_OFFSET(0xABEF870)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITDICT_OFFSET UNITYSDK_OFFSET(0xABEF8D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITREASON_OFFSET UNITYSDK_OFFSET(0xABEF890)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xABE8DD0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISANYONEVISITING_OFFSET UNITYSDK_OFFSET(0xABED6F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISINSELFROOM_OFFSET UNITYSDK_OFFSET(0xABED630)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISPLAYERVISITING_OFFSET UNITYSDK_OFFSET(0xABED750)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_KICKOUTONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xABED3C0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xABE9140)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_QUITONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0xABED310)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SENDLIKEROOMDIY_OFFSET UNITYSDK_OFFSET(0xABED520)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SETVISITTOASTACTIVE_OFFSET UNITYSDK_OFFSET(0xABEE420)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET_ISVISITTOASTACTIVE_OFFSET UNITYSDK_OFFSET(0xABEF820)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__CURRENTSESSION_OFFSET UNITYSDK_OFFSET(0xABEF840)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__ONLINEPLAYERINFOLISTINROOM_OFFSET UNITYSDK_OFFSET(0xABEF860)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0xABEF8C0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGTARGETUID_OFFSET UNITYSDK_OFFSET(0xABEF880)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITDICT_OFFSET UNITYSDK_OFFSET(0xABEF8E0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITREASON_OFFSET UNITYSDK_OFFSET(0xABEF8A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TOGGLEONLINEPLAYROOMGUESTVISIBLE_OFFSET UNITYSDK_OFFSET(0xABEE480)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRANSFERTOARRANGEPAGE_OFFSET UNITYSDK_OFFSET(0xABEDB90)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETONLINEROOMPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xABED080)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETPENDINGVISITPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xABEDD90)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYONLINEROOMSTATUS_OFFSET UNITYSDK_OFFSET(0xABEC5B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYRECENTVISITOR_OFFSET UNITYSDK_OFFSET(0xABEE4F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xABE9070)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xABE8E50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__CACHEOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0xABEA990)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__CREATELITTLEWHEELSELECTCONFIG_OFFSET UNITYSDK_OFFSET(0xABEEA70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xABEF8F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_B__16_0_OFFSET UNITYSDK_OFFSET(0xABEFAF0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ISVALIDSESSIONFORROOM_OFFSET UNITYSDK_OFFSET(0xABEA3A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__NOTIFYOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0xABEA650)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0xABEC4E0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONENTERSCENESCRSP_OFFSET UNITYSDK_OFFSET(0xABEBA20)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERINFOCHANGED_OFFSET UNITYSDK_OFFSET(0xABEC450)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERLEAVEROOM_OFFSET UNITYSDK_OFFSET(0xABEA580)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xABE9580)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYPRECHECKENTERROOMSCRSP_OFFSET UNITYSDK_OFFSET(0xABEAE50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYQUERYRECENTVISITORSSCRSP_OFFSET UNITYSDK_OFFSET(0xABEC530)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYROOMPLAYERMOVESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xABEAD30)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYTALKSCRSP_OFFSET UNITYSDK_OFFSET(0xABEC250)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHDIYLIKESCRSP_OFFSET UNITYSDK_OFFSET(0xABEBAF0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xABEBD90)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__SETONLINEPLAYROOMLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0xABEA400)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYCREATESESSION_OFFSET UNITYSDK_OFFSET(0xABEA010)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYDISPOSESESSION_OFFSET UNITYSDK_OFFSET(0xABE92F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYENTERONLINEFUNCTION_OFFSET UNITYSDK_OFFSET(0xABED230)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYINSERTVISITTOAST_OFFSET UNITYSDK_OFFSET(0xABEECE0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTOREONLINESESSION_OFFSET UNITYSDK_OFFSET(0xABEC1B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTORESESSION_OFFSET UNITYSDK_OFFSET(0xABEEC80)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__UPDATEONLINEPLAYERINFO_OFFSET UNITYSDK_OFFSET(0xABEA200)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xABEFCF0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xABEFB40)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xABEFC90)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xABEFC30)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xABEFBD0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___ONSOCIALPLAYPRECHECKENTERROOMSCRSP_B__7_0_OFFSET UNITYSDK_OFFSET(0xABEFA20)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___ONSOCIALPLAYPRECHECKENTERROOMSCRSP_B__7_1_OFFSET UNITYSDK_OFFSET(0xABEFAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule_TypeDefinitionIndex = 61160;

	class OnlinePlayRoomModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>* __PendingVisitDict_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* __PendingOperationRecordList_k__BackingField; // 0x18
		::Class_1_7F718CD59698556E* __CurrentSession_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_58D4E6FABD47E257*>* __OnlinePlayerInfoListInRoom_k__BackingField; // 0x28
		::System::UInt32 __PendingVisitReason_k__BackingField; // 0x30
		::System::UInt32 __PendingTargetUid_k__BackingField; // 0x34
		::System::Boolean _IsVisitToastActive_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnSocialPlayGameplayOperationScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnSocialPlayRoomPlayerMoveScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYROOMPLAYERMOVESCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnSocialPlayPreCheckEnterRoomScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYPRECHECKENTERROOMSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnEnterSceneScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONENTERSCENESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTrainCakeCatchDiyLikeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHDIYLIKESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTrainCakeCatchGetDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHGETDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSocialPlayTalkScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYTALKSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnPlayerInfoChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERINFOCHANGED_OFFSET))(this, arg);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONADVENTUREPHASEEND_OFFSET))(this, arg);
		}

		::System::Void _OnSocialPlayQueryRecentVisitorsScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYQUERYRECENTVISITORSSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void TryqueryOnlineRoomStatus(::System::UInt32 targetUid, ::System::UInt32 reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYONLINEROOMSTATUS_OFFSET))(this, targetUid, reason);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>* GetOnlineRoomPlayerBriefDisplayDataList(::System::Boolean needLocalPlayer)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_OFFSET))(this, needLocalPlayer);
		}

		::System::UInt32 GetOnlineRoomPlayerCapacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERCAPACITY_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* TryGetOnlineRoomPlayerBriefDisplayData(::System::UInt32 uid)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETONLINEROOMPLAYERBRIEFDISPLAYDATA_OFFSET))(this, uid);
		}

		::System::Void EnterOnlinePlayRoom(::System::UInt32 targetUid, ::System::UInt32 entryId, ::System::UInt32 mappingInfoId, ::System::UInt32 reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ENTERONLINEPLAYROOM_OFFSET))(this, targetUid, entryId, mappingInfoId, reason);
		}

		::System::Void QuitOnlinePlayRoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_QUITONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Void KickOutOnlinePlayRoom(::System::UInt32 targetUid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_KICKOUTONLINEPLAYROOM_OFFSET))(this, targetUid);
		}

		::System::Void DisbandOnlinePlayRoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_DISBANDONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Void SendLikeRoomDIY()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SENDLIKEROOMDIY_OFFSET))(this);
		}

		::System::Boolean IsInSelfRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ISINSELFROOM_OFFSET))(this);
		}

		::System::Boolean IsAnyoneVisiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ISANYONEVISITING_OFFSET))(this);
		}

		::System::Boolean IsPlayerVisiting(::System::UInt32 uid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ISPLAYERVISITING_OFFSET))(this, uid);
		}

		::System::UInt32 GetOnlineRoomPlayerIndex(::System::UInt32 uid)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERINDEX_OFFSET))(this, uid);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* GetChatMessageDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETCHATMESSAGEDATALIST_OFFSET))(this);
		}

		::System::String* GetRoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMNAME_OFFSET))(this);
		}

		::System::UInt32 GetRoomPopularityValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMPOPULARITYVALUE_OFFSET))(this);
		}

		::System::Void TransferToArrangePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRANSFERTOARRANGEPAGE_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* TryGetPendingVisitPlayerBriefDisplayData()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETPENDINGVISITPLAYERBRIEFDISPLAYDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetPendingOperationRecordList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETPENDINGOPERATIONRECORDLIST_OFFSET))(this);
		}

		::System::Void ClearPendingOperationRecordList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_CLEARPENDINGOPERATIONRECORDLIST_OFFSET))(this);
		}

		::System::Void SetVisitToastActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SETVISITTOASTACTIVE_OFFSET))(this, isActive);
		}

		::System::Void ToggleOnlinePlayRoomGuestVisible(::System::Boolean isVisible, ::RPG::GameCore::CharacterVisibleReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TOGGLEONLINEPLAYROOMGUESTVISIBLE_OFFSET))(this, isVisible, reason);
		}

		::System::Void TryQueryRecentVisitor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYRECENTVISITOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>* GetRecentVisitorList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETRECENTVISITORLIST_OFFSET))(this);
		}

		::System::Boolean _IsValidSessionForRoom(::System::UInt32 roomOwnerUid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ISVALIDSESSIONFORROOM_OFFSET))(this, roomOwnerUid);
		}

		::System::Void _TryCreateSession(::Class_1_9C60DFCC04FDF0DC* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9C60DFCC04FDF0DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYCREATESESSION_OFFSET))(this, roomInfo);
		}

		::System::Void _TryRestoreSession(::Class_1_9C60DFCC04FDF0DC* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9C60DFCC04FDF0DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTORESESSION_OFFSET))(this, roomInfo);
		}

		::System::Void _TryDisposeSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYDISPOSESESSION_OFFSET))(this);
		}

		::System::Void _TryRestoreOnlineSession(::Class_1_9C60DFCC04FDF0DC* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9C60DFCC04FDF0DC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTOREONLINESESSION_OFFSET))(this, roomInfo);
		}

		::System::Void _UpdateOnlinePlayerInfo(::Class_1_58D4E6FABD47E257* playerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_58D4E6FABD47E257*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__UPDATEONLINEPLAYERINFO_OFFSET))(this, playerInfo);
		}

		::System::Void _OnPlayerLeaveRoom(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERLEAVEROOM_OFFSET))(this, uid);
		}

		::System::Void _CacheOperationRecordList(::Class_1_D40936EF3BF54118_6* operationRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__CACHEOPERATIONRECORDLIST_OFFSET))(this, operationRecordList);
		}

		::System::Void _NotifyOperationRecordList(::Class_1_D40936EF3BF54118_6* operationRecordList)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__NOTIFYOPERATIONRECORDLIST_OFFSET))(this, operationRecordList);
		}

		::System::Void _SetOnlinePlayRoomLoadingStrategy(::System::Boolean isEntering, ::System::UInt32 targetUid, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__SETONLINEPLAYROOMLOADINGSTRATEGY_OFFSET))(this, isEntering, targetUid, callback);
		}

		::System::Boolean _TryEnterOnlineFunction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYENTERONLINEFUNCTION_OFFSET))(this);
		}

		::System::Void _TryInsertVisitToast(::Class_1_58D4E6FABD47E257* playerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_58D4E6FABD47E257*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYINSERTVISITTOAST_OFFSET))(this, playerInfo);
		}

		::RPG::Client::LittleWheelSelectConfig* _CreateLittleWheelSelectConfig()
		{
			return ((::RPG::Client::LittleWheelSelectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__CREATELITTLEWHEELSELECTCONFIG_OFFSET))(this);
		}

		::System::Boolean get_IsInSession()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISINSESSION_OFFSET))(this);
		}

		::System::UInt32 get_CurrentRoomOwnerUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_CURRENTROOMOWNERUID_OFFSET))(this);
		}

		::System::Boolean get_IsVisitToastActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISVISITTOASTACTIVE_OFFSET))(this);
		}

		::System::Void set_IsVisitToastActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET_ISVISITTOASTACTIVE_OFFSET))(this, value);
		}

		::Class_1_7F718CD59698556E* get__CurrentSession()
		{
			return ((::Class_1_7F718CD59698556E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__CURRENTSESSION_OFFSET))(this);
		}

		::System::Void set__CurrentSession(::Class_1_7F718CD59698556E* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7F718CD59698556E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__CURRENTSESSION_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_58D4E6FABD47E257*>* get__OnlinePlayerInfoListInRoom()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_58D4E6FABD47E257*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__ONLINEPLAYERINFOLISTINROOM_OFFSET))(this);
		}

		::System::Void set__OnlinePlayerInfoListInRoom(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_58D4E6FABD47E257*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_58D4E6FABD47E257*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__ONLINEPLAYERINFOLISTINROOM_OFFSET))(this, value);
		}

		::System::UInt32 get__PendingTargetUid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGTARGETUID_OFFSET))(this);
		}

		::System::Void set__PendingTargetUid(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGTARGETUID_OFFSET))(this, value);
		}

		::System::UInt32 get__PendingVisitReason()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITREASON_OFFSET))(this);
		}

		::System::Void set__PendingVisitReason(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITREASON_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::String*>* get__PendingOperationRecordList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGOPERATIONRECORDLIST_OFFSET))(this);
		}

		::System::Void set__PendingOperationRecordList(::System::Collections::Generic::List_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGOPERATIONRECORDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>* get__PendingVisitDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITDICT_OFFSET))(this);
		}

		::System::Void set__PendingVisitDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITDICT_OFFSET))(this, value);
		}

		::System::Void __OnSocialPlayPreCheckEnterRoomScRsp_b__7_0(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___ONSOCIALPLAYPRECHECKENTERROOMSCRSP_B__7_0_OFFSET))(this, isOk);
		}

		::System::Void __OnSocialPlayPreCheckEnterRoomScRsp_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___ONSOCIALPLAYPRECHECKENTERROOMSCRSP_B__7_1_OFFSET))(this);
		}

		::System::Int32 _GetOnlineRoomPlayerBriefDisplayDataList_b__16_0(::RPG::Client::PlayerBriefDisplayData* a, ::RPG::Client::PlayerBriefDisplayData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_B__16_0_OFFSET))(this, a, b);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
