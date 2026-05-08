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

#define MIHOYO_SDK_IKCPCHANNEL_ADD_CONNECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A879740)
#define MIHOYO_SDK_IKCPCHANNEL_ADD_DISCONNECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A879820)
#define MIHOYO_SDK_IKCPCHANNEL_ADD_ERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A879900)
#define MIHOYO_SDK_IKCPCHANNEL_ADD_LOGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A8799E0)
#define MIHOYO_SDK_IKCPCHANNEL_ADD_READCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A879AC0)
#define MIHOYO_SDK_IKCPCHANNEL_ADD_TIMEOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A879BA0)
#define MIHOYO_SDK_IKCPCHANNEL_ADD_TIMEOUTRECVMSGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A879C80)
#define MIHOYO_SDK_IKCPCHANNEL_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1A879700)
#define MIHOYO_SDK_IKCPCHANNEL_GET_REMOTEADDRESS_OFFSET UNITYSDK_OFFSET(0x1A879720)
#define MIHOYO_SDK_IKCPCHANNEL_ONCONNECTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A879D60)
#define MIHOYO_SDK_IKCPCHANNEL_ONCONNECT_OFFSET UNITYSDK_OFFSET(0x1A879E70)
#define MIHOYO_SDK_IKCPCHANNEL_ONDISCONNECT_OFFSET UNITYSDK_OFFSET(0x1A879F50)
#define MIHOYO_SDK_IKCPCHANNEL_ONERROR_OFFSET UNITYSDK_OFFSET(0x1A87A030)
#define MIHOYO_SDK_IKCPCHANNEL_ONLOG_OFFSET UNITYSDK_OFFSET(0x1A879E00)
#define MIHOYO_SDK_IKCPCHANNEL_ONREAD_OFFSET UNITYSDK_OFFSET(0x1A879FD0)
#define MIHOYO_SDK_IKCPCHANNEL_ONRECVMSGTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A879E60)
#define MIHOYO_SDK_IKCPCHANNEL_REMOVE_CONNECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A8797B0)
#define MIHOYO_SDK_IKCPCHANNEL_REMOVE_DISCONNECTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A879890)
#define MIHOYO_SDK_IKCPCHANNEL_REMOVE_ERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A879970)
#define MIHOYO_SDK_IKCPCHANNEL_REMOVE_LOGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A879A50)
#define MIHOYO_SDK_IKCPCHANNEL_REMOVE_READCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A879B30)
#define MIHOYO_SDK_IKCPCHANNEL_REMOVE_TIMEOUTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A879C10)
#define MIHOYO_SDK_IKCPCHANNEL_REMOVE_TIMEOUTRECVMSGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A879CF0)
#define MIHOYO_SDK_IKCPCHANNEL_SET_ERROR_OFFSET UNITYSDK_OFFSET(0x1A879710)
#define MIHOYO_SDK_IKCPCHANNEL_SET_REMOTEADDRESS_OFFSET UNITYSDK_OFFSET(0x1A879730)
#define MIHOYO_SDK_IKCPCHANNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A87A0A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int IKCPChannel_TypeDefinitionIndex = 34946;

	class IKCPChannel : public ::System::Object
	{
	public:
		::System::Action_2<::MiHoYo::SDK::KCPErrorCode, ::System::String*>* errorCallback; // 0x10
		::System::Action_1<::System::IO::MemoryStream*>* readCallback; // 0x18
		::System::Action_2<::System::Int32, ::System::String*>* logCallback; // 0x20
		::System::Net::IPEndPoint* _RemoteAddress_k__BackingField; // 0x28
		::System::Action_2<::MiHoYo::SDK::IKCPChannel*, ::System::Int32>* connectCallback; // 0x30
		::System::Action* timeoutRecvMsgCallback; // 0x38
		::System::Action_1<::MiHoYo::SDK::IKCPChannel*>* disconnectCallback; // 0x40
		::System::Action* timeoutCallback; // 0x48
		::MiHoYo::SDK::KCPErrorCode _Error_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::KCPErrorCode get_Error()
		{
			return ((::MiHoYo::SDK::KCPErrorCode(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_GET_ERROR_OFFSET))(this);
		}

		::System::Void set_Error(::MiHoYo::SDK::KCPErrorCode value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KCPErrorCode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_SET_ERROR_OFFSET))(this, value);
		}

		::System::Net::IPEndPoint* get_RemoteAddress()
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_GET_REMOTEADDRESS_OFFSET))(this);
		}

		::System::Void set_RemoteAddress(::System::Net::IPEndPoint* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::IPEndPoint*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_SET_REMOTEADDRESS_OFFSET))(this, value);
		}

		::System::Void add_ConnectCallback(::System::Action_2<::MiHoYo::SDK::IKCPChannel*, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::IKCPChannel*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ADD_CONNECTCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_ConnectCallback(::System::Action_2<::MiHoYo::SDK::IKCPChannel*, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::IKCPChannel*, ::System::Int32>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_REMOVE_CONNECTCALLBACK_OFFSET))(this, value);
		}

		::System::Void add_DisconnectCallback(::System::Action_1<::MiHoYo::SDK::IKCPChannel*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::IKCPChannel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ADD_DISCONNECTCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_DisconnectCallback(::System::Action_1<::MiHoYo::SDK::IKCPChannel*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::IKCPChannel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_REMOVE_DISCONNECTCALLBACK_OFFSET))(this, value);
		}

		::System::Void add_ErrorCallback(::System::Action_2<::MiHoYo::SDK::KCPErrorCode, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::KCPErrorCode, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ADD_ERRORCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_ErrorCallback(::System::Action_2<::MiHoYo::SDK::KCPErrorCode, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::MiHoYo::SDK::KCPErrorCode, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_REMOVE_ERRORCALLBACK_OFFSET))(this, value);
		}

		::System::Void add_LogCallback(::System::Action_2<::System::Int32, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ADD_LOGCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_LogCallback(::System::Action_2<::System::Int32, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_REMOVE_LOGCALLBACK_OFFSET))(this, value);
		}

		::System::Void add_ReadCallback(::System::Action_1<::System::IO::MemoryStream*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::IO::MemoryStream*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ADD_READCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_ReadCallback(::System::Action_1<::System::IO::MemoryStream*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::IO::MemoryStream*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_REMOVE_READCALLBACK_OFFSET))(this, value);
		}

		::System::Void add_TimeoutCallback(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ADD_TIMEOUTCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_TimeoutCallback(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_REMOVE_TIMEOUTCALLBACK_OFFSET))(this, value);
		}

		::System::Void add_TimeoutRecvMsgCallback(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ADD_TIMEOUTRECVMSGCALLBACK_OFFSET))(this, value);
		}

		::System::Void remove_TimeoutRecvMsgCallback(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_REMOVE_TIMEOUTRECVMSGCALLBACK_OFFSET))(this, value);
		}

		::System::Void OnConnectTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ONCONNECTTIMEOUT_OFFSET))(this);
		}

		::System::Void OnRecvMsgTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ONRECVMSGTIMEOUT_OFFSET))(this);
		}

		::System::Void OnConnect(::System::Int32 code)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ONCONNECT_OFFSET))(this, code);
		}

		::System::Void OnDisconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ONDISCONNECT_OFFSET))(this);
		}

		::System::Void OnRead(::System::IO::MemoryStream* memoryStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ONREAD_OFFSET))(this, memoryStream);
		}

		::System::Void OnError(::MiHoYo::SDK::KCPErrorCode eErrorCode, ::System::String* strErrMsg)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::KCPErrorCode, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ONERROR_OFFSET))(this, eErrorCode, strErrMsg);
		}

		::System::Void OnLog(::System::Int32 nLogLevel, ::System::String* strMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IKCPCHANNEL_ONLOG_OFFSET))(this, nLogLevel, strMsg);
		}
	};
}
