#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class Alert_OnAlertDelegate; }
namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_ALERT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A193FD0)
#define MIHOYO_SDK_ALERT_HIDEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A195110)
#define MIHOYO_SDK_ALERT_HIDE_OFFSET UNITYSDK_OFFSET(0x1A195210)
#define MIHOYO_SDK_ALERT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A195560)
#define MIHOYO_SDK_ALERT_ONTAPCLOSE_OFFSET UNITYSDK_OFFSET(0x1A195480)
#define MIHOYO_SDK_ALERT_ONTAPSUBMIT_OFFSET UNITYSDK_OFFSET(0x1A1954F0)
#define MIHOYO_SDK_ALERT_SHOWPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A194620)
#define MIHOYO_SDK_ALERT_SHOW_OFFSET UNITYSDK_OFFSET(0x1A194C70)
#define MIHOYO_SDK_ALERT_START_OFFSET UNITYSDK_OFFSET(0x1A1944F0)
#define MIHOYO_SDK_ALERT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1955E0)
#define MIHOYO_SDK_ALERT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A195590)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Alert_TypeDefinitionIndex = 8196;

	class Alert : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(Alert_TypeDefinitionIndex)->GetStaticField(0x3190);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_AlertHideTaskList()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Alert_TypeDefinitionIndex)->GetStaticField(0x3198);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* ContentTextPath; // 0x0
		// static const ::System::String* SubmitButtonPath; // 0x0
		// static const ::System::String* ButtonTextPath; // 0x0
		::System::String* content; // 0x58
		::System::String* buttonTitle; // 0x60
		::MiHoYo::SDK::Alert_OnAlertDelegate* OnAlertResult; // 0x68
		::MiHoYo::SDK::Alert_AlertResult result; // 0x70
		::System::Boolean isShowClose; // 0x74
		::UnityEngine::UI::Button* closeButton; // 0x78
		::UnityEngine::UI::Text* contentText; // 0x80
		::UnityEngine::UI::Button* submitButton; // 0x88
		::UnityEngine::UI::Text* buttonText; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_START_OFFSET))(this);
		}

		static ::System::Boolean ShowPluginUI(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::MiHoYo::SDK::Alert_OnAlertDelegate* a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::Boolean, ::MiHoYo::SDK::Alert_OnAlertDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_SHOWPLUGINUI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Show(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::Alert_OnAlertDelegate* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::MiHoYo::SDK::Alert_OnAlertDelegate*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_SHOW_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean HidePluginUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_HIDEPLUGINUI_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_HIDE_OFFSET))();
		}

		::System::Void OnTapClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_ONTAPCLOSE_OFFSET))(this);
		}

		::System::Void OnTapSubmit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_ONTAPSUBMIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_ONDESTROY_OFFSET))(this);
		}
	};
}
