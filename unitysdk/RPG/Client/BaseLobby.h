#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_4.h"
#include "unitysdk/MiHoYo/SDK/MHYSDKC_Console_JoinRestriction.h"
#include "unitysdk/RPG/Client/LobbyState.h"
#include "unitysdk/System/Object.h"

class Class_1_1A263F5BDD91B9DA;
class Class_1_35379441886C7D20;
class Class_1_3A7B270FE0BE90AE;
class Class_1_A21ACB7E0A72D3E4_2;
class Class_1_F36D19497C26B279_2;
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BASELOBBY_CANCELMATCH_OFFSET UNITYSDK_OFFSET(0x91747D0)
#define RPG_CLIENT_BASELOBBY_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x9173300)
#define RPG_CLIENT_BASELOBBY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9173120)
#define RPG_CLIENT_BASELOBBY_GETCURMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x9173570)
#define RPG_CLIENT_BASELOBBY_GETINVITETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x91737B0)
#define RPG_CLIENT_BASELOBBY_GETMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x91733B0)
#define RPG_CLIENT_BASELOBBY_GET_CREATESESSIONPROMISE_OFFSET UNITYSDK_OFFSET(0x9176650)
#define RPG_CLIENT_BASELOBBY_GET_CREATESESSION_OFFSET UNITYSDK_OFFSET(0x9176630)
#define RPG_CLIENT_BASELOBBY_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x9176520)
#define RPG_CLIENT_BASELOBBY_GET_ID_OFFSET UNITYSDK_OFFSET(0x9176420)
#define RPG_CLIENT_BASELOBBY_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x9176670)
#define RPG_CLIENT_BASELOBBY_GET_ISINFIGHTING_OFFSET UNITYSDK_OFFSET(0x9176460)
#define RPG_CLIENT_BASELOBBY_GET_ISLOBBYMAX_OFFSET UNITYSDK_OFFSET(0x9176610)
#define RPG_CLIENT_BASELOBBY_GET_ISSELFLEADER_OFFSET UNITYSDK_OFFSET(0x9173B30)
#define RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMEMBERS_OFFSET UNITYSDK_OFFSET(0x91764E0)
#define RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMULTIPLAYERINFOS_OFFSET UNITYSDK_OFFSET(0x9176500)
#define RPG_CLIENT_BASELOBBY_GET_MAXMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x9176560)
#define RPG_CLIENT_BASELOBBY_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x91764C0)
#define RPG_CLIENT_BASELOBBY_GET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0x9176540)
#define RPG_CLIENT_BASELOBBY_GET_SELFMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x9175650)
#define RPG_CLIENT_BASELOBBY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9176440)
#define RPG_CLIENT_BASELOBBY_INIT_OFFSET UNITYSDK_OFFSET(0x9172D50)
#define RPG_CLIENT_BASELOBBY_INVITE_OFFSET UNITYSDK_OFFSET(0x9173B90)
#define RPG_CLIENT_BASELOBBY_ISALLMEMBERREADY_OFFSET UNITYSDK_OFFSET(0x9173460)
#define RPG_CLIENT_BASELOBBY_ISANYPLAYERINFIGHTING_OFFSET UNITYSDK_OFFSET(0x9173840)
#define RPG_CLIENT_BASELOBBY_KICKOUT_OFFSET UNITYSDK_OFFSET(0x91738F0)
#define RPG_CLIENT_BASELOBBY_MODIFYSELFINFOPROMISE_OFFSET UNITYSDK_OFFSET(0x9173FE0)
#define RPG_CLIENT_BASELOBBY_MODIFYSELFINFO_OFFSET UNITYSDK_OFFSET(0x9173DC0)
#define RPG_CLIENT_BASELOBBY_QUITPROMISE_OFFSET UNITYSDK_OFFSET(0x9174C50)
#define RPG_CLIENT_BASELOBBY_QUIT_OFFSET UNITYSDK_OFFSET(0x9174A60)
#define RPG_CLIENT_BASELOBBY_SET_CREATESESSIONPROMISE_OFFSET UNITYSDK_OFFSET(0x9176660)
#define RPG_CLIENT_BASELOBBY_SET_CREATESESSION_OFFSET UNITYSDK_OFFSET(0x9176640)
#define RPG_CLIENT_BASELOBBY_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x9176530)
#define RPG_CLIENT_BASELOBBY_SET_ID_OFFSET UNITYSDK_OFFSET(0x9176430)
#define RPG_CLIENT_BASELOBBY_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x9176680)
#define RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMEMBERS_OFFSET UNITYSDK_OFFSET(0x91764F0)
#define RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMULTIPLAYERINFOS_OFFSET UNITYSDK_OFFSET(0x9176510)
#define RPG_CLIENT_BASELOBBY_SET_MAXMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x9176570)
#define RPG_CLIENT_BASELOBBY_SET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x91764D0)
#define RPG_CLIENT_BASELOBBY_SET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0x9176550)
#define RPG_CLIENT_BASELOBBY_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9176450)
#define RPG_CLIENT_BASELOBBY_STARTGAME_OFFSET UNITYSDK_OFFSET(0x9174540)
#define RPG_CLIENT_BASELOBBY_STARTMATCH_OFFSET UNITYSDK_OFFSET(0x9174330)
#define RPG_CLIENT_BASELOBBY_SYNCLOBBYINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x91753F0)
#define RPG_CLIENT_BASELOBBY_SYNCMATCHRESULT_OFFSET UNITYSDK_OFFSET(0x9174E50)
#define RPG_CLIENT_BASELOBBY__CONTAINMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x9175FF0)
#define RPG_CLIENT_BASELOBBY__CREATEPLAYUNITEXTINFO_OFFSET UNITYSDK_OFFSET(0x91758B0)
#define RPG_CLIENT_BASELOBBY__CREATEPSSESSION_OFFSET UNITYSDK_OFFSET(0x9175900)
#define RPG_CLIENT_BASELOBBY__CTOR_OFFSET UNITYSDK_OFFSET(0x9176690)
#define RPG_CLIENT_BASELOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0x9175750)
#define RPG_CLIENT_BASELOBBY__ONINVITERSP_OFFSET UNITYSDK_OFFSET(0x91761E0)
#define RPG_CLIENT_BASELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0x9175E00)
#define RPG_CLIENT_BASELOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0x9175830)
#define RPG_CLIENT_BASELOBBY__ONPOSTINIT_OFFSET UNITYSDK_OFFSET(0x91757F0)
#define RPG_CLIENT_BASELOBBY__ONROOMINIT_OFFSET UNITYSDK_OFFSET(0x91757A0)
#define RPG_CLIENT_BASELOBBY__ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x9175870)
#define RPG_CLIENT_BASELOBBY__ONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9176380)
#define RPG_CLIENT_BASELOBBY__REMOVEINVALIDMEMBERS_OFFSET UNITYSDK_OFFSET(0x9175E40)
#define RPG_CLIENT_BASELOBBY__SYNCLOBBYSTATE_OFFSET UNITYSDK_OFFSET(0x91756D0)
#define RPG_CLIENT_BASELOBBY__SYNCMATCHRESULTMEMBERS_OFFSET UNITYSDK_OFFSET(0x9174F80)
#define RPG_CLIENT_BASELOBBY__SYNCMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x9175BA0)
#define RPG_CLIENT_BASELOBBY__SYNCMEMBERS_OFFSET UNITYSDK_OFFSET(0x9172E90)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseLobby_TypeDefinitionIndex = 53409;

	class BaseLobby : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _GameParamList; // 0x10
		::System::Collections::Generic::List_1<::Class_1_3A7B270FE0BE90AE*>* _MatchResultMultiPlayerInfos_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _MatchResultMembers_k__BackingField; // 0x20
		::RPG::Client::Promises::Promise* _CreateSessionPromise_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _Members_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _UIDToInviteTimeStamp; // 0x38
		::Enum_3_F80BFD5B986D5503_3 _Type_k__BackingField; // 0x40
		::System::Int32 _MaxMemberCount; // 0x44
		::System::UInt64 _ID_k__BackingField; // 0x48
		::System::UInt32 _ChatInviteID; // 0x50
		::System::Boolean _IsDestroyed_k__BackingField; // 0x54
		::System::Boolean _CreateSession_k__BackingField; // 0x55
		::RPG::Client::LobbyState _PreviousStatus_k__BackingField; // 0x58
		::RPG::Client::LobbyState _CurrentStatus_k__BackingField; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::UInt64 id, ::Enum_3_F80BFD5B986D5503_3 type, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_3A7B270FE0BE90AE*>* members, ::System::UInt32 createParam, ::Class_1_1A263F5BDD91B9DA* roomExtInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Enum_3_F80BFD5B986D5503_3, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_3A7B270FE0BE90AE*>*, ::System::UInt32, ::Class_1_1A263F5BDD91B9DA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_INIT_OFFSET))(this, id, type, members, createParam, roomExtInfo);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_DISPOSE_OFFSET))(this);
		}

		::System::Void ChangeState(::RPG::Client::LobbyState state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_CHANGESTATE_OFFSET))(this, state);
		}

		::RPG::Client::LobbyMemberData* GetMemberData(::System::UInt32 uid)
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GETMEMBERDATA_OFFSET))(this, uid);
		}

		::System::Boolean IsAllMemberReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_ISALLMEMBERREADY_OFFSET))(this);
		}

		::System::Int32 GetCurMemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GETCURMEMBERCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetInviteTimeStamp(::System::UInt32 uid)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GETINVITETIMESTAMP_OFFSET))(this, uid);
		}

		::System::Boolean IsAnyPlayerInFighting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_ISANYPLAYERINFIGHTING_OFFSET))(this);
		}

		::System::Void KickOut(::RPG::Client::LobbyMemberData* member)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_KICKOUT_OFFSET))(this, member);
		}

		::System::Void Invite(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_INVITE_OFFSET))(this, uid);
		}

		::System::Void ModifySelfInfo(::Enum_3_63C076C405BE0674_1 type, ::Class_1_35379441886C7D20* extInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_1, ::Class_1_35379441886C7D20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_MODIFYSELFINFO_OFFSET))(this, type, extInfo);
		}

		::RPG::Client::Promises::Promise* ModifySelfInfoPromise(::Enum_3_63C076C405BE0674_1 type, ::Class_1_35379441886C7D20* extInfo)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::Enum_3_63C076C405BE0674_1, ::Class_1_35379441886C7D20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_MODIFYSELFINFOPROMISE_OFFSET))(this, type, extInfo);
		}

		::System::Void StartMatch(::Class_1_35379441886C7D20* extInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_35379441886C7D20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_STARTMATCH_OFFSET))(this, extInfo);
		}

		::System::Void StartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_STARTGAME_OFFSET))(this);
		}

		::System::Void CancelMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_CANCELMATCH_OFFSET))(this);
		}

		::System::Void Quit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_QUIT_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* QuitPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_QUITPROMISE_OFFSET))(this);
		}

		::System::Void SyncMatchResult(::Class_1_F36D19497C26B279_2* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F36D19497C26B279_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SYNCMATCHRESULT_OFFSET))(this, notify);
		}

		::System::Void SyncLobbyInfoScNotify(::Class_1_A21ACB7E0A72D3E4_2* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A21ACB7E0A72D3E4_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SYNCLOBBYINFOSCNOTIFY_OFFSET))(this, notify);
		}

		::System::Void _OnInit(::System::UInt32 createParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONINIT_OFFSET))(this, createParam);
		}

		::System::Void _OnRoomInit(::Class_1_1A263F5BDD91B9DA* roomExtInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1A263F5BDD91B9DA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONROOMINIT_OFFSET))(this, roomExtInfo);
		}

		::System::Void _OnPostInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONPOSTINIT_OFFSET))(this);
		}

		::System::Void _OnMemberChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONMEMBERCHANGE_OFFSET))(this);
		}

		::System::Void _OnStateChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONSTATECHANGED_OFFSET))(this);
		}

		::Class_1_35379441886C7D20* _CreatePlayUnitExtInfo(::System::Object* param)
		{
			return ((::Class_1_35379441886C7D20*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CREATEPLAYUNITEXTINFO_OFFSET))(this, param);
		}

		::System::Void _CreatePSSession(::MiHoYo::SDK::MHYSDKC_Console_JoinRestriction restriction)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MHYSDKC_Console_JoinRestriction))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CREATEPSSESSION_OFFSET))(this, restriction);
		}

		::System::Void _SyncMatchResultMembers(::System::Collections::Generic::IReadOnlyList_1<::Class_1_3A7B270FE0BE90AE*>* memberInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_3A7B270FE0BE90AE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCMATCHRESULTMEMBERS_OFFSET))(this, memberInfos);
		}

		::System::Void _OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}

		::System::Void _SyncMembers(::System::Collections::Generic::IReadOnlyList_1<::Class_1_3A7B270FE0BE90AE*>* memberInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_3A7B270FE0BE90AE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCMEMBERS_OFFSET))(this, memberInfos);
		}

		::System::Void _SyncMemberInfo(::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* members, ::Class_1_3A7B270FE0BE90AE* memberInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*, ::Class_1_3A7B270FE0BE90AE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCMEMBERINFO_OFFSET))(this, members, memberInfo);
		}

		::System::Void _RemoveInvalidMembers(::System::Collections::Generic::IReadOnlyList_1<::Class_1_3A7B270FE0BE90AE*>* memberInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_3A7B270FE0BE90AE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__REMOVEINVALIDMEMBERS_OFFSET))(this, memberInfos);
		}

		::System::Boolean _ContainMemberInfo(::System::Collections::Generic::IReadOnlyList_1<::Class_1_3A7B270FE0BE90AE*>* memberInfos, ::RPG::Client::LobbyMemberData* member)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_3A7B270FE0BE90AE*>*, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CONTAINMEMBERINFO_OFFSET))(this, memberInfos, member);
		}

		::System::Void _SyncLobbyState(::Enum_3_F80BFD5B986D5503_4 characterStatus)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_4))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCLOBBYSTATE_OFFSET))(this, characterStatus);
		}

		::System::Void _OnInviteRsp(::System::UInt16 cmd, ::System::Object* rspObject, ::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONINVITERSP_OFFSET))(this, cmd, rspObject, uid);
		}

		::System::Void _OnTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONTIMEOUT_OFFSET))(this);
		}

		::System::UInt64 get_ID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_ID_OFFSET))(this, value);
		}

		::Enum_3_F80BFD5B986D5503_3 get_Type()
		{
			return ((::Enum_3_F80BFD5B986D5503_3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Enum_3_F80BFD5B986D5503_3 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_TYPE_OFFSET))(this, value);
		}

		::RPG::Client::LobbyMemberData* get_SelfMemberData()
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_SELFMEMBERDATA_OFFSET))(this);
		}

		::System::Boolean get_IsSelfLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ISSELFLEADER_OFFSET))(this);
		}

		::System::Boolean get_IsInFighting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ISINFIGHTING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* get_Members()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_MEMBERS_OFFSET))(this);
		}

		::System::Void set_Members(::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MEMBERS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* get_MatchResultMembers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMEMBERS_OFFSET))(this);
		}

		::System::Void set_MatchResultMembers(::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMEMBERS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::Class_1_3A7B270FE0BE90AE*>* get_MatchResultMultiPlayerInfos()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_3A7B270FE0BE90AE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMULTIPLAYERINFOS_OFFSET))(this);
		}

		::System::Void set_MatchResultMultiPlayerInfos(::System::Collections::Generic::List_1<::Class_1_3A7B270FE0BE90AE*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_3A7B270FE0BE90AE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMULTIPLAYERINFOS_OFFSET))(this, value);
		}

		::RPG::Client::LobbyState get_CurrentStatus()
		{
			return ((::RPG::Client::LobbyState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_CURRENTSTATUS_OFFSET))(this);
		}

		::System::Void set_CurrentStatus(::RPG::Client::LobbyState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_CURRENTSTATUS_OFFSET))(this, value);
		}

		::RPG::Client::LobbyState get_PreviousStatus()
		{
			return ((::RPG::Client::LobbyState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_PREVIOUSSTATUS_OFFSET))(this);
		}

		::System::Void set_PreviousStatus(::RPG::Client::LobbyState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_PREVIOUSSTATUS_OFFSET))(this, value);
		}

		::System::Int32 get_MaxMemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_MAXMEMBERCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxMemberCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MAXMEMBERCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_IsLobbyMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ISLOBBYMAX_OFFSET))(this);
		}

		::System::Boolean get_CreateSession()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_CREATESESSION_OFFSET))(this);
		}

		::System::Void set_CreateSession(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_CREATESESSION_OFFSET))(this, value);
		}

		::RPG::Client::Promises::Promise* get_CreateSessionPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_CREATESESSIONPROMISE_OFFSET))(this);
		}

		::System::Void set_CreateSessionPromise(::RPG::Client::Promises::Promise* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_CREATESESSIONPROMISE_OFFSET))(this, value);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void set_IsDestroyed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_ISDESTROYED_OFFSET))(this, value);
		}
	};
}
