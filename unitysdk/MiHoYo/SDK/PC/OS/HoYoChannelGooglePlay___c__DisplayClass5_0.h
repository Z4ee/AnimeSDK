#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelGooglePlay; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175A8A30)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS5_0__GETPRODUCTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x175ADD40)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c__DisplayClass5_0_TypeDefinitionIndex = 7530;

	class HoYoChannelGooglePlay___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::HoYoChannelGooglePlay* __4__this; // 0x10
		::MiHoYo::SDK::JSONArray* productArray; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetProductList_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS5_0__GETPRODUCTLIST_B__0_OFFSET))(this, response);
		}
	};
}
