#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKHttpDnsService___c__DisplayClass5_1; }
namespace MiHoYo::SDK { class HoYoSDKNetworkNative_HttpResponse; }

#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE___C__DISPLAYCLASS5_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6EE5E0)
#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE___C__DISPLAYCLASS5_2__REQUESTHOSTADDR_B__4_OFFSET UNITYSDK_OFFSET(0x1C6EE9B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKHttpDnsService___c__DisplayClass5_2_TypeDefinitionIndex = 46556;

	class HoYoSDKHttpDnsService___c__DisplayClass5_2 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoSDKNetworkNative_HttpResponse* result; // 0x10
		::MiHoYo::SDK::HoYoSDKHttpDnsService___c__DisplayClass5_1* CS___8__locals2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE___C__DISPLAYCLASS5_2__CTOR_OFFSET))(this);
		}

		::System::Void _RequestHostAddr_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE___C__DISPLAYCLASS5_2__REQUESTHOSTADDR_B__4_OFFSET))(this);
		}
	};
}
