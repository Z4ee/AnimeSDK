#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/IKCPClient.h"
#include "unitysdk/MiHoYo/SDK/KCPErrorCode.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_AuthInfo.h"

namespace MiHoYo::SDK { class IKCPChannel; }
namespace MiHoYo::SDK { class KCPClient_OnConnectDelegate; }
namespace MiHoYo::SDK { class KCPClient_OnDisconnetDelegate; }
namespace MiHoYo::SDK { class KCPClient_OnErrorDelegate; }
namespace MiHoYo::SDK { class KCPClient_OnLogDelegate; }
namespace MiHoYo::SDK { class KCPClient_OnTimeoutDelegate; }
namespace System { class String; }
namespace System::Net { class EndPoint; }
namespace System::Net { class IPEndPoint; }
namespace System::Net::Sockets { class Socket; }

#define MIHOYO_SDK_KCPCLIENT_CONNECTCHANNEL_1_OFFSET UNITYSDK_OFFSET(0x84F1290)
#define MIHOYO_SDK_KCPCLIENT_CONNECTCHANNEL_OFFSET UNITYSDK_OFFSET(0x84F7540)
#define MIHOYO_SDK_KCPCLIENT_CREATENEWINSTANCE_OFFSET UNITYSDK_OFFSET(0x84F1240)
#define MIHOYO_SDK_KCPCLIENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x84F2E90)
#define MIHOYO_SDK_KCPCLIENT_GETCHANNEL_OFFSET UNITYSDK_OFFSET(0x84F5ED0)
#define MIHOYO_SDK_KCPCLIENT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x84F5BA0)
#define MIHOYO_SDK_KCPCLIENT_ONINTERNALCONNECTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x84F6A60)
#define MIHOYO_SDK_KCPCLIENT_ONINTERNALCONNECT_OFFSET UNITYSDK_OFFSET(0x84F5EE0)
#define MIHOYO_SDK_KCPCLIENT_ONINTERNALDISCONNECT_OFFSET UNITYSDK_OFFSET(0x84F64B0)
#define MIHOYO_SDK_KCPCLIENT_ONINTERNALERROR_OFFSET UNITYSDK_OFFSET(0x84F6DC0)
#define MIHOYO_SDK_KCPCLIENT_ONINTERNALLOG_OFFSET UNITYSDK_OFFSET(0x84F7180)
#define MIHOYO_SDK_KCPCLIENT_ONINTERNALRECVMSGTIMEOUT_OFFSET UNITYSDK_OFFSET(0x84F6D60)
#define MIHOYO_SDK_KCPCLIENT_OUTPUT_OFFSET UNITYSDK_OFFSET(0x84F5930)
#define MIHOYO_SDK_KCPCLIENT_RECV_OFFSET UNITYSDK_OFFSET(0x84F5D90)
#define MIHOYO_SDK_KCPCLIENT_SEND_OFFSET UNITYSDK_OFFSET(0x84F2AC0)
#define MIHOYO_SDK_KCPCLIENT_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x84F5BE0)
#define MIHOYO_SDK_KCPCLIENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x84F2DC0)
#define MIHOYO_SDK_KCPCLIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x84F5C20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KCPClient_TypeDefinitionIndex = 36906;

	class KCPClient : public ::MiHoYo::SDK::IKCPClient
	{
	public:
		static ::MiHoYo::SDK::KCPClient** StaticGet__Instance_k__BackingField()
		{
			return (::MiHoYo::SDK::KCPClient**)Il2CppClass::FromTypeDefinitionIndex(KCPClient_TypeDefinitionIndex)->GetStaticField(0x10150);
		}
		static ::MiHoYo::SDK::KCPClient_OnConnectDelegate** StaticGet_OnConnect()
		{
			return (::MiHoYo::SDK::KCPClient_OnConnectDelegate**)Il2CppClass::FromTypeDefinitionIndex(KCPClient_TypeDefinitionIndex)->GetStaticField(0x10158);
		}
		static ::MiHoYo::SDK::KCPClient_OnTimeoutDelegate** StaticGet_OnConnectTimeout()
		{
			return (::MiHoYo::SDK::KCPClient_OnTimeoutDelegate**)Il2CppClass::FromTypeDefinitionIndex(KCPClient_TypeDefinitionIndex)->GetStaticField(0x10160);
		}
		static ::MiHoYo::SDK::KCPClient_OnLogDelegate** StaticGet_OnLog()
		{
			return (::MiHoYo::SDK::KCPClient_OnLogDelegate**)Il2CppClass::FromTypeDefinitionIndex(KCPClient_TypeDefinitionIndex)->GetStaticField(0x10168);
		}
		static ::MiHoYo::SDK::KCPClient_OnDisconnetDelegate** StaticGet_OnDisconnet()
		{
			return (::MiHoYo::SDK::KCPClient_OnDisconnetDelegate**)Il2CppClass::FromTypeDefinitionIndex(KCPClient_TypeDefinitionIndex)->GetStaticField(0x10170);
		}
		static ::MiHoYo::SDK::KCPClient_OnTimeoutDelegate** StaticGet_OnRecvMsgTimeout()
		{
			return (::MiHoYo::SDK::KCPClient_OnTimeoutDelegate**)Il2CppClass::FromTypeDefinitionIndex(KCPClient_TypeDefinitionIndex)->GetStaticField(0x10178);
		}
		static ::MiHoYo::SDK::KCPClient_OnErrorDelegate** StaticGet_OnError()
		{
			return (::MiHoYo::SDK::KCPClient_OnErrorDelegate**)Il2CppClass::FromTypeDefinitionIndex(KCPClient_TypeDefinitionIndex)->GetStaticField(0x10180);
		}
		::MiHoYo::SDK::IKCPChannel* channel; // 0x10
		::System::Net::EndPoint* m_ipEndPoint; // 0x18
		::Il2CppArray<::System::Byte>* cache; // 0x20
		::System::Net::Sockets::Socket* socket; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT__CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::KCPClient* get_Instance()
		{
			return ((::MiHoYo::SDK::KCPClient*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::MiHoYo::SDK::KCPClient* value)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::KCPClient*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_SET_INSTANCE_OFFSET))(value);
		}

		static ::MiHoYo::SDK::KCPClient* CreateNewInstance()
		{
			return ((::MiHoYo::SDK::KCPClient*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_CREATENEWINSTANCE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Recv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_RECV_OFFSET))(this);
		}

		::MiHoYo::SDK::IKCPChannel* GetChannel()
		{
			return ((::MiHoYo::SDK::IKCPChannel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_GETCHANNEL_OFFSET))(this);
		}

		static ::System::Void Output(::System::IntPtr bytes, ::System::Int32 count, ::System::IntPtr user)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_OUTPUT_OFFSET))(bytes, count, user);
		}

		::System::Void OnInternalConnect(::MiHoYo::SDK::IKCPChannel* channel, ::System::Int32 nCode)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::IKCPChannel*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONINTERNALCONNECT_OFFSET))(this, channel, nCode);
		}

		::System::Void OnInternalDisconnect(::MiHoYo::SDK::IKCPChannel* channel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::IKCPChannel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONINTERNALDISCONNECT_OFFSET))(this, channel);
		}

		::System::Void OnInternalConnectTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONINTERNALCONNECTTIMEOUT_OFFSET))(this);
		}

		::System::Void OnInternalRecvMsgTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONINTERNALRECVMSGTIMEOUT_OFFSET))(this);
		}

		::System::Void OnInternalError(::MiHoYo::SDK::KCPErrorCode eErrCode, ::System::String* strErrMsg)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KCPErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONINTERNALERROR_OFFSET))(this, eErrCode, strErrMsg);
		}

		::System::Void OnInternalLog(::System::Int32 nLogLevel, ::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_ONINTERNALLOG_OFFSET))(this, nLogLevel, strMsg);
		}

		::MiHoYo::SDK::IKCPChannel* ConnectChannel(::System::Net::IPEndPoint* remoteEndPoint, ::MiHoYo::SDK::SecurityTunnel_AuthInfo authInfo)
		{
			return ((::MiHoYo::SDK::IKCPChannel*(*)(::PVOID, ::System::Net::IPEndPoint*, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_CONNECTCHANNEL_OFFSET))(this, remoteEndPoint, authInfo);
		}

		::MiHoYo::SDK::IKCPChannel* ConnectChannel_1(::System::String* strHost, ::System::UInt16 nPort, ::MiHoYo::SDK::SecurityTunnel_AuthInfo authInfo)
		{
			return ((::MiHoYo::SDK::IKCPChannel*(*)(::PVOID, ::System::String*, ::System::UInt16, ::MiHoYo::SDK::SecurityTunnel_AuthInfo))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_CONNECTCHANNEL_1_OFFSET))(this, strHost, nPort, authInfo);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_UPDATE_OFFSET))(this);
		}

		::System::Void Send(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPCLIENT_SEND_OFFSET))(this, buffer, length);
		}
	};
}
