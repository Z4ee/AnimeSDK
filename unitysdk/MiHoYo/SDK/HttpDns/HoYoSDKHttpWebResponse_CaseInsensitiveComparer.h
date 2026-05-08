#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_CASEINSENSITIVECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AD92180)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_CASEINSENSITIVECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AD921A0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_CASEINSENSITIVECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD92240)

namespace MiHoYo::SDK::HttpDns
{
	inline static constexpr unsigned int HoYoSDKHttpWebResponse_CaseInsensitiveComparer_TypeDefinitionIndex = 35467;

	class HoYoSDKHttpWebResponse_CaseInsensitiveComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_CASEINSENSITIVECOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::String* x, ::System::String* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_CASEINSENSITIVECOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::System::String* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_CASEINSENSITIVECOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
