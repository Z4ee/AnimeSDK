#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class ComboManager; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEC1550)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS22_0__REQUESTCOMBOLOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1CEC1560)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass22_0_TypeDefinitionIndex = 21517;

	class ComboManager___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x10
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestComboLogin_b__0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS22_0__REQUESTCOMBOLOGIN_B__0_OFFSET))(this, response);
		}
	};
}
