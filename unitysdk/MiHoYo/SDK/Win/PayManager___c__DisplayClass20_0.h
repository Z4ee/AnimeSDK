#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class PayManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x174A67A0)
#define MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS20_0__REQUESTPRICETIERV2_B__0_OFFSET UNITYSDK_OFFSET(0x174AE0C0)
#define MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS20_0__REQUESTPRICETIERV2_B__1_OFFSET UNITYSDK_OFFSET(0x174AEA80)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayManager___c__DisplayClass20_0_TypeDefinitionIndex = 8217;

	class PayManager___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* __9__1; // 0x10
		::System::String* currency; // 0x18
		::MiHoYo::SDK::Win::PayManager* __4__this; // 0x20
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestPriceTierV2_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS20_0__REQUESTPRICETIERV2_B__0_OFFSET))(this, response);
		}

		::System::Void _RequestPriceTierV2_b__1(::MiHoYo::SDK::NetworkResponseModel* suggestResponse)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS20_0__REQUESTPRICETIERV2_B__1_OFFSET))(this, suggestResponse);
		}
	};
}
