#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D49FC30)
#define MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__DISPLAYCLASS3_0__GENERATEACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1D49FC40)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int BindManagerCX___c__DisplayClass3_0_TypeDefinitionIndex = 21165;

	class BindManagerCX___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::String* xuid; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateAccessToken_b__0(::System::Int32 retcode, ::System::String* token, ::System::String* signature)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_BINDMANAGERCX___C__DISPLAYCLASS3_0__GENERATEACCESSTOKEN_B__0_OFFSET))(this, retcode, token, signature);
		}
	};
}
