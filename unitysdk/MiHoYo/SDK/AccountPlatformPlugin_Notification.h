#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_NOTIFICATION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19494DB0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_NOTIFICATION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19494DE0)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_NOTIFICATION_INVOKE_OFFSET UNITYSDK_OFFSET(0x19494870)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_NOTIFICATION__CTOR_OFFSET UNITYSDK_OFFSET(0x19494860)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatformPlugin_Notification_TypeDefinitionIndex = 18835;

	class AccountPlatformPlugin_Notification : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_NOTIFICATION__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* strNotification)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_NOTIFICATION_INVOKE_OFFSET))(this, strNotification);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* strNotification, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_NOTIFICATION_BEGININVOKE_OFFSET))(this, strNotification, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_NOTIFICATION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
