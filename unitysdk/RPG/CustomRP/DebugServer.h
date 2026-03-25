#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DebugServer_State.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::CustomRP { class IRPMessage; }
namespace RPG::CustomRP { class IRPMsgCb; }
namespace RPG::CustomRP { class MessageThread; }
namespace RPG::CustomRP { class MsgCallback; }
namespace RPG::CustomRP { class ServerBroadcaster; }
namespace System { class Action; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Net::Sockets { class TcpListener; }
namespace UnityEngine { class GameObject; }

#define RPG_CUSTOMRP_DEBUGSERVER_ADDDEBUGSERVER_OFFSET UNITYSDK_OFFSET(0x16A74B70)
#define RPG_CUSTOMRP_DEBUGSERVER_ENQUEUECB_OFFSET UNITYSDK_OFFSET(0x16A93CD0)
#define RPG_CUSTOMRP_DEBUGSERVER_ENQUEUEMESSAGE_OFFSET UNITYSDK_OFFSET(0x16A93CA0)
#define RPG_CUSTOMRP_DEBUGSERVER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x16A93140)
#define RPG_CUSTOMRP_DEBUGSERVER_GET_OFFSET UNITYSDK_OFFSET(0x16A93180)
#define RPG_CUSTOMRP_DEBUGSERVER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x16A93BD0)
#define RPG_CUSTOMRP_DEBUGSERVER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16A93780)
#define RPG_CUSTOMRP_DEBUGSERVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16A93400)
#define RPG_CUSTOMRP_DEBUGSERVER_RELEASE_OFFSET UNITYSDK_OFFSET(0x16A93270)
#define RPG_CUSTOMRP_DEBUGSERVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16A938B0)
#define RPG_CUSTOMRP_DEBUGSERVER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A94700)
#define RPG_CUSTOMRP_DEBUGSERVER__ONCONNECTED_OFFSET UNITYSDK_OFFSET(0x16A942B0)
#define RPG_CUSTOMRP_DEBUGSERVER__ONCONNECTING_OFFSET UNITYSDK_OFFSET(0x16A93E10)
#define RPG_CUSTOMRP_DEBUGSERVER__ONDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x16A94680)
#define RPG_CUSTOMRP_DEBUGSERVER__ONWAITING_OFFSET UNITYSDK_OFFSET(0x16A93D60)
#define RPG_CUSTOMRP_DEBUGSERVER__SETSTATE_OFFSET UNITYSDK_OFFSET(0x16A93D50)
#define RPG_CUSTOMRP_DEBUGSERVER__STARTLISTENING_OFFSET UNITYSDK_OFFSET(0x16A935E0)
#define RPG_CUSTOMRP_DEBUGSERVER__STOP_OFFSET UNITYSDK_OFFSET(0x16A93840)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugServer_TypeDefinitionIndex = 29520;

	class DebugServer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::CustomRP::DebugServer** StaticGet_s_instance()
		{
			return (::RPG::CustomRP::DebugServer**)Il2CppClass::FromTypeDefinitionIndex(DebugServer_TypeDefinitionIndex)->GetStaticField(0x30C30);
		}
		::RPG::CustomRP::DebugServer_State _state; // 0x18
		::Il2CppArray<::System::Action*>* _stateDelegates; // 0x20
		::RPG::CustomRP::ServerBroadcaster* _broadcaster; // 0x28
		::System::Net::Sockets::TcpListener* _listener; // 0x30
		::System::Net::Sockets::TcpClient* _client; // 0x38
		::System::IAsyncResult* _currentAsyncResult; // 0x40
		::RPG::CustomRP::MessageThread* _msgThread; // 0x48
		::RPG::CustomRP::MsgCallback* _msgCb; // 0x50
		::Il2CppArray<::System::Collections::Generic::Queue_1<::RPG::CustomRP::IRPMsgCb*>*>* _msgUpdate; // 0x58
		::System::Int32 _UpdateQueueIndex; // 0x60
		::System::Int32 _serverport; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER__CTOR_OFFSET))(this);
		}

		static ::RPG::CustomRP::DebugServer* get_Instance()
		{
			return ((::RPG::CustomRP::DebugServer*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_GET_INSTANCE_OFFSET))();
		}

		static ::RPG::CustomRP::MsgCallback* AddDebugServer(::UnityEngine::GameObject* go)
		{
			return ((::RPG::CustomRP::MsgCallback*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_ADDDEBUGSERVER_OFFSET))(go);
		}

		::RPG::CustomRP::IRPMessage* Get(::System::String* type)
		{
			return ((::RPG::CustomRP::IRPMessage*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_GET_OFFSET))(this, type);
		}

		::System::Void Release(::RPG::CustomRP::IRPMessage* msg)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_RELEASE_OFFSET))(this, msg);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_UPDATE_OFFSET))(this);
		}

		::System::Void OnApplicationPause(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_ONAPPLICATIONPAUSE_OFFSET))(this, pause);
		}

		::System::Void EnqueueMessage(::RPG::CustomRP::IRPMessage* msg)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_ENQUEUEMESSAGE_OFFSET))(this, msg);
		}

		::System::Void EnqueueCb(::RPG::CustomRP::IRPMsgCb* cb)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMsgCb*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER_ENQUEUECB_OFFSET))(this, cb);
		}

		::System::Void _SetState(::RPG::CustomRP::DebugServer_State state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::DebugServer_State))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER__SETSTATE_OFFSET))(this, state);
		}

		::System::Void _StartListening()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER__STARTLISTENING_OFFSET))(this);
		}

		::System::Void _Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER__STOP_OFFSET))(this);
		}

		::System::Void _OnWaiting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER__ONWAITING_OFFSET))(this);
		}

		::System::Void _OnConnecting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER__ONCONNECTING_OFFSET))(this);
		}

		::System::Void _OnConnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER__ONCONNECTED_OFFSET))(this);
		}

		::System::Void _OnDisconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSERVER__ONDISCONNECTED_OFFSET))(this);
		}
	};
}
