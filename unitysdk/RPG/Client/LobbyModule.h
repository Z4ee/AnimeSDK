#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1DD6AC150642D284;
class Class_1_7B005A18003A04C3;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }

#define RPG_CLIENT_LOBBYMODULE_CREATELOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0x18614BB0)
#define RPG_CLIENT_LOBBYMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18612C00)
#define RPG_CLIENT_LOBBYMODULE_GET_CURRENTLOBBY_OFFSET UNITYSDK_OFFSET(0x18615820)
#define RPG_CLIENT_LOBBYMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x186157A0)
#define RPG_CLIENT_LOBBYMODULE_GET__ISRECONNECTING_OFFSET UNITYSDK_OFFSET(0x186140D0)
#define RPG_CLIENT_LOBBYMODULE_INITLOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0x18614600)
#define RPG_CLIENT_LOBBYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x18612AF0)
#define RPG_CLIENT_LOBBYMODULE_ISLOBBYEXIST_OFFSET UNITYSDK_OFFSET(0x18615520)
#define RPG_CLIENT_LOBBYMODULE_JOINLOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0x18614D70)
#define RPG_CLIENT_LOBBYMODULE_MODIFYSELFINFOPROMISE_OFFSET UNITYSDK_OFFSET(0x186153C0)
#define RPG_CLIENT_LOBBYMODULE_QUITLOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0x18615000)
#define RPG_CLIENT_LOBBYMODULE_RECONNECTPROMISE_OFFSET UNITYSDK_OFFSET(0x18615110)
#define RPG_CLIENT_LOBBYMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x18614AF0)
#define RPG_CLIENT_LOBBYMODULE_SET_CURRENTLOBBY_OFFSET UNITYSDK_OFFSET(0x18615830)
#define RPG_CLIENT_LOBBYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x18612DE0)
#define RPG_CLIENT_LOBBYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x18615840)
#define RPG_CLIENT_LOBBYMODULE__ONCMDCANCELMATCHSCRSP_OFFSET UNITYSDK_OFFSET(0x18613D60)
#define RPG_CLIENT_LOBBYMODULE__ONCMDGETCROSSINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x18614130)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYCREATESCRSP_OFFSET UNITYSDK_OFFSET(0x186135D0)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYGETINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x18613DB0)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYJOINSCRSP_OFFSET UNITYSDK_OFFSET(0x18613770)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYKICKOUTSCRSP_OFFSET UNITYSDK_OFFSET(0x18613A20)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYMODIFYPLAYERINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x18613C10)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYQUITSCRSP_OFFSET UNITYSDK_OFFSET(0x18613A70)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYSYNCINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x18614810)
#define RPG_CLIENT_LOBBYMODULE__ONCMDSTARTMATCHSCRSP_OFFSET UNITYSDK_OFFSET(0x18613D10)
#define RPG_CLIENT_LOBBYMODULE__ONFIGHTGAMESTARTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x18614920)
#define RPG_CLIENT_LOBBYMODULE__ONFIGHTGAMESTATESCRSP_OFFSET UNITYSDK_OFFSET(0x186149B0)
#define RPG_CLIENT_LOBBYMODULE__ONLOBBYINTERACTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x18614A40)
#define RPG_CLIENT_LOBBYMODULE__ONMULTIPLAYERSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0x18615640)
#define RPG_CLIENT_LOBBYMODULE__ONRECONNECTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x186156A0)
#define RPG_CLIENT_LOBBYMODULE__TRYRECONNECTLOBBY_OFFSET UNITYSDK_OFFSET(0x18615590)
#define RPG_CLIENT_LOBBYMODULE__TRYRESOLVECREATELOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0x186136E0)
#define RPG_CLIENT_LOBBYMODULE__TRYRESOLVEJOINLOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0x18613980)
#define RPG_CLIENT_LOBBYMODULE__TRYRESOLVEMODIFYPROMISE_OFFSET UNITYSDK_OFFSET(0x18613CB0)
#define RPG_CLIENT_LOBBYMODULE__TRYRESOLVEQUITLOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0x18613BB0)
#define RPG_CLIENT_LOBBYMODULE__TRYRESOLVERECONNECTPROMISE_OFFSET UNITYSDK_OFFSET(0x18614760)

namespace RPG::Client
{
	inline static constexpr unsigned int LobbyModule_TypeDefinitionIndex = 65843;

