#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_1.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0C36FD2A7876DF8E;
class Class_1_E7DB216A3FFF6C29;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }

#define RPG_CLIENT_LOBBYMODULE_CREATELOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0xA6EFA60)
#define RPG_CLIENT_LOBBYMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6EE1D0)
#define RPG_CLIENT_LOBBYMODULE_GET_CURRENTLOBBY_OFFSET UNITYSDK_OFFSET(0xA6F0560)
#define RPG_CLIENT_LOBBYMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA6F0500)
#define RPG_CLIENT_LOBBYMODULE_GET__ISRECONNECTING_OFFSET UNITYSDK_OFFSET(0xA6EF070)
#define RPG_CLIENT_LOBBYMODULE_INITLOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0xA6EF520)
#define RPG_CLIENT_LOBBYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xA6EE080)
#define RPG_CLIENT_LOBBYMODULE_ISLOBBYEXIST_OFFSET UNITYSDK_OFFSET(0xA6F0280)
#define RPG_CLIENT_LOBBYMODULE_JOINLOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0xA6EFBB0)
#define RPG_CLIENT_LOBBYMODULE_MODIFYSELFINFOPROMISE_OFFSET UNITYSDK_OFFSET(0xA6F0190)
#define RPG_CLIENT_LOBBYMODULE_QUITLOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0xA6EFD60)
#define RPG_CLIENT_LOBBYMODULE_RECONNECTPROMISE_OFFSET UNITYSDK_OFFSET(0xA6EFEC0)
#define RPG_CLIENT_LOBBYMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xA6EFA00)
#define RPG_CLIENT_LOBBYMODULE_SET_CURRENTLOBBY_OFFSET UNITYSDK_OFFSET(0xA6F0570)
#define RPG_CLIENT_LOBBYMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA6EE320)
#define RPG_CLIENT_LOBBYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA6F0580)
#define RPG_CLIENT_LOBBYMODULE__ONCMDCANCELMATCHSCRSP_OFFSET UNITYSDK_OFFSET(0xA6EED30)
#define RPG_CLIENT_LOBBYMODULE__ONCMDGETCROSSINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA6EF0D0)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYCREATESCRSP_OFFSET UNITYSDK_OFFSET(0xA6EE610)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYGETINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA6EED80)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYJOINSCRSP_OFFSET UNITYSDK_OFFSET(0xA6EE7B0)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYKICKOUTSCRSP_OFFSET UNITYSDK_OFFSET(0xA6EEA60)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYMODIFYPLAYERINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xA6EEBE0)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYQUITSCRSP_OFFSET UNITYSDK_OFFSET(0xA6EEAB0)
#define RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYSYNCINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA6EF760)
#define RPG_CLIENT_LOBBYMODULE__ONCMDSTARTMATCHSCRSP_OFFSET UNITYSDK_OFFSET(0xA6EECE0)
#define RPG_CLIENT_LOBBYMODULE__ONFIGHTGAMESTARTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA6EF810)
#define RPG_CLIENT_LOBBYMODULE__ONFIGHTGAMESTATESCRSP_OFFSET UNITYSDK_OFFSET(0xA6EF8A0)
#define RPG_CLIENT_LOBBYMODULE__ONLOBBYINTERACTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xA6EF930)
#define RPG_CLIENT_LOBBYMODULE__ONMULTIPLAYERSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0xA6F03A0)
#define RPG_CLIENT_LOBBYMODULE__ONRECONNECTTIMEOUT_OFFSET UNITYSDK_OFFSET(0xA6F0400)
#define RPG_CLIENT_LOBBYMODULE__TRYRECONNECTLOBBY_OFFSET UNITYSDK_OFFSET(0xA6F02F0)
#define RPG_CLIENT_LOBBYMODULE__TRYRESOLVECREATELOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0xA6EE720)
#define RPG_CLIENT_LOBBYMODULE__TRYRESOLVEJOINLOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0xA6EE9C0)
#define RPG_CLIENT_LOBBYMODULE__TRYRESOLVEMODIFYPROMISE_OFFSET UNITYSDK_OFFSET(0xA6EEC80)
#define RPG_CLIENT_LOBBYMODULE__TRYRESOLVEQUITLOBBYPROMISE_OFFSET UNITYSDK_OFFSET(0xA6EEB80)
#define RPG_CLIENT_LOBBYMODULE__TRYRESOLVERECONNECTPROMISE_OFFSET UNITYSDK_OFFSET(0xA6EF6B0)
#define RPG_CLIENT_LOBBYMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6F0630)
#define RPG_CLIENT_LOBBYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA6F05A0)
#define RPG_CLIENT_LOBBYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xA6F0640)

