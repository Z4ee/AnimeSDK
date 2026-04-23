#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_0_16E4307DCC419505_767;
class Class_1_0AA89CACEC497206;
class Class_1_E7DB216A3FFF6C29_1;
class Class_1_FBDFBC4C2F16CDD1;
class Class_1_FF03248024BAA97A;
namespace Google::Protobuf { class ByteString; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_CONNECTFIGHTSERVER_OFFSET UNITYSDK_OFFSET(0xAAF2BC0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_CONTINUEGAMEPROMISE_OFFSET UNITYSDK_OFFSET(0xAAF2DF0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAF26B0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GETFIGHTROOM_OFFSET UNITYSDK_OFFSET(0xAAF3710)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_FIGHTSERVERNOWMSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xAAF4BA0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xAAF20F0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_RTT_OFFSET UNITYSDK_OFFSET(0xAAF4C80)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GIVEUPGAMEPROMISE_OFFSET UNITYSDK_OFFSET(0xAAF3200)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xAAF2150)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_REGISTERMULTIPLAYERGAME_OFFSET UNITYSDK_OFFSET(0xAAF34B0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_STARTPSNOTIFYPREMIUMFEATURETIMER_OFFSET UNITYSDK_OFFSET(0xAAF3750)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_TRYCONTINUEGAME_OFFSET UNITYSDK_OFFSET(0xAAF2C40)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_UNREGISTERMULTIPLAYERGAME_OFFSET UNITYSDK_OFFSET(0xAAF35E0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xAAF3A40)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAAF3960)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CANCELPSNOTIFYPREMIUMFEATURETIMER_OFFSET UNITYSDK_OFFSET(0xAAF4A80)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CONTINUEGAMEPROMISE_B__6_0_OFFSET UNITYSDK_OFFSET(0xAAF4D20)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CREATEGAME_OFFSET UNITYSDK_OFFSET(0xAAF3C00)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CREATEPSNOTIFYPREMIUMFEATURETIMER_OFFSET UNITYSDK_OFFSET(0xAAF37A0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xAAF4C90)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__DISPOSEFIGHTROOM_OFFSET UNITYSDK_OFFSET(0xAAF47A0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__GETHANDLERBYMODE_OFFSET UNITYSDK_OFFSET(0xAAF41B0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__GIVEUPGAMEPROMISE_B__7_0_OFFSET UNITYSDK_OFFSET(0xAAF4DE0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__HANDLESERVEREXCEPTION_OFFSET UNITYSDK_OFFSET(0xAAF4490)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__INVOKECONTINUEGAMECALLBACK_OFFSET UNITYSDK_OFFSET(0xAAF40C0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGAMESTARTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xAAF3A80)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGAMESTATESCRSP_OFFSET UNITYSDK_OFFSET(0xAAF3D80)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGIVEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xAAF4140)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTHEARTBEATSCRSP_OFFSET UNITYSDK_OFFSET(0xAAF4A10)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0xAAF4900)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0xAAF42A0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERCONNECTFAIL_OFFSET UNITYSDK_OFFSET(0xAAF4390)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xAAF4570)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERSTOPPED_OFFSET UNITYSDK_OFFSET(0xAAF4670)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0xAAF47F0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONTICKPSNOTIFYPREMIUMFEATURE_OFFSET UNITYSDK_OFFSET(0xAAF4B20)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAAF4F20)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xAAF4E90)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xAAF4F90)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAAF4F30)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiplayerGameModule_TypeDefinitionIndex = 61079;

	class MultiplayerGameModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::Single TimerInterval; // 0x0
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _ContinuePromise; // 0x10
		::System::Collections::Generic::Dictionary_2<::Enum_3_A35B38E5F9115A76_2, ::Class_0_16E4307DCC419505_767*>* _HandlerByModes; // 0x18
		::RPG::Client::Promises::Promise* _GiveUpPromise; // 0x20
		::System::Action_1<::System::Boolean>* _ContinueGameCallback; // 0x28
		::Class_1_0AA89CACEC497206* _FightRoom; // 0x30
		::System::Double _FightServerReceiveTimeMs; // 0x38
		::System::Boolean _WaitContinueGame; // 0x40
		::System::Single _RTT; // 0x44
		::System::Int32 _TickTimerID; // 0x48
		::System::UInt64 _FightServerTimeStampMs; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MultiplayerGameModule* get_Instance()
		{
			return ((::RPG::Client::MultiplayerGameModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_INSTANCE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void ConnectFightServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_CONNECTFIGHTSERVER_OFFSET))(this);
		}

		::System::Void TryContinueGame(::System::Action_1<::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_TRYCONTINUEGAME_OFFSET))(this, callback);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* ContinueGamePromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_CONTINUEGAMEPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* GiveUpGamePromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_GIVEUPGAMEPROMISE_OFFSET))(this);
		}

		::System::Void RegisterMultiplayerGame(::Class_0_16E4307DCC419505_767* game)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_767*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_REGISTERMULTIPLAYERGAME_OFFSET))(this, game);
		}

		::System::Void UnregisterMultiplayerGame(::Class_0_16E4307DCC419505_767* game)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_767*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_UNREGISTERMULTIPLAYERGAME_OFFSET))(this, game);
		}

		::Class_1_0AA89CACEC497206* GetFightRoom()
		{
			return ((::Class_1_0AA89CACEC497206*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_GETFIGHTROOM_OFFSET))(this);
		}

		::System::Void StartPSNotifyPremiumFeatureTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_STARTPSNOTIFYPREMIUMFEATURETIMER_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnFightGameStartScNotify(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGAMESTARTSCNOTIFY_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnFightGameStateScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGAMESTATESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFightGiveUpScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGIVEUPSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::Class_0_16E4307DCC419505_767* _GetHandlerByMode(::Enum_3_A35B38E5F9115A76_2 mode)
		{
			return ((::Class_0_16E4307DCC419505_767*(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__GETHANDLERBYMODE_OFFSET))(this, mode);
		}

		::System::Void _CreateGame(::Class_1_FBDFBC4C2F16CDD1* info, ::System::Collections::Generic::IList_1<::Class_1_FF03248024BAA97A*>* players, ::Class_1_E7DB216A3FFF6C29_1* roomExtInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBDFBC4C2F16CDD1*, ::System::Collections::Generic::IList_1<::Class_1_FF03248024BAA97A*>*, ::Class_1_E7DB216A3FFF6C29_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__CREATEGAME_OFFSET))(this, info, players, roomExtInfo);
		}

		::System::Void _OnMultiplayerServerConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERCONNECTED_OFFSET))(this);
		}

		::System::Void _OnMultiplayerServerConnectFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERCONNECTFAIL_OFFSET))(this);
		}

		::System::Void _OnMultiplayerServerDisconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERDISCONNECTED_OFFSET))(this);
		}

		::System::Void _OnMultiplayerServerStopped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERSTOPPED_OFFSET))(this);
		}

		::System::Void _HandleServerException()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__HANDLESERVEREXCEPTION_OFFSET))(this);
		}

		::System::Void _OnOnGeneralRsp(::System::UInt32 msgId, ::Google::Protobuf::ByteString* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONONGENERALRSP_OFFSET))(this, msgId, msg);
		}

		::System::Void _OnGeneralNotify(::System::UInt32 msgId, ::Google::Protobuf::ByteString* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONGENERALNOTIFY_OFFSET))(this, msgId, msg);
		}

		::System::Void _OnFightHeartBeatScRsp(::System::UInt64 serverTimeMs, ::System::Single rtt)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTHEARTBEATSCRSP_OFFSET))(this, serverTimeMs, rtt);
		}

		::System::Void _DisposeFightRoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__DISPOSEFIGHTROOM_OFFSET))(this);
		}

		::System::Void _CreatePSNotifyPremiumFeatureTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__CREATEPSNOTIFYPREMIUMFEATURETIMER_OFFSET))(this);
		}

		::System::Void _CancelPSNotifyPremiumFeatureTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__CANCELPSNOTIFYPREMIUMFEATURETIMER_OFFSET))(this);
		}

		::System::Void _OnTickPSNotifyPremiumFeature()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONTICKPSNOTIFYPREMIUMFEATURE_OFFSET))(this);
		}

		::System::Void _InvokeContinueGameCallback(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__INVOKECONTINUEGAMECALLBACK_OFFSET))(this, success);
		}

		::System::UInt64 get_FightServerNowMsTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_FIGHTSERVERNOWMSTIMESTAMP_OFFSET))(this);
		}

		::System::Single get_RTT()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_RTT_OFFSET))(this);
		}

		::System::Void _ContinueGamePromise_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__CONTINUEGAMEPROMISE_B__6_0_OFFSET))(this);
		}

		::System::Void _GiveUpGamePromise_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__GIVEUPGAMEPROMISE_B__7_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
