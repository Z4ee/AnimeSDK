#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Windows::OS::Channel { class BindManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF538F0)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS32_0__GENERATEACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1CF53900)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int BindManager___c__DisplayClass32_0_TypeDefinitionIndex = 20469;

	class BindManager___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* callback; // 0x10
		::MiHoYo::SDK::Windows::OS::Channel::BindManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _GenerateAccessToken_b__0(::System::String* accessToken)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS32_0__GENERATEACCESSTOKEN_B__0_OFFSET))(this, accessToken);
		}
	};
}
