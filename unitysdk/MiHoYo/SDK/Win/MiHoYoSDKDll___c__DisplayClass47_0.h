#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x171323B0)
#define MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS47_0__LOGIN_WILL_ENTER_GAME_B__0_OFFSET UNITYSDK_OFFSET(0x171323C0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int MiHoYoSDKDll___c__DisplayClass47_0_TypeDefinitionIndex = 9101;

	class MiHoYoSDKDll___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::System::String* jsonString; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Void _login_will_enter_game_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_MIHOYOSDKDLL___C__DISPLAYCLASS47_0__LOGIN_WILL_ENTER_GAME_B__0_OFFSET))(this, a1);
		}
	};
}