	class LobbyModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* _InitPromise; // 0x10
		::RPG::Client::Promises::Promise* _ModifyPromise; // 0x18
		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* _CreateLobbyPromise; // 0x20
		::RPG::Client::BaseLobby* _CurrentLobby_k__BackingField; // 0x28
		::RPG::Client::Promises::Promise_1<::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2>>* _ReconnectPromise; // 0x30
		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* _JoinLobbyPromise; // 0x38
		::RPG::Client::Promises::Promise* _QuitLobbyPromise; // 0x40
		::System::Boolean _DataDirty; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdLobbyCreateScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYCREATESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdLobbyJoinScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYJOINSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdLobbyKickOutScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYKICKOUTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdLobbyQuitScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYQUITSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdLobbyModifyPlayerInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYMODIFYPLAYERINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdStartMatchScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDSTARTMATCHSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdCancelMatchScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDCANCELMATCHSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdLobbyGetInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYGETINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetCrossInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDGETCROSSINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdLobbySyncInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYSYNCINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFightGameStartScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONFIGHTGAMESTARTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFightGameStateScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONFIGHTGAMESTATESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnLobbyInteractScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONLOBBYINTERACTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* CreateLobbyPromise(::Enum_3_01618AD0437C8486_2 a1, ::Class_1_7B005A18003A04C3* a2, ::System::UInt32 a3, ::Class_1_1DD6AC150642D284* a4)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::Enum_3_01618AD0437C8486_2, ::Class_1_7B005A18003A04C3*, ::System::UInt32, ::Class_1_1DD6AC150642D284*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_CREATELOBBYPROMISE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* JoinLobbyPromise(::System::UInt64 a1, ::Class_1_7B005A18003A04C3* a2)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::System::UInt64, ::Class_1_7B005A18003A04C3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_JOINLOBBYPROMISE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::Promise* QuitLobbyPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_QUITLOBBYPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* InitLobbyPromise()
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_INITLOBBYPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2>>* ReconnectPromise()
		{
			return ((::RPG::Client::Promises::Promise_1<::System::ValueTuple_2<::System::Boolean, ::Enum_3_01618AD0437C8486_2>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_RECONNECTPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* ModifySelfInfoPromise(::Enum_3_63C076C405BE0674_1 a1, ::Class_1_7B005A18003A04C3* a2)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::Enum_3_63C076C405BE0674_1, ::Class_1_7B005A18003A04C3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_MODIFYSELFINFOPROMISE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsLobbyExist(::Enum_3_01618AD0437C8486_2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_ISLOBBYEXIST_OFFSET))(this, a1);
		}

		::System::Void _TryReconnectLobby(::RPG::Client::BaseLobby* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRECONNECTLOBBY_OFFSET))(this, a1);
		}

		::System::Void _OnMultiplayerServerConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONMULTIPLAYERSERVERCONNECTED_OFFSET))(this);
		}

		::System::Void _TryResolveCreateLobbyPromise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRESOLVECREATELOBBYPROMISE_OFFSET))(this);
		}

		::System::Void _TryResolveJoinLobbyPromise(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRESOLVEJOINLOBBYPROMISE_OFFSET))(this, a1);
		}

		::System::Void _TryResolveQuitLobbyPromise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRESOLVEQUITLOBBYPROMISE_OFFSET))(this);
		}

		::System::Void _TryResolveReconnectPromise(::System::Boolean a1, ::Enum_3_01618AD0437C8486_2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRESOLVERECONNECTPROMISE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnReconnectTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONRECONNECTTIMEOUT_OFFSET))(this);
		}

		::System::Void _TryResolveModifyPromise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRESOLVEMODIFYPROMISE_OFFSET))(this);
		}

		static ::RPG::Client::LobbyModule* get_Instance()
		{
			return ((::RPG::Client::LobbyModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_GET_INSTANCE_OFFSET))();
		}

		::RPG::Client::BaseLobby* get_CurrentLobby()
		{
			return ((::RPG::Client::BaseLobby*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_GET_CURRENTLOBBY_OFFSET))(this);
		}

		::System::Void set_CurrentLobby(::RPG::Client::BaseLobby* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_SET_CURRENTLOBBY_OFFSET))(this, a1);
		}

		::System::Boolean get__IsReconnecting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_GET__ISRECONNECTING_OFFSET))(this);
		}
	};
}
