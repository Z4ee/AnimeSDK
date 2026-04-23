#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MiHoYoSDKUniWebViewMessage.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_RPGSDKACCOUNTMANAGER__BASEUNIWEBVIEWMESSAGEHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xAF62F70)
#define RPG_CLIENT_RPGSDKACCOUNTMANAGER__BASEUNIWEBVIEWMESSAGEHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xAF62FF0)
#define RPG_CLIENT_RPGSDKACCOUNTMANAGER__BASEUNIWEBVIEWMESSAGEHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0xAF62780)
#define RPG_CLIENT_RPGSDKACCOUNTMANAGER__BASEUNIWEBVIEWMESSAGEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAF624C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGSDKAccountManager__BaseUniWebViewMessageHandler_TypeDefinitionIndex = 56335;

	class RPGSDKAccountManager__BaseUniWebViewMessageHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER__BASEUNIWEBVIEWMESSAGEHANDLER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* web, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER__BASEUNIWEBVIEWMESSAGEHANDLER_INVOKE_OFFSET))(this, web, message);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::MiHoYoSDKWebView* web, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage message, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER__BASEUNIWEBVIEWMESSAGEHANDLER_BEGININVOKE_OFFSET))(this, web, message, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER__BASEUNIWEBVIEWMESSAGEHANDLER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
