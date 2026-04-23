#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/DialogType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class LoginManager; }
namespace MiHoYo::SDK::Win { class TapTapToken; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS104_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1773AA30)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS104_0__SHOWTAPTAPLOGINVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x17740CB0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass104_0_TypeDefinitionIndex = 8211;

	class LoginManager___c__DisplayClass104_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x10
		::MiHoYo::SDK::DialogType dialogType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS104_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowTapTapLoginView_b__0(::System::Int32 retcode, ::System::String* message, ::MiHoYo::SDK::Win::TapTapToken* taptapToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::Win::TapTapToken*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS104_0__SHOWTAPTAPLOGINVIEW_B__0_OFFSET))(this, retcode, message, taptapToken);
		}
	};
}
