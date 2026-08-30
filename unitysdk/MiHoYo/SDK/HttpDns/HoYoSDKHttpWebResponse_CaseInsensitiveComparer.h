#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_CASEINSENSITIVECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C6FAD90)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_CASEINSENSITIVECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C6FADB0)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_CASEINSENSITIVECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6FAE60)

namespace MiHoYo::SDK::HttpDns
{
	inline static constexpr unsigned int HoYoSDKHttpWebResponse_CaseInsensitiveComparer_TypeDefinitionIndex = 47158;

	class HoYoSDKHttpWebResponse_CaseInsensitiveComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_CASEINSENSITIVECOMPARER__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_CASEINSENSITIVECOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE_CASEINSENSITIVECOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
