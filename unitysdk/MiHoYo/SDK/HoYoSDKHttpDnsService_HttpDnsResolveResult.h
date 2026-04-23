#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKHttpDnsService_HttpDnsResolveObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_HTTPDNSRESOLVERESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x8D17430)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKHttpDnsService_HttpDnsResolveResult_TypeDefinitionIndex = 42701;

	class HoYoSDKHttpDnsService_HttpDnsResolveResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MiHoYo::SDK::HoYoSDKHttpDnsService_HttpDnsResolveObject*>* dns; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_HTTPDNSRESOLVERESULT__CTOR_OFFSET))(this);
		}
	};
}
