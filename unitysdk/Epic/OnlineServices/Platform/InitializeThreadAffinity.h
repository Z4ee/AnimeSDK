#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Platform/InitializeThreadAffinityInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_GET_HTTPREQUESTIO_OFFSET UNITYSDK_OFFSET(0x8EE8350)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_GET_NETWORKWORK_OFFSET UNITYSDK_OFFSET(0x8EE82D0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_GET_P2PIO_OFFSET UNITYSDK_OFFSET(0x8EE8330)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_GET_STORAGEIO_OFFSET UNITYSDK_OFFSET(0x8EE82F0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_GET_WEBSOCKETIO_OFFSET UNITYSDK_OFFSET(0x8EE8310)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_1_OFFSET UNITYSDK_OFFSET(0x8EE84B0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_HTTPREQUESTIO_OFFSET UNITYSDK_OFFSET(0x8EE8360)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_NETWORKWORK_OFFSET UNITYSDK_OFFSET(0x8EE82E0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_OFFSET UNITYSDK_OFFSET(0x8EE8370)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_P2PIO_OFFSET UNITYSDK_OFFSET(0x8EE8340)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_STORAGEIO_OFFSET UNITYSDK_OFFSET(0x8EE8300)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_WEBSOCKETIO_OFFSET UNITYSDK_OFFSET(0x8EE8320)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY__CTOR_OFFSET UNITYSDK_OFFSET(0x8EE85F0)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int InitializeThreadAffinity_TypeDefinitionIndex = 42567;

	class InitializeThreadAffinity : public ::System::Object
	{
	public:
		::System::UInt64 _P2PIo_k__BackingField; // 0x10
		::System::UInt64 _NetworkWork_k__BackingField; // 0x18
		::System::UInt64 _WebSocketIo_k__BackingField; // 0x20
		::System::UInt64 _StorageIo_k__BackingField; // 0x28
		::System::UInt64 _HttpRequestIo_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY__CTOR_OFFSET))(this);
		}

		::System::UInt64 get_NetworkWork()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_GET_NETWORKWORK_OFFSET))(this);
		}

		::System::Void set_NetworkWork(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_NETWORKWORK_OFFSET))(this, value);
		}

		::System::UInt64 get_StorageIo()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_GET_STORAGEIO_OFFSET))(this);
		}

		::System::Void set_StorageIo(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_STORAGEIO_OFFSET))(this, value);
		}

		::System::UInt64 get_WebSocketIo()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_GET_WEBSOCKETIO_OFFSET))(this);
		}

		::System::Void set_WebSocketIo(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_WEBSOCKETIO_OFFSET))(this, value);
		}

		::System::UInt64 get_P2PIo()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_GET_P2PIO_OFFSET))(this);
		}

		::System::Void set_P2PIo(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_P2PIO_OFFSET))(this, value);
		}

		::System::UInt64 get_HttpRequestIo()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_GET_HTTPREQUESTIO_OFFSET))(this);
		}

		::System::Void set_HttpRequestIo(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_HTTPREQUESTIO_OFFSET))(this, value);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Platform::InitializeThreadAffinityInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_1_OFFSET))(this, other);
		}
	};
}
