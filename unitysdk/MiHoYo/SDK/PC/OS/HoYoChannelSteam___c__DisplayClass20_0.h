#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelSteam; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D76D4B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM___C__DISPLAYCLASS20_0__GETPRODUCTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1D76D4C0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelSteam___c__DisplayClass20_0_TypeDefinitionIndex = 20791;

	class HoYoChannelSteam___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONArray* productArray; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18
		::MiHoYo::SDK::PC::OS::HoYoChannelSteam* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetProductList_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELSTEAM___C__DISPLAYCLASS20_0__GETPRODUCTLIST_B__0_OFFSET))(this, response);
		}
	};
}
