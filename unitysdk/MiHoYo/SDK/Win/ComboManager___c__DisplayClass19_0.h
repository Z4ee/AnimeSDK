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

#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D14510)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_0__ONHANDHELDCHANNELLOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x15D25660)
#define MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_0__ONHANDHELDCHANNELLOGIN_B__1_OFFSET UNITYSDK_OFFSET(0x15D272D0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ComboManager___c__DisplayClass19_0_TypeDefinitionIndex = 9358;

	class ComboManager___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::ComboManager* __4__this; // 0x10
		::MiHoYo::SDK::Alert_OnAlertDelegate* __9__1; // 0x18
		::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::ComboUserModel*>* callbackModel; // 0x20
		::System::Action_1<::System::String*>* callback; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnHandheldChannelLogin_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_0__ONHANDHELDCHANNELLOGIN_B__0_OFFSET))(this, a1);
		}

		::System::Void _OnHandheldChannelLogin_b__1(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_COMBOMANAGER___C__DISPLAYCLASS19_0__ONHANDHELDCHANNELLOGIN_B__1_OFFSET))(this, a1);
		}
	};
}
