#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_3.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_0_16E4307DCC419505_667;
class Class_1_0AA89CACEC497206;
class Class_1_1A263F5BDD91B9DA_1;
class Class_1_3A7B270FE0BE90AE;
class Class_1_F955916D7B4EE18B;
namespace Google::Protobuf { class ByteString; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_CONNECTFIGHTSERVER_OFFSET UNITYSDK_OFFSET(0x9DAC1B0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DABCA0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GETFIGHTROOM_OFFSET UNITYSDK_OFFSET(0x9DAC7A0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_FIGHTSERVERNOWMSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9DADBE0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x9DAB6E0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_RTT_OFFSET UNITYSDK_OFFSET(0x9DADCC0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GIVEUPGAMEPROMISE_OFFSET UNITYSDK_OFFSET(0x9DAC3E0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9DAB740)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_REGISTERMULTIPLAYERGAME_OFFSET UNITYSDK_OFFSET(0x9DAC540)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_STARTPSNOTIFYPREMIUMFEATURETIMER_OFFSET UNITYSDK_OFFSET(0x9DAC7E0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_TRYCONTINUEGAME_OFFSET UNITYSDK_OFFSET(0x9DAC230)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_UNREGISTERMULTIPLAYERGAME_OFFSET UNITYSDK_OFFSET(0x9DAC670)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DACAD0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DAC9F0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CANCELPSNOTIFYPREMIUMFEATURETIMER_OFFSET UNITYSDK_OFFSET(0x9DADAC0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CREATEGAME_OFFSET UNITYSDK_OFFSET(0x9DACC90)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CREATEPSNOTIFYPREMIUMFEATURETIMER_OFFSET UNITYSDK_OFFSET(0x9DAC830)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9DADCD0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__DISPOSEFIGHTROOM_OFFSET UNITYSDK_OFFSET(0x9DAD7E0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__GETHANDLERBYMODE_OFFSET UNITYSDK_OFFSET(0x9DAD1F0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__HANDLESERVEREXCEPTION_OFFSET UNITYSDK_OFFSET(0x9DAD4D0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__INVOKECONTINUEGAMECALLBACK_OFFSET UNITYSDK_OFFSET(0x9DAD120)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGAMESTARTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9DACB10)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGAMESTATESCRSP_OFFSET UNITYSDK_OFFSET(0x9DACE10)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGIVEUPSCRSP_OFFSET UNITYSDK_OFFSET(0x9DAD180)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTHEARTBEATSCRSP_OFFSET UNITYSDK_OFFSET(0x9DADA50)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0x9DAD940)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0x9DAD2E0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERCONNECTFAIL_OFFSET UNITYSDK_OFFSET(0x9DAD3D0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x9DAD5B0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERSTOPPED_OFFSET UNITYSDK_OFFSET(0x9DAD6B0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0x9DAD830)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONTICKPSNOTIFYPREMIUMFEATURE_OFFSET UNITYSDK_OFFSET(0x9DADB60)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DADDF0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9DADD60)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DADE60)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DADE00)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiplayerGameModule_TypeDefinitionIndex = 53934;

	class MultiplayerGameModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::Single TimerInterval; // 0x0
		::Class_1_0AA89CACEC497206* _FightRoom; // 0x10
		::System::Collections::Generic::Dictionary_2<::Enum_3_F80BFD5B986D5503_3, ::Class_0_16E4307DCC419505_667*>* _HandlerByModes; // 0x18
		::RPG::Client::Promises::Promise* _GiveUpPromise; // 0x20
		::System::Action_1<::System::Boolean>* _ContinueGameCallback; // 0x28
		::System::Boolean _WaitContinueGame; // 0x30
		::System::UInt64 _FightServerTimeStampMs; // 0x38
		::System::Double _FightServerReceiveTimeMs; // 0x40
		::System::Int32 _TickTimerID; // 0x48
		::System::Single _RTT; // 0x4C

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

		::RPG::Client::Promises::Promise* GiveUpGamePromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_GIVEUPGAMEPROMISE_OFFSET))(this);
		}

		::System::Void RegisterMultiplayerGame(::Class_0_16E4307DCC419505_667* game)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_667*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_REGISTERMULTIPLAYERGAME_OFFSET))(this, game);
		}

		::System::Void UnregisterMultiplayerGame(::Class_0_16E4307DCC419505_667* game)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_667*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_UNREGISTERMULTIPLAYERGAME_OFFSET))(this, game);
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

		::Class_0_16E4307DCC419505_667* _GetHandlerByMode(::Enum_3_F80BFD5B986D5503_3 mode)
		{
			return ((::Class_0_16E4307DCC419505_667*(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__GETHANDLERBYMODE_OFFSET))(this, mode);
		}

		::System::Void _CreateGame(::Class_1_F955916D7B4EE18B* info, ::System::Collections::Generic::IList_1<::Class_1_3A7B270FE0BE90AE*>* players, ::Class_1_1A263F5BDD91B9DA_1* roomExtInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F955916D7B4EE18B*, ::System::Collections::Generic::IList_1<::Class_1_3A7B270FE0BE90AE*>*, ::Class_1_1A263F5BDD91B9DA_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__CREATEGAME_OFFSET))(this, info, players, roomExtInfo);
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
