#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_0_16E4307DCC419505_818;
class Class_1_6A9EF6A57FAD498C;
class Class_1_C50F5982E5600913;
class Class_1_E7DB216A3FFF6C29_1;
class Class_1_FBDFBC4C2F16CDD1;
namespace Google::Protobuf { class ByteString; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_CONNECTFIGHTSERVER_OFFSET UNITYSDK_OFFSET(0xC1BDA40)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_CONTINUEGAMEPROMISE_OFFSET UNITYSDK_OFFSET(0xC1C14C0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1C0D50)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GETFIGHTROOM_OFFSET UNITYSDK_OFFSET(0xC1C1BA0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_FIGHTSERVERNOWMSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xC1C3180)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC1C06E0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GET_RTT_OFFSET UNITYSDK_OFFSET(0xC1C3250)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_GIVEUPGAMEPROMISE_OFFSET UNITYSDK_OFFSET(0xC1C18E0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC1C0740)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_REGISTERMULTIPLAYERGAME_OFFSET UNITYSDK_OFFSET(0xC1BD3E0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_STARTPSNOTIFYPREMIUMFEATURETIMER_OFFSET UNITYSDK_OFFSET(0xC1C1BE0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_TRYCONTINUEGAME_OFFSET UNITYSDK_OFFSET(0xC1C1310)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE_UNREGISTERMULTIPLAYERGAME_OFFSET UNITYSDK_OFFSET(0xC1BD790)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC1C2030)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC1C1E00)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CANCELPSNOTIFYPREMIUMFEATURETIMER_OFFSET UNITYSDK_OFFSET(0xC1C3060)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CONTINUEGAMEPROMISE_B__6_0_OFFSET UNITYSDK_OFFSET(0xC1C32F0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CREATEGAME_OFFSET UNITYSDK_OFFSET(0xC1C21F0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CREATEPSNOTIFYPREMIUMFEATURETIMER_OFFSET UNITYSDK_OFFSET(0xC1C1C30)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC1C3260)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__DISPOSEFIGHTROOM_OFFSET UNITYSDK_OFFSET(0xC1C2D80)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__GETHANDLERBYMODE_OFFSET UNITYSDK_OFFSET(0xC1C27A0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__GIVEUPGAMEPROMISE_B__7_0_OFFSET UNITYSDK_OFFSET(0xC1C33B0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__HANDLESERVEREXCEPTION_OFFSET UNITYSDK_OFFSET(0xC1C2A70)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__INVOKECONTINUEGAMECALLBACK_OFFSET UNITYSDK_OFFSET(0xC1C26B0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGAMESTARTSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC1C2070)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGAMESTATESCRSP_OFFSET UNITYSDK_OFFSET(0xC1C2370)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGIVEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xC1C2730)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTHEARTBEATSCRSP_OFFSET UNITYSDK_OFFSET(0xC1C2FF0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0xC1C2EE0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0xC1C2880)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERCONNECTFAIL_OFFSET UNITYSDK_OFFSET(0xC1C2970)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xC1C2B50)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONMULTIPLAYERSERVERSTOPPED_OFFSET UNITYSDK_OFFSET(0xC1C2C50)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONONGENERALRSP_OFFSET UNITYSDK_OFFSET(0xC1C2DD0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONTICKPSNOTIFYPREMIUMFEATURE_OFFSET UNITYSDK_OFFSET(0xC1C3100)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1C34E0)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC1C3460)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC1C3550)
#define RPG_CLIENT_MULTIPLAYERGAMEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC1C34F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiplayerGameModule_TypeDefinitionIndex = 62003;

	class MultiplayerGameModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::Single TimerInterval; // 0x0
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _ContinuePromise; // 0x10
		::RPG::Client::Promises::Promise* _GiveUpPromise; // 0x18
		::System::Action_1<::System::Boolean>* _ContinueGameCallback; // 0x20
		::System::Collections::Generic::Dictionary_2<::Enum_3_A35B38E5F9115A76_2, ::Class_0_16E4307DCC419505_818*>* _HandlerByModes; // 0x28
		::Class_1_6A9EF6A57FAD498C* _FightRoom; // 0x30
		::System::UInt64 _FightServerTimeStampMs; // 0x38
		::System::Double _FightServerReceiveTimeMs; // 0x40
		::System::Int32 _TickTimerID; // 0x48
		::System::Boolean _WaitContinueGame; // 0x4C
		::System::Single _RTT; // 0x50

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

		::System::Void TryContinueGame(::System::Action_1<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_TRYCONTINUEGAME_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* ContinueGamePromise()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_CONTINUEGAMEPROMISE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* GiveUpGamePromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_GIVEUPGAMEPROMISE_OFFSET))(this);
		}

		::System::Void RegisterMultiplayerGame(::Class_0_16E4307DCC419505_818* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_818*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_REGISTERMULTIPLAYERGAME_OFFSET))(this, a1);
		}

		::System::Void UnregisterMultiplayerGame(::Class_0_16E4307DCC419505_818* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_818*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_UNREGISTERMULTIPLAYERGAME_OFFSET))(this, a1);
		}

		::Class_1_6A9EF6A57FAD498C* GetFightRoom()
		{
			return ((::Class_1_6A9EF6A57FAD498C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE_GETFIGHTROOM_OFFSET))(this);
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

		::System::Void _OnFightGameStartScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGAMESTARTSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFightGameStateScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGAMESTATESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFightGiveUpScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTGIVEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_818* _GetHandlerByMode(::Enum_3_A35B38E5F9115A76_2 a1)
		{
			return ((::Class_0_16E4307DCC419505_818*(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__GETHANDLERBYMODE_OFFSET))(this, a1);
		}

		::System::Void _CreateGame(::Class_1_FBDFBC4C2F16CDD1* a1, ::System::Collections::Generic::IList_1<::Class_1_C50F5982E5600913*>* a2, ::Class_1_E7DB216A3FFF6C29_1* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FBDFBC4C2F16CDD1*, ::System::Collections::Generic::IList_1<::Class_1_C50F5982E5600913*>*, ::Class_1_E7DB216A3FFF6C29_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__CREATEGAME_OFFSET))(this, a1, a2, a3);
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

		::System::Void _OnOnGeneralRsp(::System::UInt32 a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONONGENERALRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGeneralNotify(::System::UInt32 a1, ::Google::Protobuf::ByteString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONGENERALNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFightHeartBeatScRsp(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__ONFIGHTHEARTBEATSCRSP_OFFSET))(this, a1, a2);
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

		::System::Void _InvokeContinueGameCallback(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERGAMEMODULE__INVOKECONTINUEGAMECALLBACK_OFFSET))(this, a1);
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
