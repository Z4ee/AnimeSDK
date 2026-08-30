#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"

class Class_1_04B8A345C4F01E40;
class Class_1_4081A81AE43EAE14;
class Class_1_D40936EF3BF54118_8;
class Class_1_FE2718AB7E599C80;
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class LittleWheelSelectConfig; }
namespace RPG::Client { class OnlinePlayRoomModule_PendingVisitUIDInfo; }
namespace RPG::Client { class OnlinePlayRoomRecentVisitorInfo; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE_CLEARPENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x191D55E0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_DISBANDONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x191D4530)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x191CFD00)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ENTERONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x191D4130)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETCHATMESSAGEDATALIST_OFFSET UNITYSDK_OFFSET(0x191D4C00)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0x191D3A30)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERCAPACITY_OFFSET UNITYSDK_OFFSET(0x191D3FD0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x191D48B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETPENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x191D55A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETRECENTVISITORLIST_OFFSET UNITYSDK_OFFSET(0x191D5820)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMNAME_OFFSET UNITYSDK_OFFSET(0x191D2970)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMPOPULARITYVALUE_OFFSET UNITYSDK_OFFSET(0x191D4C70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_CURRENTROOMOWNERUID_OFFSET UNITYSDK_OFFSET(0x191D6950)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISINSESSION_OFFSET UNITYSDK_OFFSET(0x191D68F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISVISITTOASTACTIVE_OFFSET UNITYSDK_OFFSET(0x191D69A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__CURRENTSESSION_OFFSET UNITYSDK_OFFSET(0x191D69C0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__ONLINEPLAYERINFOLISTINROOM_OFFSET UNITYSDK_OFFSET(0x191D69E0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x191D6A40)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGTARGETUID_OFFSET UNITYSDK_OFFSET(0x191D6A00)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITDICT_OFFSET UNITYSDK_OFFSET(0x191D6A60)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITREASON_OFFSET UNITYSDK_OFFSET(0x191D6A20)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x191CF580)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISANYONEVISITING_OFFSET UNITYSDK_OFFSET(0x191D47D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISINSELFROOM_OFFSET UNITYSDK_OFFSET(0x191D4710)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISPLAYERVISITING_OFFSET UNITYSDK_OFFSET(0x191D4830)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_KICKOUTONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x191D4430)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x191CFBC0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_QUITONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x191D4380)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SENDLIKEROOMDIY_OFFSET UNITYSDK_OFFSET(0x191D4630)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SETVISITTOASTACTIVE_OFFSET UNITYSDK_OFFSET(0x191D5650)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET_ISVISITTOASTACTIVE_OFFSET UNITYSDK_OFFSET(0x191D69B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__CURRENTSESSION_OFFSET UNITYSDK_OFFSET(0x191D69D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__ONLINEPLAYERINFOLISTINROOM_OFFSET UNITYSDK_OFFSET(0x191D69F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x191D6A50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGTARGETUID_OFFSET UNITYSDK_OFFSET(0x191D6A10)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITDICT_OFFSET UNITYSDK_OFFSET(0x191D6A70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITREASON_OFFSET UNITYSDK_OFFSET(0x191D6A30)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TOGGLEONLINEPLAYROOMGUESTVISIBLE_OFFSET UNITYSDK_OFFSET(0x191D56B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRANSFERTOARRANGEPAGE_OFFSET UNITYSDK_OFFSET(0x191D4CC0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETGUESTPLAYERINFOBYPETENTITY_OFFSET UNITYSDK_OFFSET(0x191D40B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETONLINEROOMPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x191D4050)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETPENDINGVISITPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x191D4EF0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYONLINEROOMSTATUS_OFFSET UNITYSDK_OFFSET(0x191D3320)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYRECENTVISITOR_OFFSET UNITYSDK_OFFSET(0x191D5720)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x191CFAE0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x191CF5D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__CACHEOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x191D1520)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__CREATELITTLEWHEELSELECTCONFIG_OFFSET UNITYSDK_OFFSET(0x191D5CE0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x191D6A80)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_B__16_0_OFFSET UNITYSDK_OFFSET(0x191D6C80)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ISVALIDSESSIONFORROOM_OFFSET UNITYSDK_OFFSET(0x191D0DB0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__NOTIFYOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x191D1040)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0x191D3250)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONENTERSCENESCRSP_OFFSET UNITYSDK_OFFSET(0x191D26C0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERINFOCHANGED_OFFSET UNITYSDK_OFFSET(0x191D31C0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERLEAVEROOM_OFFSET UNITYSDK_OFFSET(0x191D0F90)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x191CFF10)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYPRECHECKENTERROOMSCRSP_OFFSET UNITYSDK_OFFSET(0x191D1B70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYQUERYRECENTVISITORSSCRSP_OFFSET UNITYSDK_OFFSET(0x191D32A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYROOMPLAYERMOVESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x191D1A50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYTALKSCRSP_OFFSET UNITYSDK_OFFSET(0x191D3000)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHDIYLIKESCRSP_OFFSET UNITYSDK_OFFSET(0x191D2790)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x191D2A40)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__SETONLINEPLAYROOMLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x191D0E10)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYCREATESESSION_OFFSET UNITYSDK_OFFSET(0x191D0A50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYDISPOSESESSION_OFFSET UNITYSDK_OFFSET(0x191CFD50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYENTERONLINEFUNCTION_OFFSET UNITYSDK_OFFSET(0x191D42A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYINSERTVISITTOAST_OFFSET UNITYSDK_OFFSET(0x191D5EF0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTOREONLINESESSION_OFFSET UNITYSDK_OFFSET(0x191D2F60)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTORESESSION_OFFSET UNITYSDK_OFFSET(0x191D5E90)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__UPDATEONLINEPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x191D0C40)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___ONSOCIALPLAYPRECHECKENTERROOMSCRSP_B__7_0_OFFSET UNITYSDK_OFFSET(0x191D6BB0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___ONSOCIALPLAYPRECHECKENTERROOMSCRSP_B__7_1_OFFSET UNITYSDK_OFFSET(0x191D6C70)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule_TypeDefinitionIndex = 66434;

	class OnlinePlayRoomModule : public ::RPG::Client::BaseModule
	{
	public:
		::Class_1_4081A81AE43EAE14* __CurrentSession_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* __PendingOperationRecordList_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_FE2718AB7E599C80*>* __OnlinePlayerInfoListInRoom_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>* __PendingVisitDict_k__BackingField; // 0x28
		::System::Boolean _IsVisitToastActive_k__BackingField; // 0x30
		::System::UInt32 __PendingVisitReason_k__BackingField; // 0x34
		::System::UInt32 __PendingTargetUid_k__BackingField; // 0x38

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

		::System::Void _OnSocialPlayGameplayOperationScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSocialPlayRoomPlayerMoveScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYROOMPLAYERMOVESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSocialPlayPreCheckEnterRoomScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYPRECHECKENTERROOMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEnterSceneScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONENTERSCENESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainCakeCatchDiyLikeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHDIYLIKESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainCakeCatchGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSocialPlayTalkScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYTALKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPlayerInfoChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERINFOCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONADVENTUREPHASEEND_OFFSET))(this, a1);
		}

		::System::Void _OnSocialPlayQueryRecentVisitorsScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYQUERYRECENTVISITORSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void TryqueryOnlineRoomStatus(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYONLINEROOMSTATUS_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>* GetOnlineRoomPlayerBriefDisplayDataList(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_OFFSET))(this, a1);
		}

		::System::UInt32 GetOnlineRoomPlayerCapacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERCAPACITY_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* TryGetOnlineRoomPlayerBriefDisplayData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETONLINEROOMPLAYERBRIEFDISPLAYDATA_OFFSET))(this, a1);
		}

		::System::Boolean TryGetGuestPlayerInfoByPetEntity(::RPG::GameCore::GameEntity* a1, ::Class_1_FE2718AB7E599C80*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_FE2718AB7E599C80*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETGUESTPLAYERINFOBYPETENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void EnterOnlinePlayRoom(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ENTERONLINEPLAYROOM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void QuitOnlinePlayRoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_QUITONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Void KickOutOnlinePlayRoom(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_KICKOUTONLINEPLAYROOM_OFFSET))(this, a1);
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

		::System::Boolean IsPlayerVisiting(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ISPLAYERVISITING_OFFSET))(this, a1);
		}

		::System::UInt32 GetOnlineRoomPlayerIndex(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERINDEX_OFFSET))(this, a1);
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

		::System::Void SetVisitToastActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SETVISITTOASTACTIVE_OFFSET))(this, a1);
		}

		::System::Void ToggleOnlinePlayRoomGuestVisible(::System::Boolean a1, ::RPG::GameCore::CharacterVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TOGGLEONLINEPLAYROOMGUESTVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Void TryQueryRecentVisitor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYRECENTVISITOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>* GetRecentVisitorList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETRECENTVISITORLIST_OFFSET))(this);
		}

		::System::Boolean _IsValidSessionForRoom(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ISVALIDSESSIONFORROOM_OFFSET))(this, a1);
		}

		::System::Void _TryCreateSession(::Class_1_04B8A345C4F01E40* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_04B8A345C4F01E40*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYCREATESESSION_OFFSET))(this, a1);
		}

		::System::Void _TryRestoreSession(::Class_1_04B8A345C4F01E40* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_04B8A345C4F01E40*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTORESESSION_OFFSET))(this, a1);
		}

		::System::Void _TryDisposeSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYDISPOSESESSION_OFFSET))(this);
		}

		::System::Void _TryRestoreOnlineSession(::Class_1_04B8A345C4F01E40* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_04B8A345C4F01E40*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTOREONLINESESSION_OFFSET))(this, a1);
		}

		::System::Void _UpdateOnlinePlayerInfo(::Class_1_FE2718AB7E599C80* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE2718AB7E599C80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__UPDATEONLINEPLAYERINFO_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerLeaveRoom(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERLEAVEROOM_OFFSET))(this, a1);
		}

		::System::Void _CacheOperationRecordList(::Class_1_D40936EF3BF54118_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__CACHEOPERATIONRECORDLIST_OFFSET))(this, a1);
		}

		::System::Void _NotifyOperationRecordList(::Class_1_D40936EF3BF54118_8* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__NOTIFYOPERATIONRECORDLIST_OFFSET))(this, a1);
		}

		::System::Void _SetOnlinePlayRoomLoadingStrategy(::System::Boolean a1, ::System::UInt32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__SETONLINEPLAYROOMLOADINGSTRATEGY_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _TryEnterOnlineFunction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYENTERONLINEFUNCTION_OFFSET))(this);
		}

		::System::Void _TryInsertVisitToast(::Class_1_FE2718AB7E599C80* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FE2718AB7E599C80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYINSERTVISITTOAST_OFFSET))(this, a1);
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

		::System::Void set_IsVisitToastActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET_ISVISITTOASTACTIVE_OFFSET))(this, a1);
		}

		::Class_1_4081A81AE43EAE14* get__CurrentSession()
		{
			return ((::Class_1_4081A81AE43EAE14*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__CURRENTSESSION_OFFSET))(this);
		}

		::System::Void set__CurrentSession(::Class_1_4081A81AE43EAE14* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4081A81AE43EAE14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__CURRENTSESSION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_FE2718AB7E599C80*>* get__OnlinePlayerInfoListInRoom()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_FE2718AB7E599C80*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__ONLINEPLAYERINFOLISTINROOM_OFFSET))(this);
		}

		::System::Void set__OnlinePlayerInfoListInRoom(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_FE2718AB7E599C80*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_FE2718AB7E599C80*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__ONLINEPLAYERINFOLISTINROOM_OFFSET))(this, a1);
		}

		::System::UInt32 get__PendingTargetUid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGTARGETUID_OFFSET))(this);
		}

		::System::Void set__PendingTargetUid(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGTARGETUID_OFFSET))(this, a1);
		}

		::System::UInt32 get__PendingVisitReason()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITREASON_OFFSET))(this);
		}

		::System::Void set__PendingVisitReason(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITREASON_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get__PendingOperationRecordList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGOPERATIONRECORDLIST_OFFSET))(this);
		}

		::System::Void set__PendingOperationRecordList(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGOPERATIONRECORDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>* get__PendingVisitDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITDICT_OFFSET))(this);
		}

		::System::Void set__PendingVisitDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITDICT_OFFSET))(this, a1);
		}

		::System::Void __OnSocialPlayPreCheckEnterRoomScRsp_b__7_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___ONSOCIALPLAYPRECHECKENTERROOMSCRSP_B__7_0_OFFSET))(this, a1);
		}

		::System::Void __OnSocialPlayPreCheckEnterRoomScRsp_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___ONSOCIALPLAYPRECHECKENTERROOMSCRSP_B__7_1_OFFSET))(this);
		}

		::System::Int32 _GetOnlineRoomPlayerBriefDisplayDataList_b__16_0(::RPG::Client::PlayerBriefDisplayData* a1, ::RPG::Client::PlayerBriefDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_B__16_0_OFFSET))(this, a1, a2);
		}
	};
}
