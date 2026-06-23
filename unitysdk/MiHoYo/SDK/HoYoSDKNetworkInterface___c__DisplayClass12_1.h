#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkInterface___c__DisplayClass12_0; }
namespace System { class Action; }

#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C729D90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkInterface___c__DisplayClass12_1_TypeDefinitionIndex = 36497;

	class HoYoSDKNetworkInterface___c__DisplayClass12_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoSDKNetworkInterface___c__DisplayClass12_0* CS___8__locals1; // 0x10
		::System::Action* timeoutCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_1__CTOR_OFFSET))(this);
		}
	};
}
