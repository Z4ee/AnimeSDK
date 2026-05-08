#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"

namespace MiHoYo::SDK { class MmtManager_GeetestModel; }
namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Button; }

#define MIHOYO_SDK_GEETESTVIEW_ADD_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x199968E0)
#define MIHOYO_SDK_GEETESTVIEW_ADD_ONERROR_OFFSET UNITYSDK_OFFSET(0x199969E0)
#define MIHOYO_SDK_GEETESTVIEW_ADD_ONGETUNIWEBMESSAGE_OFFSET UNITYSDK_OFFSET(0x19996AE0)
#define MIHOYO_SDK_GEETESTVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x19996BE0)
#define MIHOYO_SDK_GEETESTVIEW_CLOSE_OFFSET UNITYSDK_OFFSET(0x19997050)
#define MIHOYO_SDK_GEETESTVIEW_HIDE_OFFSET UNITYSDK_OFFSET(0x19997060)
#define MIHOYO_SDK_GEETESTVIEW_LOADURL_OFFSET UNITYSDK_OFFSET(0x19997020)
#define MIHOYO_SDK_GEETESTVIEW_ONLOAD_OFFSET UNITYSDK_OFFSET(0x19997240)
#define MIHOYO_SDK_GEETESTVIEW_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x199974A0)
#define MIHOYO_SDK_GEETESTVIEW_ONUNIWEBVIEWMSGRECEIVE_OFFSET UNITYSDK_OFFSET(0x199971B0)
#define MIHOYO_SDK_GEETESTVIEW_REMOVE_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x19996960)
#define MIHOYO_SDK_GEETESTVIEW_REMOVE_ONERROR_OFFSET UNITYSDK_OFFSET(0x19996A60)
#define MIHOYO_SDK_GEETESTVIEW_REMOVE_ONGETUNIWEBMESSAGE_OFFSET UNITYSDK_OFFSET(0x19996B60)
#define MIHOYO_SDK_GEETESTVIEW_SHOW_OFFSET UNITYSDK_OFFSET(0x19996DA0)
#define MIHOYO_SDK_GEETESTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x19997500)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int GeetestView_TypeDefinitionIndex = 19117;

	class GeetestView : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(GeetestView_TypeDefinitionIndex)->GetStaticField(0x9010);
		}
		static ::MiHoYo::SDK::GeetestView** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::GeetestView**)Il2CppClass::FromTypeDefinitionIndex(GeetestView_TypeDefinitionIndex)->GetStaticField(0x9018);
		}
		// static const ::System::String* PrefabName; // 0x0
		::UnityEngine::UI::Button* closeButton; // 0x58
		::System::Action* OnClose; // 0x60
		::System::Action_1<::System::String*>* OnError; // 0x68
		::System::Action_1<::MiHoYo::SDK::UniWebViewMessage>* OnGetUniWebMessage; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW__CTOR_OFFSET))(this);
		}

		::System::Void add_OnClose(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_ADD_ONCLOSE_OFFSET))(this, value);
		}

		::System::Void remove_OnClose(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_REMOVE_ONCLOSE_OFFSET))(this, value);
		}

		::System::Void add_OnError(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_ADD_ONERROR_OFFSET))(this, value);
		}

		::System::Void remove_OnError(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_REMOVE_ONERROR_OFFSET))(this, value);
		}

		::System::Void add_OnGetUniWebMessage(::System::Action_1<::MiHoYo::SDK::UniWebViewMessage>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UniWebViewMessage>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_ADD_ONGETUNIWEBMESSAGE_OFFSET))(this, value);
		}

		::System::Void remove_OnGetUniWebMessage(::System::Action_1<::MiHoYo::SDK::UniWebViewMessage>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MiHoYo::SDK::UniWebViewMessage>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_REMOVE_ONGETUNIWEBMESSAGE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_AWAKE_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_SHOW_OFFSET))();
		}

		::System::Void LoadURL(::System::String* url, ::MiHoYo::SDK::MmtManager_GeetestModel* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::MmtManager_GeetestModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_LOADURL_OFFSET))(this, url, param);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_CLOSE_OFFSET))(this);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_HIDE_OFFSET))();
		}

		::System::Void OnUniWebviewMsgReceive(::System::String* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_ONUNIWEBVIEWMSGRECEIVE_OFFSET))(this, result);
		}

		::System::Void OnLoad(::System::String* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_ONLOAD_OFFSET))(this, result);
		}

		::System::Void OnPageError(::System::String* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_ONPAGEERROR_OFFSET))(this, result);
		}
	};
}
