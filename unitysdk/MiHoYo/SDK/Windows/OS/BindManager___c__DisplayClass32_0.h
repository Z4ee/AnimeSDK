#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Windows::OS { class BindManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x182E08B0)
#define MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS32_0__GENERATEACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x182E4F40)

namespace MiHoYo::SDK::Windows::OS
{
	inline static constexpr unsigned int BindManager___c__DisplayClass32_0_TypeDefinitionIndex = 8292;

	class BindManager___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Windows::OS::BindManager* __4__this; // 0x10
		::System::Action_1<::System::String*>* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateAccessToken_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_BINDMANAGER___C__DISPLAYCLASS32_0__GENERATEACCESSTOKEN_B__0_OFFSET))(this, a1);
		}
	};
}
