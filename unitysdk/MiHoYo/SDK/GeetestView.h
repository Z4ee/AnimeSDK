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

#define MIHOYO_SDK_GEETESTVIEW_ADD_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x15EDFAD0)
#define MIHOYO_SDK_GEETESTVIEW_ADD_ONERROR_OFFSET UNITYSDK_OFFSET(0x15EDFB90)
#define MIHOYO_SDK_GEETESTVIEW_ADD_ONGETUNIWEBMESSAGE_OFFSET UNITYSDK_OFFSET(0x15EDFC50)
#define MIHOYO_SDK_GEETESTVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x15EDFD50)
#define MIHOYO_SDK_GEETESTVIEW_CLOSE_OFFSET UNITYSDK_OFFSET(0x15EE00D0)
#define MIHOYO_SDK_GEETESTVIEW_HIDE_OFFSET UNITYSDK_OFFSET(0x15EE00E0)
#define MIHOYO_SDK_GEETESTVIEW_LOADURL_OFFSET UNITYSDK_OFFSET(0x15EE00A0)
#define MIHOYO_SDK_GEETESTVIEW_ONLOAD_OFFSET UNITYSDK_OFFSET(0x15EE01B0)
#define MIHOYO_SDK_GEETESTVIEW_ONPAGEERROR_OFFSET UNITYSDK_OFFSET(0x15EE0300)
#define MIHOYO_SDK_GEETESTVIEW_ONUNIWEBVIEWMSGRECEIVE_OFFSET UNITYSDK_OFFSET(0x15EE0140)
#define MIHOYO_SDK_GEETESTVIEW_REMOVE_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x15EDFB30)
#define MIHOYO_SDK_GEETESTVIEW_REMOVE_ONERROR_OFFSET UNITYSDK_OFFSET(0x15EDFBF0)
#define MIHOYO_SDK_GEETESTVIEW_REMOVE_ONGETUNIWEBMESSAGE_OFFSET UNITYSDK_OFFSET(0x15EDFCD0)
#define MIHOYO_SDK_GEETESTVIEW_SHOW_OFFSET UNITYSDK_OFFSET(0x15EDFEE0)
#define MIHOYO_SDK_GEETESTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x15EE0320)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int GeetestView_TypeDefinitionIndex = 7247;

	class GeetestView : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::GeetestView** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::GeetestView**)Il2CppClass::FromTypeDefinitionIndex(GeetestView_TypeDefinitionIndex)->GetStaticField(0x13620);
		}
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(GeetestView_TypeDefinitionIndex)->GetStaticField(0x13628);
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
