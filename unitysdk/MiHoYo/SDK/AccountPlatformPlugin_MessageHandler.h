#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_MESSAGEHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19448240)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_MESSAGEHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19448270)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_MESSAGEHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x19447D40)
#define MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_MESSAGEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19447D30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AccountPlatformPlugin_MessageHandler_TypeDefinitionIndex = 18836;

	class AccountPlatformPlugin_MessageHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_MESSAGEHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* strMsgParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_MESSAGEHANDLER_INVOKE_OFFSET))(this, strMsgParams);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* strMsgParams, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_MESSAGEHANDLER_BEGININVOKE_OFFSET))(this, strMsgParams, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ACCOUNTPLATFORMPLUGIN_MESSAGEHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
