#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Platform/InitializeThreadAffinityInternal.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_GET_HTTPREQUESTIO_OFFSET UNITYSDK_OFFSET(0x1C53E0C0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_GET_NETWORKWORK_OFFSET UNITYSDK_OFFSET(0x1C53E040)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_GET_P2PIO_OFFSET UNITYSDK_OFFSET(0x1C53E0A0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_GET_STORAGEIO_OFFSET UNITYSDK_OFFSET(0x1C53E060)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_GET_WEBSOCKETIO_OFFSET UNITYSDK_OFFSET(0x1C53E080)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_1_OFFSET UNITYSDK_OFFSET(0x1C53E220)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_HTTPREQUESTIO_OFFSET UNITYSDK_OFFSET(0x1C53E0D0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_NETWORKWORK_OFFSET UNITYSDK_OFFSET(0x1C53E050)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_OFFSET UNITYSDK_OFFSET(0x1C53E0E0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_P2PIO_OFFSET UNITYSDK_OFFSET(0x1C53E0B0)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_STORAGEIO_OFFSET UNITYSDK_OFFSET(0x1C53E070)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY_SET_WEBSOCKETIO_OFFSET UNITYSDK_OFFSET(0x1C53E090)
#define EPIC_ONLINESERVICES_PLATFORM_INITIALIZETHREADAFFINITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53E370)

namespace Epic::OnlineServices::Platform
{
	inline static constexpr unsigned int InitializeThreadAffinity_TypeDefinitionIndex = 36349;

	class InitializeThreadAffinity : public ::System::Object
	{
	public:
		::System::UInt64 _WebSocketIo_k__BackingField; // 0x10
		::System::UInt64 _StorageIo_k__BackingField; // 0x18
		::System::UInt64 _P2PIo_k__BackingField; // 0x20
		::System::UInt64 _NetworkWork_k__BackingField; // 0x28
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
