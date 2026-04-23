#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/MiHoYo/SDK/MHYSDKC_Console_JoinRestriction.h"
#include "unitysdk/RPG/Client/LobbyState.h"
#include "unitysdk/System/Object.h"

class Class_1_0C36FD2A7876DF8E;
class Class_1_24F009C622EAE626_3;
class Class_1_4BC858D7C27E10ED_46;
class Class_1_69A5DDEA5F31A2DF_2;
class Class_1_E7DB216A3FFF6C29;
class Class_1_FF03248024BAA97A;
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BASELOBBY_CANCELMATCHPROMISE_OFFSET UNITYSDK_OFFSET(0x9DD6D80)
#define RPG_CLIENT_BASELOBBY_CANCELMATCH_OFFSET UNITYSDK_OFFSET(0x9DD6AF0)
#define RPG_CLIENT_BASELOBBY_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x9DD4C80)
#define RPG_CLIENT_BASELOBBY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DD4AA0)
#define RPG_CLIENT_BASELOBBY_GETCURMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x9DD4EF0)
#define RPG_CLIENT_BASELOBBY_GETINVITETIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9DD5130)
#define RPG_CLIENT_BASELOBBY_GETMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x9DD4D30)
#define RPG_CLIENT_BASELOBBY_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x9DD8F80)
#define RPG_CLIENT_BASELOBBY_GET_ID_OFFSET UNITYSDK_OFFSET(0x9DD8E80)
#define RPG_CLIENT_BASELOBBY_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x9DD9090)
#define RPG_CLIENT_BASELOBBY_GET_ISINFIGHTING_OFFSET UNITYSDK_OFFSET(0x9DD8EC0)
#define RPG_CLIENT_BASELOBBY_GET_ISLOBBYMAX_OFFSET UNITYSDK_OFFSET(0x9DD9070)
#define RPG_CLIENT_BASELOBBY_GET_ISSELFLEADER_OFFSET UNITYSDK_OFFSET(0x9DD54B0)
#define RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMEMBERS_OFFSET UNITYSDK_OFFSET(0x9DD8F40)
#define RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMULTIPLAYERINFOS_OFFSET UNITYSDK_OFFSET(0x9DD8F60)
#define RPG_CLIENT_BASELOBBY_GET_MAXMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x9DD8FC0)
#define RPG_CLIENT_BASELOBBY_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x9DD8F20)
#define RPG_CLIENT_BASELOBBY_GET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0x9DD8FA0)
#define RPG_CLIENT_BASELOBBY_GET_SELFMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x9DD7F70)
#define RPG_CLIENT_BASELOBBY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9DD8EA0)
#define RPG_CLIENT_BASELOBBY_INIT_OFFSET UNITYSDK_OFFSET(0x9DD46D0)
#define RPG_CLIENT_BASELOBBY_INVITEPROMISE_OFFSET UNITYSDK_OFFSET(0x9DD5930)
#define RPG_CLIENT_BASELOBBY_INVITE_OFFSET UNITYSDK_OFFSET(0x9DD58E0)
#define RPG_CLIENT_BASELOBBY_ISALLMEMBERREADY_OFFSET UNITYSDK_OFFSET(0x9DD4DE0)
#define RPG_CLIENT_BASELOBBY_ISANYPLAYERINFIGHTING_OFFSET UNITYSDK_OFFSET(0x9DD51C0)
#define RPG_CLIENT_BASELOBBY_KICKOUTPROMISE_OFFSET UNITYSDK_OFFSET(0x9DD5510)
#define RPG_CLIENT_BASELOBBY_KICKOUT_OFFSET UNITYSDK_OFFSET(0x9DD5270)
#define RPG_CLIENT_BASELOBBY_MODIFYSELFINFOPROMISE_OFFSET UNITYSDK_OFFSET(0x9DD5F90)
#define RPG_CLIENT_BASELOBBY_MODIFYSELFINFO_OFFSET UNITYSDK_OFFSET(0x9DD5D70)
#define RPG_CLIENT_BASELOBBY_QUITPROMISE_OFFSET UNITYSDK_OFFSET(0x9DD7350)
#define RPG_CLIENT_BASELOBBY_QUIT_OFFSET UNITYSDK_OFFSET(0x9DD7160)
#define RPG_CLIENT_BASELOBBY_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x9DD8F90)
#define RPG_CLIENT_BASELOBBY_SET_ID_OFFSET UNITYSDK_OFFSET(0x9DD8E90)
#define RPG_CLIENT_BASELOBBY_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x9DD90A0)
#define RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMEMBERS_OFFSET UNITYSDK_OFFSET(0x9DD8F50)
#define RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMULTIPLAYERINFOS_OFFSET UNITYSDK_OFFSET(0x9DD8F70)
#define RPG_CLIENT_BASELOBBY_SET_MAXMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x9DD8FD0)
#define RPG_CLIENT_BASELOBBY_SET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x9DD8F30)
#define RPG_CLIENT_BASELOBBY_SET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0x9DD8FB0)
#define RPG_CLIENT_BASELOBBY_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x9DD8EB0)
#define RPG_CLIENT_BASELOBBY_STARTGAME_OFFSET UNITYSDK_OFFSET(0x9DD6860)
#define RPG_CLIENT_BASELOBBY_STARTMATCHPROMISE_OFFSET UNITYSDK_OFFSET(0x9DD64F0)
#define RPG_CLIENT_BASELOBBY_STARTMATCH_OFFSET UNITYSDK_OFFSET(0x9DD62E0)
#define RPG_CLIENT_BASELOBBY_SYNCFIGHTGAMESTATE_OFFSET UNITYSDK_OFFSET(0x9DD7C00)
#define RPG_CLIENT_BASELOBBY_SYNCLOBBYINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9DD7D10)
#define RPG_CLIENT_BASELOBBY_SYNCMATCHRESULT_OFFSET UNITYSDK_OFFSET(0x9DD7660)
#define RPG_CLIENT_BASELOBBY__CONTAINMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x9DD88E0)
#define RPG_CLIENT_BASELOBBY__CREATEPLAYUNITEXTINFO_OFFSET UNITYSDK_OFFSET(0x9DD81D0)
#define RPG_CLIENT_BASELOBBY__CREATEPSSESSION_OFFSET UNITYSDK_OFFSET(0x9DD8220)
#define RPG_CLIENT_BASELOBBY__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD90B0)
#define RPG_CLIENT_BASELOBBY__DOINVITEPROMISE_OFFSET UNITYSDK_OFFSET(0x9DD5A30)
#define RPG_CLIENT_BASELOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0x9DD8070)
#define RPG_CLIENT_BASELOBBY__ONINVITERSP_OFFSET UNITYSDK_OFFSET(0x9DD8BC0)
#define RPG_CLIENT_BASELOBBY__ONKICKOUTRSP_OFFSET UNITYSDK_OFFSET(0x9DD8AD0)
#define RPG_CLIENT_BASELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0x9DD86F0)
#define RPG_CLIENT_BASELOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0x9DD8150)
#define RPG_CLIENT_BASELOBBY__ONPOSTINIT_OFFSET UNITYSDK_OFFSET(0x9DD8110)
#define RPG_CLIENT_BASELOBBY__ONROOMINIT_OFFSET UNITYSDK_OFFSET(0x9DD80C0)
#define RPG_CLIENT_BASELOBBY__ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0x9DD8190)
#define RPG_CLIENT_BASELOBBY__ONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x9DD8DE0)
#define RPG_CLIENT_BASELOBBY__REMOVEINVALIDMEMBERS_OFFSET UNITYSDK_OFFSET(0x9DD8730)
#define RPG_CLIENT_BASELOBBY__SYNCLOBBYSTATE_OFFSET UNITYSDK_OFFSET(0x9DD7FF0)
#define RPG_CLIENT_BASELOBBY__SYNCMATCHRESULTMEMBERS_OFFSET UNITYSDK_OFFSET(0x9DD7790)
#define RPG_CLIENT_BASELOBBY__SYNCMEMBERINFO_OFFSET UNITYSDK_OFFSET(0x9DD8490)
#define RPG_CLIENT_BASELOBBY__SYNCMEMBERS_OFFSET UNITYSDK_OFFSET(0x9DD4810)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseLobby_TypeDefinitionIndex = 60549;

	class BaseLobby : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _UIDToInviteTimeStamp; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _GameParamList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _Members_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::Class_1_FF03248024BAA97A*>* _MatchResultMultiPlayerInfos_k__BackingField; // 0x28
		::RPG::Client::Promises::Promise* _CreateSessionPromise; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _MatchResultMembers_k__BackingField; // 0x38
		::System::UInt64 _ID_k__BackingField; // 0x40
		::RPG::Client::LobbyState _CurrentStatus_k__BackingField; // 0x48
		::Enum_3_A35B38E5F9115A76_2 _Type_k__BackingField; // 0x4C
		::RPG::Client::LobbyState _PreviousStatus_k__BackingField; // 0x50
		::System::Boolean _CreateSession; // 0x54
		::System::Boolean _IsDestroyed_k__BackingField; // 0x55
		::System::Int32 _MaxMemberCount; // 0x58
		::System::UInt32 _ChatInviteID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::UInt64 id, ::Enum_3_A35B38E5F9115A76_2 type, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_FF03248024BAA97A*>* members, ::System::UInt32 createParam, ::Class_1_E7DB216A3FFF6C29* roomExtInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Enum_3_A35B38E5F9115A76_2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_FF03248024BAA97A*>*, ::System::UInt32, ::Class_1_E7DB216A3FFF6C29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_INIT_OFFSET))(this, id, type, members, createParam, roomExtInfo);
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

		::RPG::Client::Promises::IPromise* KickOutPromise(::RPG::Client::LobbyMemberData* member)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_KICKOUTPROMISE_OFFSET))(this, member);
		}

		::System::Void Invite(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_INVITE_OFFSET))(this, uid);
		}

		::RPG::Client::Promises::IPromise* InvitePromise(::System::UInt32 uid)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_INVITEPROMISE_OFFSET))(this, uid);
		}

		::RPG::Client::Promises::IPromise* _DoInvitePromise(::System::UInt32 uid)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__DOINVITEPROMISE_OFFSET))(this, uid);
		}

		::System::Void ModifySelfInfo(::Enum_3_63C076C405BE0674_1 type, ::Class_1_0C36FD2A7876DF8E* extInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_1, ::Class_1_0C36FD2A7876DF8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_MODIFYSELFINFO_OFFSET))(this, type, extInfo);
		}

		::RPG::Client::Promises::Promise* ModifySelfInfoPromise(::Enum_3_63C076C405BE0674_1 type, ::Class_1_0C36FD2A7876DF8E* extInfo)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::Enum_3_63C076C405BE0674_1, ::Class_1_0C36FD2A7876DF8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_MODIFYSELFINFOPROMISE_OFFSET))(this, type, extInfo);
		}

		::System::Void StartMatch(::Class_1_0C36FD2A7876DF8E* extInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0C36FD2A7876DF8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_STARTMATCH_OFFSET))(this, extInfo);
		}

		::RPG::Client::Promises::IPromise* StartMatchPromise(::Class_1_0C36FD2A7876DF8E* extInfo)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_0C36FD2A7876DF8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_STARTMATCHPROMISE_OFFSET))(this, extInfo);
		}

		::System::Void StartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_STARTGAME_OFFSET))(this);
		}

		::System::Void CancelMatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_CANCELMATCH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* CancelMatchPromise()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_CANCELMATCHPROMISE_OFFSET))(this);
		}

		::System::Void Quit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_QUIT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* QuitPromise()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_QUITPROMISE_OFFSET))(this);
		}

		::System::Void SyncMatchResult(::Class_1_69A5DDEA5F31A2DF_2* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_69A5DDEA5F31A2DF_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SYNCMATCHRESULT_OFFSET))(this, notify);
		}

		::System::Void SyncFightGameState(::Class_1_4BC858D7C27E10ED_46* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_46*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SYNCFIGHTGAMESTATE_OFFSET))(this, rsp);
		}

		::System::Void SyncLobbyInfoScNotify(::Class_1_24F009C622EAE626_3* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_24F009C622EAE626_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SYNCLOBBYINFOSCNOTIFY_OFFSET))(this, notify);
		}

		::System::Void _OnInit(::System::UInt32 createParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONINIT_OFFSET))(this, createParam);
		}

		::System::Void _OnRoomInit(::Class_1_E7DB216A3FFF6C29* roomExtInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7DB216A3FFF6C29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONROOMINIT_OFFSET))(this, roomExtInfo);
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

		::Class_1_0C36FD2A7876DF8E* _CreatePlayUnitExtInfo(::System::Object* param)
		{
			return ((::Class_1_0C36FD2A7876DF8E*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CREATEPLAYUNITEXTINFO_OFFSET))(this, param);
		}

		::System::Void _CreatePSSession(::MiHoYo::SDK::MHYSDKC_Console_JoinRestriction restriction)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MHYSDKC_Console_JoinRestriction))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CREATEPSSESSION_OFFSET))(this, restriction);
		}

		::System::Void _SyncMatchResultMembers(::System::Collections::Generic::IReadOnlyList_1<::Class_1_FF03248024BAA97A*>* memberInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_FF03248024BAA97A*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCMATCHRESULTMEMBERS_OFFSET))(this, memberInfos);
		}

		::System::Void _OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}

		::System::Void _SyncMembers(::System::Collections::Generic::IReadOnlyList_1<::Class_1_FF03248024BAA97A*>* memberInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_FF03248024BAA97A*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCMEMBERS_OFFSET))(this, memberInfos);
		}

		::System::Void _SyncMemberInfo(::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* members, ::Class_1_FF03248024BAA97A* memberInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*, ::Class_1_FF03248024BAA97A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCMEMBERINFO_OFFSET))(this, members, memberInfo);
		}

		::System::Void _RemoveInvalidMembers(::System::Collections::Generic::IReadOnlyList_1<::Class_1_FF03248024BAA97A*>* memberInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_FF03248024BAA97A*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__REMOVEINVALIDMEMBERS_OFFSET))(this, memberInfos);
		}

		::System::Boolean _ContainMemberInfo(::System::Collections::Generic::IReadOnlyList_1<::Class_1_FF03248024BAA97A*>* memberInfos, ::RPG::Client::LobbyMemberData* member)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_FF03248024BAA97A*>*, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CONTAINMEMBERINFO_OFFSET))(this, memberInfos, member);
		}

		::System::Void _SyncLobbyState(::Enum_3_F80BFD5B986D5503_3 characterStatus)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCLOBBYSTATE_OFFSET))(this, characterStatus);
		}

		::System::Void _OnKickOutRsp(::System::UInt16 cmd, ::System::Object* rspObject, ::RPG::Client::Promises::Promise* kickOutPromise)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONKICKOUTRSP_OFFSET))(this, cmd, rspObject, kickOutPromise);
		}

		::System::Void _OnInviteRsp(::System::UInt16 cmd, ::System::Object* rspObject, ::System::UInt32 uid, ::RPG::Client::Promises::Promise* invitePromise)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*, ::System::UInt32, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONINVITERSP_OFFSET))(this, cmd, rspObject, uid, invitePromise);
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

		::Enum_3_A35B38E5F9115A76_2 get_Type()
		{
			return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Enum_3_A35B38E5F9115A76_2 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_TYPE_OFFSET))(this, value);
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

		::System::Collections::Generic::List_1<::Class_1_FF03248024BAA97A*>* get_MatchResultMultiPlayerInfos()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_FF03248024BAA97A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMULTIPLAYERINFOS_OFFSET))(this);
		}

		::System::Void set_MatchResultMultiPlayerInfos(::System::Collections::Generic::List_1<::Class_1_FF03248024BAA97A*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_FF03248024BAA97A*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMULTIPLAYERINFOS_OFFSET))(this, value);
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
