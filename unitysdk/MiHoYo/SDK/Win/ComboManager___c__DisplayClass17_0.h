#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Alert_OnAlertDelegate; }
namespace MiHoYo::SDK { class ComboUserModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class ComboManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C97B4C0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS17_0__ONHANDHELDCHANNELLOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1C97B4D0)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS17_0__ONHANDHELDCHANNELLOGIN_B__1_OFFSET UNITYSDK_OFFSET(0x1C97D0E0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass17_0_TypeDefinitionIndex = 21163;

	class ComboManager___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* callbackModel; // 0x18
		::MiHoYo::SDK::Alert_OnAlertDelegate* __9__1; // 0x20
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnHandheldChannelLogin_b__0(::MiHoYo::SDK::NetworkResponseModel* comboLoginResponse)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS17_0__ONHANDHELDCHANNELLOGIN_B__0_OFFSET))(this, comboLoginResponse);
		}

		::System::Void _OnHandheldChannelLogin_b__1(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS17_0__ONHANDHELDCHANNELLOGIN_B__1_OFFSET))(this, result);
		}
	};
}
