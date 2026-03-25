#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::HoYoPass { class LoginManager___c__DisplayClass41_0; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS41_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF6570)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS41_1__ONHOYOPASSVERIFICATION_B__1_OFFSET UNITYSDK_OFFSET(0x15F04C50)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass41_1_TypeDefinitionIndex = 7302;

	class LoginManager___c__DisplayClass41_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager___c__DisplayClass41_0* CS___8__locals1; // 0x10
		::MiHoYo::SDK::JSONNode* verifyObj; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS41_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnHoYoPassVerification_b__1(::System::Int32 retcode, ::System::String* verifyResultStr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS41_1__ONHOYOPASSVERIFICATION_B__1_OFFSET))(this, retcode, verifyResultStr);
		}
	};
}
