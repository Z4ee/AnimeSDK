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
class Class_1_4BC858D7C27E10ED_47;
class Class_1_69A5DDEA5F31A2DF_2;
class Class_1_C50F5982E5600913;
class Class_1_E7DB216A3FFF6C29;
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BASELOBBY_CANCELMATCHPROMISE_OFFSET UNITYSDK_OFFSET(0xB3AFE30)
#define RPG_CLIENT_BASELOBBY_CANCELMATCH_OFFSET UNITYSDK_OFFSET(0xB3AFB90)
#define RPG_CLIENT_BASELOBBY_CHANGESTATE_OFFSET UNITYSDK_OFFSET(0xB3ADE30)
#define RPG_CLIENT_BASELOBBY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3ADC50)
#define RPG_CLIENT_BASELOBBY_GETCURMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xB3AE070)
#define RPG_CLIENT_BASELOBBY_GETINVITETIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB3AE120)
#define RPG_CLIENT_BASELOBBY_GETMEMBERDATA_OFFSET UNITYSDK_OFFSET(0xB3ADEE0)
#define RPG_CLIENT_BASELOBBY_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0xB3B2070)
#define RPG_CLIENT_BASELOBBY_GET_ID_OFFSET UNITYSDK_OFFSET(0xB3B1F70)
#define RPG_CLIENT_BASELOBBY_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xB3B2180)
#define RPG_CLIENT_BASELOBBY_GET_ISINFIGHTING_OFFSET UNITYSDK_OFFSET(0xB3B1FB0)
#define RPG_CLIENT_BASELOBBY_GET_ISLOBBYMAX_OFFSET UNITYSDK_OFFSET(0xB3B2160)
#define RPG_CLIENT_BASELOBBY_GET_ISSELFLEADER_OFFSET UNITYSDK_OFFSET(0xB3AE490)
#define RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMEMBERS_OFFSET UNITYSDK_OFFSET(0xB3B2030)
#define RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMULTIPLAYERINFOS_OFFSET UNITYSDK_OFFSET(0xB3B2050)
#define RPG_CLIENT_BASELOBBY_GET_MAXMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xB3B20B0)
#define RPG_CLIENT_BASELOBBY_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0xB3B2010)
#define RPG_CLIENT_BASELOBBY_GET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0xB3B2090)
#define RPG_CLIENT_BASELOBBY_GET_SELFMEMBERDATA_OFFSET UNITYSDK_OFFSET(0xB3B10A0)
#define RPG_CLIENT_BASELOBBY_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB3B1F90)
#define RPG_CLIENT_BASELOBBY_INIT_OFFSET UNITYSDK_OFFSET(0xB3AD870)
#define RPG_CLIENT_BASELOBBY_INVITEPROMISE_OFFSET UNITYSDK_OFFSET(0xB3AE930)
#define RPG_CLIENT_BASELOBBY_INVITE_OFFSET UNITYSDK_OFFSET(0xB3AE8E0)
#define RPG_CLIENT_BASELOBBY_ISALLMEMBERREADY_OFFSET UNITYSDK_OFFSET(0xB3ADF80)
#define RPG_CLIENT_BASELOBBY_ISANYPLAYERINFIGHTING_OFFSET UNITYSDK_OFFSET(0xB3AE1B0)
#define RPG_CLIENT_BASELOBBY_KICKOUTPROMISE_OFFSET UNITYSDK_OFFSET(0xB3AE4F0)
#define RPG_CLIENT_BASELOBBY_KICKOUT_OFFSET UNITYSDK_OFFSET(0xB3AE250)
#define RPG_CLIENT_BASELOBBY_MODIFYSELFINFOPROMISE_OFFSET UNITYSDK_OFFSET(0xB3AEFD0)
#define RPG_CLIENT_BASELOBBY_MODIFYSELFINFO_OFFSET UNITYSDK_OFFSET(0xB3AEDA0)
#define RPG_CLIENT_BASELOBBY_QUITPROMISE_OFFSET UNITYSDK_OFFSET(0xB3B0440)
#define RPG_CLIENT_BASELOBBY_QUIT_OFFSET UNITYSDK_OFFSET(0xB3B0240)
#define RPG_CLIENT_BASELOBBY_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0xB3B2080)
#define RPG_CLIENT_BASELOBBY_SET_ID_OFFSET UNITYSDK_OFFSET(0xB3B1F80)
#define RPG_CLIENT_BASELOBBY_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xB3B2190)
#define RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMEMBERS_OFFSET UNITYSDK_OFFSET(0xB3B2040)
#define RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMULTIPLAYERINFOS_OFFSET UNITYSDK_OFFSET(0xB3B2060)
#define RPG_CLIENT_BASELOBBY_SET_MAXMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xB3B20C0)
#define RPG_CLIENT_BASELOBBY_SET_MEMBERS_OFFSET UNITYSDK_OFFSET(0xB3B2020)
#define RPG_CLIENT_BASELOBBY_SET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0xB3B20A0)
#define RPG_CLIENT_BASELOBBY_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xB3B1FA0)
#define RPG_CLIENT_BASELOBBY_STARTGAME_OFFSET UNITYSDK_OFFSET(0xB3AF8F0)
#define RPG_CLIENT_BASELOBBY_STARTMATCHPROMISE_OFFSET UNITYSDK_OFFSET(0xB3AF560)
#define RPG_CLIENT_BASELOBBY_STARTMATCH_OFFSET UNITYSDK_OFFSET(0xB3AF330)
#define RPG_CLIENT_BASELOBBY_SYNCFIGHTGAMESTATE_OFFSET UNITYSDK_OFFSET(0xB3B0D30)
#define RPG_CLIENT_BASELOBBY_SYNCLOBBYINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xB3B0E40)
#define RPG_CLIENT_BASELOBBY_SYNCMATCHRESULT_OFFSET UNITYSDK_OFFSET(0xB3B0770)
#define RPG_CLIENT_BASELOBBY__CONTAINMEMBERINFO_OFFSET UNITYSDK_OFFSET(0xB3B19C0)
#define RPG_CLIENT_BASELOBBY__CREATEPLAYUNITEXTINFO_OFFSET UNITYSDK_OFFSET(0xB3B1300)
#define RPG_CLIENT_BASELOBBY__CREATEPSSESSION_OFFSET UNITYSDK_OFFSET(0xB3B1350)
#define RPG_CLIENT_BASELOBBY__CTOR_OFFSET UNITYSDK_OFFSET(0xB3B21A0)
#define RPG_CLIENT_BASELOBBY__DOINVITEPROMISE_OFFSET UNITYSDK_OFFSET(0xB3AEA40)
#define RPG_CLIENT_BASELOBBY__ONINIT_OFFSET UNITYSDK_OFFSET(0xB3B11A0)
#define RPG_CLIENT_BASELOBBY__ONINVITERSP_OFFSET UNITYSDK_OFFSET(0xB3B1CB0)
#define RPG_CLIENT_BASELOBBY__ONKICKOUTRSP_OFFSET UNITYSDK_OFFSET(0xB3B1BC0)
#define RPG_CLIENT_BASELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET UNITYSDK_OFFSET(0xB3B1800)
#define RPG_CLIENT_BASELOBBY__ONMEMBERCHANGE_OFFSET UNITYSDK_OFFSET(0xB3B1280)
#define RPG_CLIENT_BASELOBBY__ONPOSTINIT_OFFSET UNITYSDK_OFFSET(0xB3B1240)
#define RPG_CLIENT_BASELOBBY__ONROOMINIT_OFFSET UNITYSDK_OFFSET(0xB3B11F0)
#define RPG_CLIENT_BASELOBBY__ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xB3B12C0)
#define RPG_CLIENT_BASELOBBY__ONTIMEOUT_OFFSET UNITYSDK_OFFSET(0xB3B1ED0)
#define RPG_CLIENT_BASELOBBY__REMOVEINVALIDMEMBERS_OFFSET UNITYSDK_OFFSET(0xB3B1840)
#define RPG_CLIENT_BASELOBBY__SYNCLOBBYSTATE_OFFSET UNITYSDK_OFFSET(0xB3B1120)
#define RPG_CLIENT_BASELOBBY__SYNCMATCHRESULTMEMBERS_OFFSET UNITYSDK_OFFSET(0xB3B08A0)
#define RPG_CLIENT_BASELOBBY__SYNCMEMBERINFO_OFFSET UNITYSDK_OFFSET(0xB3B15B0)
#define RPG_CLIENT_BASELOBBY__SYNCMEMBERS_OFFSET UNITYSDK_OFFSET(0xB3AD9B0)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseLobby_TypeDefinitionIndex = 61483;

	class BaseLobby : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _Members_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _UIDToInviteTimeStamp; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _GameParamList; // 0x20
		::System::Collections::Generic::List_1<::Class_1_C50F5982E5600913*>* _MatchResultMultiPlayerInfos_k__BackingField; // 0x28
		::RPG::Client::Promises::Promise* _CreateSessionPromise; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* _MatchResultMembers_k__BackingField; // 0x38
		::System::Boolean _IsDestroyed_k__BackingField; // 0x40
		::System::Boolean _CreateSession; // 0x41
		::System::Int32 _MaxMemberCount; // 0x44
		::System::UInt64 _ID_k__BackingField; // 0x48
		::RPG::Client::LobbyState _CurrentStatus_k__BackingField; // 0x50
		::Enum_3_A35B38E5F9115A76_2 _Type_k__BackingField; // 0x54
		::RPG::Client::LobbyState _PreviousStatus_k__BackingField; // 0x58
		::System::UInt32 _ChatInviteID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CTOR_OFFSET))(this);
		}

		::System::Void Init(::System::UInt64 a1, ::Enum_3_A35B38E5F9115A76_2 a2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>* a3, ::System::UInt32 a4, ::Class_1_E7DB216A3FFF6C29* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Enum_3_A35B38E5F9115A76_2, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>*, ::System::UInt32, ::Class_1_E7DB216A3FFF6C29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_INIT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_DISPOSE_OFFSET))(this);
		}

		::System::Void ChangeState(::RPG::Client::LobbyState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_CHANGESTATE_OFFSET))(this, a1);
		}

		::RPG::Client::LobbyMemberData* GetMemberData(::System::UInt32 a1)
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GETMEMBERDATA_OFFSET))(this, a1);
		}

		::System::Boolean IsAllMemberReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_ISALLMEMBERREADY_OFFSET))(this);
		}

		::System::Int32 GetCurMemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GETCURMEMBERCOUNT_OFFSET))(this);
		}

		::System::UInt32 GetInviteTimeStamp(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GETINVITETIMESTAMP_OFFSET))(this, a1);
		}

		::System::Boolean IsAnyPlayerInFighting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_ISANYPLAYERINFIGHTING_OFFSET))(this);
		}

		::System::Void KickOut(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_KICKOUT_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* KickOutPromise(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_KICKOUTPROMISE_OFFSET))(this, a1);
		}

		::System::Void Invite(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_INVITE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* InvitePromise(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_INVITEPROMISE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _DoInvitePromise(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__DOINVITEPROMISE_OFFSET))(this, a1);
		}

		::System::Void ModifySelfInfo(::Enum_3_63C076C405BE0674_1 a1, ::Class_1_0C36FD2A7876DF8E* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_1, ::Class_1_0C36FD2A7876DF8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_MODIFYSELFINFO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::Promise* ModifySelfInfoPromise(::Enum_3_63C076C405BE0674_1 a1, ::Class_1_0C36FD2A7876DF8E* a2)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::Enum_3_63C076C405BE0674_1, ::Class_1_0C36FD2A7876DF8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_MODIFYSELFINFOPROMISE_OFFSET))(this, a1, a2);
		}

		::System::Void StartMatch(::Class_1_0C36FD2A7876DF8E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0C36FD2A7876DF8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_STARTMATCH_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* StartMatchPromise(::Class_1_0C36FD2A7876DF8E* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_0C36FD2A7876DF8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_STARTMATCHPROMISE_OFFSET))(this, a1);
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

		::System::Void SyncMatchResult(::Class_1_69A5DDEA5F31A2DF_2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_69A5DDEA5F31A2DF_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SYNCMATCHRESULT_OFFSET))(this, a1);
		}

		::System::Void SyncFightGameState(::Class_1_4BC858D7C27E10ED_47* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_47*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SYNCFIGHTGAMESTATE_OFFSET))(this, a1);
		}

		::System::Void SyncLobbyInfoScNotify(::Class_1_24F009C622EAE626_3* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_24F009C622EAE626_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SYNCLOBBYINFOSCNOTIFY_OFFSET))(this, a1);
		}

		::System::Void _OnInit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnRoomInit(::Class_1_E7DB216A3FFF6C29* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7DB216A3FFF6C29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONROOMINIT_OFFSET))(this, a1);
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

		::Class_1_0C36FD2A7876DF8E* _CreatePlayUnitExtInfo(::System::Object* a1)
		{
			return ((::Class_1_0C36FD2A7876DF8E*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CREATEPLAYUNITEXTINFO_OFFSET))(this, a1);
		}

		::System::Void _CreatePSSession(::MiHoYo::SDK::MHYSDKC_Console_JoinRestriction a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MHYSDKC_Console_JoinRestriction))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CREATEPSSESSION_OFFSET))(this, a1);
		}

		::System::Void _SyncMatchResultMembers(::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCMATCHRESULTMEMBERS_OFFSET))(this, a1);
		}

		::System::Void _OnMatchResultMembersChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONMATCHRESULTMEMBERSCHANGE_OFFSET))(this);
		}

		::System::Void _SyncMembers(::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCMEMBERS_OFFSET))(this, a1);
		}

		::System::Void _SyncMemberInfo(::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* a1, ::Class_1_C50F5982E5600913* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*, ::Class_1_C50F5982E5600913*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCMEMBERINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _RemoveInvalidMembers(::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__REMOVEINVALIDMEMBERS_OFFSET))(this, a1);
		}

		::System::Boolean _ContainMemberInfo(::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>* a1, ::RPG::Client::LobbyMemberData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_C50F5982E5600913*>*, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__CONTAINMEMBERINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncLobbyState(::Enum_3_F80BFD5B986D5503_3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__SYNCLOBBYSTATE_OFFSET))(this, a1);
		}

		::System::Void _OnKickOutRsp(::System::UInt16 a1, ::System::Object* a2, ::RPG::Client::Promises::Promise* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONKICKOUTRSP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnInviteRsp(::System::UInt16 a1, ::System::Object* a2, ::System::UInt32 a3, ::RPG::Client::Promises::Promise* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*, ::System::UInt32, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONINVITERSP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _OnTimeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY__ONTIMEOUT_OFFSET))(this);
		}

		::System::UInt64 get_ID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_ID_OFFSET))(this, a1);
		}

		::Enum_3_A35B38E5F9115A76_2 get_Type()
		{
			return ((::Enum_3_A35B38E5F9115A76_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Enum_3_A35B38E5F9115A76_2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_TYPE_OFFSET))(this, a1);
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

		::System::Void set_Members(::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MEMBERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* get_MatchResultMembers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMEMBERS_OFFSET))(this);
		}

		::System::Void set_MatchResultMembers(::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LobbyMemberData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMEMBERS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Class_1_C50F5982E5600913*>* get_MatchResultMultiPlayerInfos()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_C50F5982E5600913*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_MATCHRESULTMULTIPLAYERINFOS_OFFSET))(this);
		}

		::System::Void set_MatchResultMultiPlayerInfos(::System::Collections::Generic::List_1<::Class_1_C50F5982E5600913*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_C50F5982E5600913*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MATCHRESULTMULTIPLAYERINFOS_OFFSET))(this, a1);
		}

		::RPG::Client::LobbyState get_CurrentStatus()
		{
			return ((::RPG::Client::LobbyState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_CURRENTSTATUS_OFFSET))(this);
		}

		::System::Void set_CurrentStatus(::RPG::Client::LobbyState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_CURRENTSTATUS_OFFSET))(this, a1);
		}

		::RPG::Client::LobbyState get_PreviousStatus()
		{
			return ((::RPG::Client::LobbyState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_PREVIOUSSTATUS_OFFSET))(this);
		}

		::System::Void set_PreviousStatus(::RPG::Client::LobbyState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyState))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_PREVIOUSSTATUS_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxMemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_MAXMEMBERCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxMemberCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_MAXMEMBERCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLobbyMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ISLOBBYMAX_OFFSET))(this);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void set_IsDestroyed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASELOBBY_SET_ISDESTROYED_OFFSET))(this, a1);
		}
	};
}
