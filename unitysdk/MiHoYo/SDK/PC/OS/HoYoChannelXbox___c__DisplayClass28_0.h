#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelXbox; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDDB4D0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS28_0__GETPRODUCTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1BDDB4E0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelXbox___c__DisplayClass28_0_TypeDefinitionIndex = 20740;

	class HoYoChannelXbox___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::HoYoChannelXbox* __4__this; // 0x10
		::MiHoYo::SDK::JSONArray* productArray; // 0x18
		::System::Action_1<::System::String*>* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetProductList_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELXBOX___C__DISPLAYCLASS28_0__GETPRODUCTLIST_B__0_OFFSET))(this, response);
		}
	};
}
