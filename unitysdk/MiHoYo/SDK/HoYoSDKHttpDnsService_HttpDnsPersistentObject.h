#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_HTTPDNSPERSISTENTOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA16CC20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKHttpDnsService_HttpDnsPersistentObject_TypeDefinitionIndex = 43506;

	class HoYoSDKHttpDnsService_HttpDnsPersistentObject : public ::System::Object
	{
	public:
		::System::String* host; // 0x10
		::System::String* ip; // 0x18
		::System::Int64 timestamp; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_HTTPDNSPERSISTENTOBJECT__CTOR_OFFSET))(this);
		}
	};
}
