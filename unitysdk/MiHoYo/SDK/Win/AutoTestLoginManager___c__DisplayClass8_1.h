#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ComboUserModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class AutoTestLoginManager___c__DisplayClass8_0; }

#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__DISPLAYCLASS8_1__COMBOLOGIN_B__1_OFFSET UNITYSDK_OFFSET(0x1604B4E0)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__DISPLAYCLASS8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1604B4D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AutoTestLoginManager___c__DisplayClass8_1_TypeDefinitionIndex = 7878;

	class AutoTestLoginManager___c__DisplayClass8_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::AutoTestLoginManager___c__DisplayClass8_0* CS___8__locals1; // 0x10
		::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* callbackModel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__DISPLAYCLASS8_1__CTOR_OFFSET))(this);
		}

		::System::Void _ComboLogin_b__1(::MiHoYo::SDK::NetworkResponseModel* comboLoginResponse)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__DISPLAYCLASS8_1__COMBOLOGIN_B__1_OFFSET))(this, comboLoginResponse);
		}
	};
}
