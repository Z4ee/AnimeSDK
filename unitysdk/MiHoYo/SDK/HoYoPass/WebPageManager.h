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

#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_CLOSEWEBPAGE_OFFSET UNITYSDK_OFFSET(0x1B515DC0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_GETURL_OFFSET UNITYSDK_OFFSET(0x1B515390)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONERRORCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B516340)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONPAGECLOSED_OFFSET UNITYSDK_OFFSET(0x1B515E00)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONRESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1B515EE0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_OPENWEBPAGE_OFFSET UNITYSDK_OFFSET(0x1B514BD0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B516890)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B516880)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_0_OFFSET UNITYSDK_OFFSET(0x1B5168E0)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_2_OFFSET UNITYSDK_OFFSET(0x1B516930)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_3_OFFSET UNITYSDK_OFFSET(0x1B516940)
#define MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_4_OFFSET UNITYSDK_OFFSET(0x1B516950)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int WebPageManager_TypeDefinitionIndex = 20104;

	class WebPageManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoPass::WebPageManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::HoYoPass::WebPageManager**)Il2CppClass::FromTypeDefinitionIndex(WebPageManager_TypeDefinitionIndex)->GetStaticField(0xB150);
		}
		// static const ::System::String* MODULE_NAME; // 0x0
		::MiHoYo::SDK::Web* webview; // 0x10
		::System::Action_1<::MiHoYo::SDK::Web*>* OnWebpageFinish; // 0x18
		::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*>* onGetResultCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void OpenWebPage(::MiHoYo::SDK::HoYoPass::WebPageManager_WebPageType type, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*>* resultCallback, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*>*>* customJsBridge, ::System::Boolean enableBackward, ::System::Boolean enableForward)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::WebPageManager_WebPageType, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*>*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_OPENWEBPAGE_OFFSET))(this, type, resultCallback, customJsBridge, enableBackward, enableForward);
		}

		::System::Void CloseWebPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_CLOSEWEBPAGE_OFFSET))(this);
		}

		::System::String* GetUrl(::MiHoYo::SDK::HoYoPass::WebPageManager_WebPageType type)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::HoYoPass::WebPageManager_WebPageType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_GETURL_OFFSET))(this, type);
		}

		::System::Void onPageClosed(::MiHoYo::SDK::Web* webView)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONPAGECLOSED_OFFSET))(this, webView);
		}

		::System::Void onResultCallback(::MiHoYo::SDK::Web* w, ::MiHoYo::SDK::JSONNode* resultNode)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONRESULTCALLBACK_OFFSET))(this, w, resultNode);
		}

		::System::Void onErrorCallback(::MiHoYo::SDK::Web* w, ::MiHoYo::SDK::JSONNode* resultNode)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER_ONERRORCALLBACK_OFFSET))(this, w, resultNode);
		}

		::System::Void _OpenWebPage_b__7_0(::MiHoYo::SDK::Web* web, ::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_0_OFFSET))(this, web, str);
		}

		::System::Void _OpenWebPage_b__7_2(::MiHoYo::SDK::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_2_OFFSET))(this, node);
		}

		::System::Void _OpenWebPage_b__7_3(::MiHoYo::SDK::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_3_OFFSET))(this, node);
		}

		::System::Boolean _OpenWebPage_b__7_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_WEBPAGEMANAGER__OPENWEBPAGE_B__7_4_OFFSET))(this);
		}
	};
}
