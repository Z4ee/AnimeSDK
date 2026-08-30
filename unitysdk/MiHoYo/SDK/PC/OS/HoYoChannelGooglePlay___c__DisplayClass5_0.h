#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelGooglePlay; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABC9450)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS5_0__GETPRODUCTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1ABCE520)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c__DisplayClass5_0_TypeDefinitionIndex = 8513;

	class HoYoChannelGooglePlay___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONArray* productArray; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::MiHoYo::SDK::PC::OS::HoYoChannelGooglePlay* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetProductList_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__DISPLAYCLASS5_0__GETPRODUCTLIST_B__0_OFFSET))(this, a1);
		}
	};
}
