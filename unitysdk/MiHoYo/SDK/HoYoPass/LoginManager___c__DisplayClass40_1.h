#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HoYoPass { class LoginManager___c__DisplayClass40_0; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS40_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF5E00)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS40_1__ONHOYOPASSPROTECTIVEBAN_B__2_OFFSET UNITYSDK_OFFSET(0x15F04780)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS40_1__ONHOYOPASSPROTECTIVEBAN_B__3_OFFSET UNITYSDK_OFFSET(0x15F04BA0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS40_1__ONHOYOPASSPROTECTIVEBAN_B__4_OFFSET UNITYSDK_OFFSET(0x15F04950)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass40_1_TypeDefinitionIndex = 7300;

	class LoginManager___c__DisplayClass40_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager___c__DisplayClass40_0* CS___8__locals1; // 0x10
		::System::Action* onChangePasswordCanceled; // 0x18
		::System::Action_2<::System::Int32, ::System::String*>* __9__4; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS40_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassProtectiveBan_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS40_1__ONHOYOPASSPROTECTIVEBAN_B__2_OFFSET))(this);
		}

		::System::Void _OnHoYoPassProtectiveBan_b__4(::System::Int32 ret, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS40_1__ONHOYOPASSPROTECTIVEBAN_B__4_OFFSET))(this, ret, name);
		}

		::System::Void _OnHoYoPassProtectiveBan_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS40_1__ONHOYOPASSPROTECTIVEBAN_B__3_OFFSET))(this);
		}
	};
}
