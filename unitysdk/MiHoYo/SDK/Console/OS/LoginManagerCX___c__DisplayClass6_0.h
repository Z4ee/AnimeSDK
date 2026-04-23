#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17462E10)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS6_0__GENERATEACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x17463320)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManagerCX___c__DisplayClass6_0_TypeDefinitionIndex = 7846;

	class LoginManagerCX___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::String* xuid; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateAccessToken_b__0(::System::Int32 retcode, ::System::String* token, ::System::String* signature)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS6_0__GENERATEACCESSTOKEN_B__0_OFFSET))(this, retcode, token, signature);
		}
	};
}
