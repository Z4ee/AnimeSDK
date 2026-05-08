#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class PayManager; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199C9BD0)
#define MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS21_0__REQUESTDEFAULTPRICETIERV2_B__0_OFFSET UNITYSDK_OFFSET(0x199C9BE0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayManager___c__DisplayClass21_0_TypeDefinitionIndex = 20045;

	class PayManager___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x10
		::MiHoYo::SDK::Win::PayManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestDefaultPriceTierV2_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS21_0__REQUESTDEFAULTPRICETIERV2_B__0_OFFSET))(this, response);
		}
	};
}
