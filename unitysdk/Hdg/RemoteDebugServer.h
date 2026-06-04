#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Hdg/RemoteDebugServer_State.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Hdg { class ReadMessageThread; }
namespace Hdg { class ServerBroadcaster; }
namespace Hdg { class WriteMessageThread; }
namespace Hdg { class rdtDispatcher; }
namespace Hdg { class rdtSerializerRegistry; }
namespace Hdg { class rdtTcpMessage; }
namespace System { class Action; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Net::Sockets { class TcpListener; }
namespace UnityEngine { class GameObject; }

#define HDG_REMOTEDEBUGSERVER_ADDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA119190)
#define HDG_REMOTEDEBUGSERVER_ADDDONTDESTROYONLOADOBJECT_OFFSET UNITYSDK_OFFSET(0xA119380)
#define HDG_REMOTEDEBUGSERVER_ENQUEUEMESSAGE_OFFSET UNITYSDK_OFFSET(0xA1194C0)
#define HDG_REMOTEDEBUGSERVER_GET_CLIENTIP_OFFSET UNITYSDK_OFFSET(0xA119130)
#define HDG_REMOTEDEBUGSERVER_GET_DONTDESTROYONLOADOBJECTS_OFFSET UNITYSDK_OFFSET(0xA1190E0)
#define HDG_REMOTEDEBUGSERVER_GET_ENABLESERVICE_OFFSET UNITYSDK_OFFSET(0xA118FF0)
#define HDG_REMOTEDEBUGSERVER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA118F90)
#define HDG_REMOTEDEBUGSERVER_GET_SERIALIZERREGISTRY_OFFSET UNITYSDK_OFFSET(0xA1190F0)
#define HDG_REMOTEDEBUGSERVER_INIT_OFFSET UNITYSDK_OFFSET(0xA1196C0)
#define HDG_REMOTEDEBUGSERVER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xA11BF90)
#define HDG_REMOTEDEBUGSERVER_ONCONNECTED_OFFSET UNITYSDK_OFFSET(0xA11B880)
#define HDG_REMOTEDEBUGSERVER_ONCONNECTING_OFFSET UNITYSDK_OFFSET(0xA11B140)
#define HDG_REMOTEDEBUGSERVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA119E10)
#define HDG_REMOTEDEBUGSERVER_ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xA11BDC0)
#define HDG_REMOTEDEBUGSERVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA119A60)
#define HDG_REMOTEDEBUGSERVER_ONLOGMESSAGERECEIVEDTHREADED_OFFSET UNITYSDK_OFFSET(0xA119A00)
#define HDG_REMOTEDEBUGSERVER_ONREADMESSAGE_OFFSET UNITYSDK_OFFSET(0xA11BE70)
#define HDG_REMOTEDEBUGSERVER_ONWAITING_OFFSET UNITYSDK_OFFSET(0xA11B080)
#define HDG_REMOTEDEBUGSERVER_REFRESHDONTDESTROYONLOADOBJECTS_OFFSET UNITYSDK_OFFSET(0xA119500)
#define HDG_REMOTEDEBUGSERVER_REGISTERCALLBACKS_OFFSET UNITYSDK_OFFSET(0xA1198F0)
#define HDG_REMOTEDEBUGSERVER_REMOVEDONTDESTROYONLOADOBJECT_OFFSET UNITYSDK_OFFSET(0xA119440)
#define HDG_REMOTEDEBUGSERVER_SETSTATE_OFFSET UNITYSDK_OFFSET(0xA119EB0)
#define HDG_REMOTEDEBUGSERVER_SET_ENABLESERVICE_OFFSET UNITYSDK_OFFSET(0xA119020)
#define HDG_REMOTEDEBUGSERVER_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xA118FE0)
#define HDG_REMOTEDEBUGSERVER_STARTLISTENING_OFFSET UNITYSDK_OFFSET(0xA11A3B0)
#define HDG_REMOTEDEBUGSERVER_STOPLISTENING_OFFSET UNITYSDK_OFFSET(0xA11A010)
#define HDG_REMOTEDEBUGSERVER_STOP_OFFSET UNITYSDK_OFFSET(0xA11A1C0)
#define HDG_REMOTEDEBUGSERVER_TOGGLEWORLDPAUSED_OFFSET UNITYSDK_OFFSET(0xA1194D0)
#define HDG_REMOTEDEBUGSERVER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA11AF80)
#define HDG_REMOTEDEBUGSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0xA11C120)

namespace Hdg
{
	inline static constexpr unsigned int RemoteDebugServer_TypeDefinitionIndex = 44294;

