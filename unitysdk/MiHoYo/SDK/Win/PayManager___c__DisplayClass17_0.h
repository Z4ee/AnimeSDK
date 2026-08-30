#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18786FD0)
#define MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS17_0__GETPRICETIER_B__0_OFFSET UNITYSDK_OFFSET(0x1878DB50)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayManager___c__DisplayClass17_0_TypeDefinitionIndex = 9409;

	class PayManager___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetPriceTier_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYMANAGER___C__DISPLAYCLASS17_0__GETPRICETIER_B__0_OFFSET))(this, a1);
		}
	};
}
