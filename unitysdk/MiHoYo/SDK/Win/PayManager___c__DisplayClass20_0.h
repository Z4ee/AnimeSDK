#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class PayManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18787970)
#define MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS20_0__REQUESTPRICETIERV2_B__0_OFFSET UNITYSDK_OFFSET(0x1878F370)
#define MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS20_0__REQUESTPRICETIERV2_B__1_OFFSET UNITYSDK_OFFSET(0x1878FE00)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayManager___c__DisplayClass20_0_TypeDefinitionIndex = 9411;

	class PayManager___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__1; // 0x10
		::MiHoYo::SDK::Win::PayManager* __4__this; // 0x18
		::System::String* currency; // 0x20
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestPriceTierV2_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS20_0__REQUESTPRICETIERV2_B__0_OFFSET))(this, a1);
		}

		::System::Void _RequestPriceTierV2_b__1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS20_0__REQUESTPRICETIERV2_B__1_OFFSET))(this, a1);
		}
	};
}