	class RemoteDebugServer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Hdg::RemoteDebugServer** StaticGet_s_instance()
		{
			return (::Hdg::RemoteDebugServer**)Il2CppClass::FromTypeDefinitionIndex(RemoteDebugServer_TypeDefinitionIndex)->GetStaticField(0x8F00);
		}
		::Hdg::ServerBroadcaster* m_broadcaster; // 0x18
		::System::Boolean m_enableService; // 0x20
		::Hdg::RemoteDebugServer_State m_state; // 0x24
		::System::Net::Sockets::TcpListener* m_listener; // 0x28
		::System::Net::Sockets::TcpClient* m_client; // 0x30
		::System::IAsyncResult* m_currentAsyncResult; // 0x38
		::Il2CppArray<::System::Action*>* m_stateDelegates; // 0x40
		::Hdg::WriteMessageThread* m_writeThread; // 0x48
		::Hdg::ReadMessageThread* m_readThread; // 0x50
		::Hdg::rdtDispatcher* m_dispatcher; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::Hdg::rdtTcpMessage*>*>* m_messageCallbacks; // 0x60
		::Hdg::rdtSerializerRegistry* m_serializerRegistry; // 0x68
		::System::Collections::Generic::List_1<::Hdg::rdtTcpMessage*>* m_messagesToProcess; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* m_dontDestroyOnLoadObjects; // 0x78
		::System::Int32 m_serverport; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER__CTOR_OFFSET))(this);
		}

		static ::Hdg::RemoteDebugServer* get_Instance()
		{
			return ((::Hdg::RemoteDebugServer*(*)())((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::Hdg::RemoteDebugServer* a1)
		{
			return ((::System::Void(*)(::Hdg::RemoteDebugServer*))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_SET_INSTANCE_OFFSET))(a1);
		}

		static ::System::Boolean get_EnableService()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_GET_ENABLESERVICE_OFFSET))();
		}

		static ::System::Void set_EnableService(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_SET_ENABLESERVICE_OFFSET))(a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* get_DontDestroyOnLoadObjects()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_GET_DONTDESTROYONLOADOBJECTS_OFFSET))(this);
		}

		::Hdg::rdtSerializerRegistry* get_SerializerRegistry()
		{
			return ((::Hdg::rdtSerializerRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_GET_SERIALIZERREGISTRY_OFFSET))(this);
		}

		::System::String* get_ClientIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_GET_CLIENTIP_OFFSET))(this);
		}

		::System::Void AddCallback(::System::Type* a1, ::System::Action_1<::Hdg::rdtTcpMessage*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Action_1<::Hdg::rdtTcpMessage*>*))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_ADDCALLBACK_OFFSET))(this, a1, a2);
		}

		static ::System::Void AddDontDestroyOnLoadObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_ADDDONTDESTROYONLOADOBJECT_OFFSET))(a1);
		}

		static ::System::Void RemoveDontDestroyOnLoadObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_REMOVEDONTDESTROYONLOADOBJECT_OFFSET))(a1);
		}

		::System::Void EnqueueMessage(::Hdg::rdtTcpMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessage*))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_ENQUEUEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void ToggleWorldPaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_TOGGLEWORLDPAUSED_OFFSET))(this);
		}

		::System::Void RefreshDontDestroyOnLoadObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_REFRESHDONTDESTROYONLOADOBJECTS_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_INIT_OFFSET))(this);
		}

		::System::Void RegisterCallbacks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_REGISTERCALLBACKS_OFFSET))(this);
		}

		::System::Void OnLogMessageReceivedThreaded(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_ONLOGMESSAGERECEIVEDTHREADED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_ONDISABLE_OFFSET))(this);
		}

		::System::Void SetState(::Hdg::RemoteDebugServer_State a1)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::RemoteDebugServer_State))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_SETSTATE_OFFSET))(this, a1);
		}

		::System::Void StopListening()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_STOPLISTENING_OFFSET))(this);
		}

		::System::Void StartListening()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_STARTLISTENING_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_STOP_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_UPDATE_OFFSET))(this);
		}

		::System::Void OnWaiting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_ONWAITING_OFFSET))(this);
		}

		::System::Void OnConnecting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_ONCONNECTING_OFFSET))(this);
		}

		::System::Void OnConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_ONCONNECTED_OFFSET))(this);
		}

		::System::Void OnDisconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_ONDISCONNECTED_OFFSET))(this);
		}

		::System::Void OnReadMessage(::Hdg::rdtTcpMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Hdg::rdtTcpMessage*))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_ONREADMESSAGE_OFFSET))(this, a1);
		}

		::System::Void OnApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HDG_REMOTEDEBUGSERVER_ONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}
	};
}
