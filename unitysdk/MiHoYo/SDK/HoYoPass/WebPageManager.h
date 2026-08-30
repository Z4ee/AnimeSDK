#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/WebPageManager_WebPageType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class Web; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_CLOSEWEBPAGE_OFFSET UNITYSDK_OFFSET(0x1AEA86E0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_GETURL_OFFSET UNITYSDK_OFFSET(0x1AEAAD20)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AEAC030)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONPAGECLOSED_OFFSET UNITYSDK_OFFSET(0x1AEAB6F0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONRESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AEAB7D0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_OPENWEBPAGE_OFFSET UNITYSDK_OFFSET(0x1AE7A100)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEAC740)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEAC730)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_0_OFFSET UNITYSDK_OFFSET(0x1AEAC790)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_2_OFFSET UNITYSDK_OFFSET(0x1AEAC7B0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_3_OFFSET UNITYSDK_OFFSET(0x1AEAC7C0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_4_OFFSET UNITYSDK_OFFSET(0x1AEAC7D0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int WebPageManager_TypeDefinitionIndex = 8299;

	class WebPageManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::WebPageManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::HoYoPass::WebPageManager**)Il2CppClass::FromTypeDefinitionIndex(WebPageManager_TypeDefinitionIndex)->GetStaticField(0x12410);
		}
		// static const ::System::String* MODULE_NAME; // 0x0
		::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*>* onGetResultCallback; // 0x10
		::System::Action_1<::MiHoYo::SDK::Web*>* OnWebpageFinish; // 0x18
		::MiHoYo::SDK::Web* webview; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void OpenWebPage(::MiHoYo::SDK::HoYoPass::WebPageManager_WebPageType a1, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*>*>* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::WebPageManager_WebPageType, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*>*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_OPENWEBPAGE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CloseWebPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_CLOSEWEBPAGE_OFFSET))(this);
		}

		::System::String* GetUrl(::MiHoYo::SDK::HoYoPass::WebPageManager_WebPageType a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::WebPageManager_WebPageType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_GETURL_OFFSET))(this, a1);
		}

		::System::Void onPageClosed(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONPAGECLOSED_OFFSET))(this, a1);
		}

		::System::Void onResultCallback(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONRESULTCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void onErrorCallback(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONERRORCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void _OpenWebPage_b__7_0(::MiHoYo::SDK::Web* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_0_OFFSET))(this, a1, a2);
		}

		::System::Void _OpenWebPage_b__7_2(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_2_OFFSET))(this, a1);
		}

		::System::Void _OpenWebPage_b__7_3(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_3_OFFSET))(this, a1);
		}

		::System::Boolean _OpenWebPage_b__7_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_4_OFFSET))(this);
		}
	};
}
