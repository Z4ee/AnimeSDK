#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_NETUTIL_HTTPRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C9D530)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetUtil_HttpResponse_TypeDefinitionIndex = 19050;

	class NetUtil_HttpResponse : public ::System::Object
	{
	public:
		::System::String* response; // 0x10
		::System::String* header_response; // 0x18
		::System::Int32 http_code; // 0x20
		::System::Int32 error_code; // 0x24
		::System::String* error_msg; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL_HTTPRESPONSE__CTOR_OFFSET))(this);
		}
	};
}
