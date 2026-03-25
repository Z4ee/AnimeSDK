#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_HTTPDNSRESOLVEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x84E3BE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKHttpDnsService_HttpDnsResolveObject_TypeDefinitionIndex = 36874;

	class HoYoSDKHttpDnsService_HttpDnsResolveObject : public ::System::Object
	{
	public:
		::System::String* host; // 0x10
		::System::String* client_ip; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* ips; // 0x20
		::System::Int32 type; // 0x28
		::System::Int32 ttl; // 0x2C
		::System::Int32 origin_ttl; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_HTTPDNSRESOLVEOBJECT__CTOR_OFFSET))(this);
		}
	};
}
