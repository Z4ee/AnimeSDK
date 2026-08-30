#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MiHoYoSDKUniWebViewMessage.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class MiHoYoSDKWebView; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_RPGSDKACCOUNTMANAGER__BASEUNIWEBVIEWMESSAGEHANDLER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18059D60)
#define RPG_CLIENT_RPGSDKACCOUNTMANAGER__BASEUNIWEBVIEWMESSAGEHANDLER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18059DE0)
#define RPG_CLIENT_RPGSDKACCOUNTMANAGER__BASEUNIWEBVIEWMESSAGEHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x18054930)
#define RPG_CLIENT_RPGSDKACCOUNTMANAGER__BASEUNIWEBVIEWMESSAGEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18059C70)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGSDKAccountManager__BaseUniWebViewMessageHandler_TypeDefinitionIndex = 61182;

	class RPGSDKAccountManager__BaseUniWebViewMessageHandler : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER__BASEUNIWEBVIEWMESSAGEHANDLER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER__BASEUNIWEBVIEWMESSAGEHANDLER_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::MiHoYoSDKWebView* a1, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::MiHoYoSDKWebView*, ::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER__BASEUNIWEBVIEWMESSAGEHANDLER_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER__BASEUNIWEBVIEWMESSAGEHANDLER_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
