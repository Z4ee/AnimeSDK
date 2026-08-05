#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Windows::OS::Channel { class BindManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E9140)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS43_0__GETCAPTCHACODE_B__0_OFFSET UNITYSDK_OFFSET(0x1D3E9150)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS43_0__GETCAPTCHACODE_B__1_OFFSET UNITYSDK_OFFSET(0x1D3E9860)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	inline static constexpr unsigned int BindManager___c__DisplayClass43_0_TypeDefinitionIndex = 20471;

	class BindManager___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders; // 0x10
		::System::Action_1<::System::String*>* __9__1; // 0x18
		::System::Action_1<::MiHoYo::SDK::NetworkResponseModelEx*>* onCreateActionTicket; // 0x20
		::System::String* account; // 0x28
		::MiHoYo::SDK::Windows::OS::Channel::BindManager* __4__this; // 0x30
		::System::Boolean forceTokenRefresh; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS43_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetCaptchaCode_b__0(::MiHoYo::SDK::NetworkResponseModelEx* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS43_0__GETCAPTCHACODE_B__0_OFFSET))(this, response);
		}

		::System::Void _GetCaptchaCode_b__1(::System::String* aigisRes)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS43_0__GETCAPTCHACODE_B__1_OFFSET))(this, aigisRes);
		}
	};
}
