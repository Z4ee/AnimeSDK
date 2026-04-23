#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKHttpDnsService_HttpDnsPersistentObject; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_HTTPDNSPERSISTENTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8D14F20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKHttpDnsService_HttpDnsPersistentInfo_TypeDefinitionIndex = 42704;

	class HoYoSDKHttpDnsService_HttpDnsPersistentInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MiHoYo::SDK::HoYoSDKHttpDnsService_HttpDnsPersistentObject*>* dns; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_HTTPDNSPERSISTENTINFO__CTOR_OFFSET))(this);
		}
	};
}
