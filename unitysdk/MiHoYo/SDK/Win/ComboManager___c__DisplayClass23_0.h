#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ComboUserModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class ComboManager; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16082250)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS23_0__ONACCOUNTPLATLOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x160939E0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass23_0_TypeDefinitionIndex = 8029;

	class ComboManager___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* callbackModel; // 0x10
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnAccountPlatLogin_b__0(::MiHoYo::SDK::NetworkResponseModel* comboLoginResponse)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS23_0__ONACCOUNTPLATLOGIN_B__0_OFFSET))(this, comboLoginResponse);
		}
	};
}
