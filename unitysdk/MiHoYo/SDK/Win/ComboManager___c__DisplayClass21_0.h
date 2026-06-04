#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class ComboManager; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184B5240)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__REQUESTCOMBOLOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x184B5250)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass21_0_TypeDefinitionIndex = 9077;

	class ComboManager___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback; // 0x10
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestComboLogin_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS21_0__REQUESTCOMBOLOGIN_B__0_OFFSET))(this, a1);
		}
	};
}