namespace RPG::Client
{
	inline static constexpr unsigned int LobbyModule_TypeDefinitionIndex = 60562;

	class LobbyModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* _InitPromise; // 0x10
		::RPG::Client::Promises::Promise_1<::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2>>* _ReconnectPromise; // 0x18
		::RPG::Client::Promises::Promise* _QuitLobbyPromise; // 0x20
		::RPG::Client::Promises::Promise* _ModifyPromise; // 0x28
		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* _CreateLobbyPromise; // 0x30
		::RPG::Client::BaseLobby* _CurrentLobby_k__BackingField; // 0x38
		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* _JoinLobbyPromise; // 0x40
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

		::System::Void _OnCmdLobbyCreateScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYCREATESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLobbyJoinScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYJOINSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLobbyKickOutScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYKICKOUTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLobbyQuitScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYQUITSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLobbyModifyPlayerInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYMODIFYPLAYERINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdStartMatchScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDSTARTMATCHSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdCancelMatchScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDCANCELMATCHSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLobbyGetInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYGETINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdGetCrossInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDGETCROSSINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdLobbySyncInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONCMDLOBBYSYNCINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFightGameStartScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONFIGHTGAMESTARTSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFightGameStateScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONFIGHTGAMESTATESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnLobbyInteractScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONLOBBYINTERACTSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* CreateLobbyPromise(::Enum_3_A35B38E5F9115A76_2 type, ::Class_1_0C36FD2A7876DF8E* info, ::System::UInt32 createParam, ::Class_1_E7DB216A3FFF6C29* roomExtInfo)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2, ::Class_1_0C36FD2A7876DF8E*, ::System::UInt32, ::Class_1_E7DB216A3FFF6C29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_CREATELOBBYPROMISE_OFFSET))(this, type, info, createParam, roomExtInfo);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* JoinLobbyPromise(::System::UInt64 roomID, ::Class_1_0C36FD2A7876DF8E* info)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::System::UInt64, ::Class_1_0C36FD2A7876DF8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_JOINLOBBYPROMISE_OFFSET))(this, roomID, info);
		}

		::RPG::Client::Promises::Promise* QuitLobbyPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_QUITLOBBYPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>* InitLobbyPromise()
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_INITLOBBYPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2>>* ReconnectPromise()
		{
			return ((::RPG::Client::Promises::Promise_1<::System::ValueTuple_2<::System::Boolean, ::Enum_3_A35B38E5F9115A76_2>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_RECONNECTPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* ModifySelfInfoPromise(::Enum_3_63C076C405BE0674_1 type, ::Class_1_0C36FD2A7876DF8E* extInfo)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::Enum_3_63C076C405BE0674_1, ::Class_1_0C36FD2A7876DF8E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_MODIFYSELFINFOPROMISE_OFFSET))(this, type, extInfo);
		}

		::System::Boolean IsLobbyExist(::Enum_3_A35B38E5F9115A76_2 type)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_ISLOBBYEXIST_OFFSET))(this, type);
		}

		::System::Void _TryReconnectLobby(::RPG::Client::BaseLobby* lobby)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRECONNECTLOBBY_OFFSET))(this, lobby);
		}

		::System::Void _OnMultiplayerServerConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__ONMULTIPLAYERSERVERCONNECTED_OFFSET))(this);
		}

		::System::Void _TryResolveCreateLobbyPromise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRESOLVECREATELOBBYPROMISE_OFFSET))(this);
		}

		::System::Void _TryResolveJoinLobbyPromise(::System::Boolean isSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRESOLVEJOINLOBBYPROMISE_OFFSET))(this, isSuccess);
		}

		::System::Void _TryResolveQuitLobbyPromise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRESOLVEQUITLOBBYPROMISE_OFFSET))(this);
		}

		::System::Void _TryResolveReconnectPromise(::System::Boolean isInFight, ::Enum_3_A35B38E5F9115A76_2 gameMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE__TRYRESOLVERECONNECTPROMISE_OFFSET))(this, isInFight, gameMode);
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

		::System::Void set_CurrentLobby(::RPG::Client::BaseLobby* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_SET_CURRENTLOBBY_OFFSET))(this, value);
		}

		::System::Boolean get__IsReconnecting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE_GET__ISRECONNECTING_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOBBYMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
