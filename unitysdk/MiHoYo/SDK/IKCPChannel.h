#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/KCPErrorCode.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::IO { class MemoryStream; }
namespace System::Net { class IPEndPoint; }

#define MIHOYO_SDK_IKCPCHANNEL_ADD_CONNECTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA17B4E0)
#define MIHOYO_SDK_IKCPCHANNEL_ADD_DISCONNECTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA17B5A0)
#define MIHOYO_SDK_IKCPCHANNEL_ADD_ERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0xA17B660)
#define MIHOYO_SDK_IKCPCHANNEL_ADD_LOGCALLBACK_OFFSET UNITYSDK_OFFSET(0xA17B720)
#define MIHOYO_SDK_IKCPCHANNEL_ADD_READCALLBACK_OFFSET UNITYSDK_OFFSET(0xA17B7A0)
#define MIHOYO_SDK_IKCPCHANNEL_ADD_TIMEOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA17B860)
#define MIHOYO_SDK_IKCPCHANNEL_ADD_TIMEOUTRECVMSGCALLBACK_OFFSET UNITYSDK_OFFSET(0xA17B8E0)
#define MIHOYO_SDK_IKCPCHANNEL_GET_ERROR_OFFSET UNITYSDK_OFFSET(0xA17B4A0)
#define MIHOYO_SDK_IKCPCHANNEL_GET_REMOTEADDRESS_OFFSET UNITYSDK_OFFSET(0xA17B4C0)
#define MIHOYO_SDK_IKCPCHANNEL_ONCONNECTTIMEOUT_OFFSET UNITYSDK_OFFSET(0xA17B960)
#define MIHOYO_SDK_IKCPCHANNEL_ONCONNECT_OFFSET UNITYSDK_OFFSET(0xA17BA10)
#define MIHOYO_SDK_IKCPCHANNEL_ONDISCONNECT_OFFSET UNITYSDK_OFFSET(0xA17BB30)
#define MIHOYO_SDK_IKCPCHANNEL_ONERROR_OFFSET UNITYSDK_OFFSET(0xA17BC30)
#define MIHOYO_SDK_IKCPCHANNEL_ONLOG_OFFSET UNITYSDK_OFFSET(0xA17B9D0)
#define MIHOYO_SDK_IKCPCHANNEL_ONREAD_OFFSET UNITYSDK_OFFSET(0xA17BC10)
#define MIHOYO_SDK_IKCPCHANNEL_ONRECVMSGTIMEOUT_OFFSET UNITYSDK_OFFSET(0xA17B9F0)
#define MIHOYO_SDK_IKCPCHANNEL_REMOVE_CONNECTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA17B540)
#define MIHOYO_SDK_IKCPCHANNEL_REMOVE_DISCONNECTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA17B600)
#define MIHOYO_SDK_IKCPCHANNEL_REMOVE_ERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0xA17B6C0)
#define MIHOYO_SDK_IKCPCHANNEL_REMOVE_LOGCALLBACK_OFFSET UNITYSDK_OFFSET(0xA17B760)
#define MIHOYO_SDK_IKCPCHANNEL_REMOVE_READCALLBACK_OFFSET UNITYSDK_OFFSET(0xA17B800)
#define MIHOYO_SDK_IKCPCHANNEL_REMOVE_TIMEOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA17B8A0)
#define MIHOYO_SDK_IKCPCHANNEL_REMOVE_TIMEOUTRECVMSGCALLBACK_OFFSET UNITYSDK_OFFSET(0xA17B920)
#define MIHOYO_SDK_IKCPCHANNEL_SET_ERROR_OFFSET UNITYSDK_OFFSET(0xA17B4B0)
#define MIHOYO_SDK_IKCPCHANNEL_SET_REMOTEADDRESS_OFFSET UNITYSDK_OFFSET(0xA17B4D0)
#define MIHOYO_SDK_IKCPCHANNEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA17BC50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int IKCPChannel_TypeDefinitionIndex = 43531;

	class IKCPChannel : public ::System::Object
	{
	public:
		::System::Action* timeoutRecvMsgCallback; // 0x10
		::System::Action* timeoutCallback; // 0x18
		::System::Action_2<::MiHoYo::SDK::KCPErrorCode, ::System::String*>* errorCallback; // 0x20
		::System::Action_1<::System::IO::MemoryStream*>* readCallback; // 0x28
		::System::Action_1<::MiHoYo::SDK::IKCPChannel*>* disconnectCallback; // 0x30
		::System::Action_2<::MiHoYo::SDK::IKCPChannel*, ::System::Int32>* connectCallback; // 0x38
		::System::Net::IPEndPoint* _RemoteAddress_k__BackingField; // 0x40
		::System::Action_2<::System::Int32, ::System::String*>* logCallback; // 0x48
		::MiHoYo::SDK::KCPErrorCode _Error_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::KCPErrorCode get_Error()
		{
			return ((::MiHoYo::SDK::KCPErrorCode(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_GET_ERROR_OFFSET))(this);
		}

		::System::Void set_Error(::MiHoYo::SDK::KCPErrorCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KCPErrorCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_SET_ERROR_OFFSET))(this, a1);
		}

		::System::Net::IPEndPoint* get_RemoteAddress()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_GET_REMOTEADDRESS_OFFSET))(this);
		}

		::System::Void set_RemoteAddress(::System::Net::IPEndPoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_SET_REMOTEADDRESS_OFFSET))(this, a1);
		}

		::System::Void add_ConnectCallback(::System::Action_2<::MiHoYo::SDK::IKCPChannel*, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::IKCPChannel*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ADD_CONNECTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_ConnectCallback(::System::Action_2<::MiHoYo::SDK::IKCPChannel*, ::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::IKCPChannel*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_REMOVE_CONNECTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void add_DisconnectCallback(::System::Action_1<::MiHoYo::SDK::IKCPChannel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::IKCPChannel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ADD_DISCONNECTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_DisconnectCallback(::System::Action_1<::MiHoYo::SDK::IKCPChannel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::IKCPChannel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_REMOVE_DISCONNECTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void add_ErrorCallback(::System::Action_2<::MiHoYo::SDK::KCPErrorCode, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::KCPErrorCode, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ADD_ERRORCALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_ErrorCallback(::System::Action_2<::MiHoYo::SDK::KCPErrorCode, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::KCPErrorCode, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_REMOVE_ERRORCALLBACK_OFFSET))(this, a1);
		}

		::System::Void add_LogCallback(::System::Action_2<::System::Int32, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ADD_LOGCALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_LogCallback(::System::Action_2<::System::Int32, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_REMOVE_LOGCALLBACK_OFFSET))(this, a1);
		}

		::System::Void add_ReadCallback(::System::Action_1<::System::IO::MemoryStream*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::IO::MemoryStream*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ADD_READCALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_ReadCallback(::System::Action_1<::System::IO::MemoryStream*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::IO::MemoryStream*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_REMOVE_READCALLBACK_OFFSET))(this, a1);
		}

		::System::Void add_TimeoutCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ADD_TIMEOUTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_TimeoutCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_REMOVE_TIMEOUTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void add_TimeoutRecvMsgCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ADD_TIMEOUTRECVMSGCALLBACK_OFFSET))(this, a1);
		}

		::System::Void remove_TimeoutRecvMsgCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_REMOVE_TIMEOUTRECVMSGCALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnConnectTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ONCONNECTTIMEOUT_OFFSET))(this);
		}

		::System::Void OnRecvMsgTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ONRECVMSGTIMEOUT_OFFSET))(this);
		}

		::System::Void OnConnect(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ONCONNECT_OFFSET))(this, a1);
		}

		::System::Void OnDisconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ONDISCONNECT_OFFSET))(this);
		}

		::System::Void OnRead(::System::IO::MemoryStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ONREAD_OFFSET))(this, a1);
		}

		::System::Void OnError(::MiHoYo::SDK::KCPErrorCode a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KCPErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ONERROR_OFFSET))(this, a1, a2);
		}

		::System::Void OnLog(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ONLOG_OFFSET))(this, a1, a2);
		}
	};
}
