#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C728DB0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS48_0__ONPRODUCTSCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1C728DC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c__DisplayClass48_0_TypeDefinitionIndex = 36913;

	class HoYoChannelInterface___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::System::String* jsonResponse; // 0x10
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*>* callback; // 0x18
		::System::Int32 resultCode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnProductsCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS48_0__ONPRODUCTSCALLBACK_B__0_OFFSET))(this);
		}
	};
}
