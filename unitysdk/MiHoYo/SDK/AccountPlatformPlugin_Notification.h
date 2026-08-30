#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_NOTIFICATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B72C0D0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_NOTIFICATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B72C100)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_NOTIFICATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B72C0C0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_NOTIFICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B72C050)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatformPlugin_Notification_TypeDefinitionIndex = 7926;

	class AccountPlatformPlugin_Notification : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_NOTIFICATION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_NOTIFICATION_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_NOTIFICATION_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_NOTIFICATION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
