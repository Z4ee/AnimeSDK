#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18263EE0)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS6_0__GENERATEACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x182643F0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManagerCX___c__DisplayClass6_0_TypeDefinitionIndex = 8749;

	class LoginManagerCX___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::System::String* xuid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateAccessToken_b__0(::System::Int32 a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS6_0__GENERATEACCESSTOKEN_B__0_OFFSET))(this, a1, a2, a3);
		}
	};
}
