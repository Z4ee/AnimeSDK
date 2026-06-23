#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BB6FCE0)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_CLICKNOTTIPSTOGGLE_OFFSET UNITYSDK_OFFSET(0x1BB70AF0)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_CLOSE_OFFSET UNITYSDK_OFFSET(0x1BB708F0)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_HIDE_OFFSET UNITYSDK_OFFSET(0x1BB6FC70)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BB70B50)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_SHOW_OFFSET UNITYSDK_OFFSET(0x1BB6FB10)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_SUBMIT_OFFSET UNITYSDK_OFFSET(0x1BB709A0)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1BB70410)
#define MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB70B70)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int PayLimitTipsDialog_TypeDefinitionIndex = 21306;

	class PayLimitTipsDialog : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::PayLimitTipsDialog** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::PayLimitTipsDialog**)Il2CppClass::FromTypeDefinitionIndex(PayLimitTipsDialog_TypeDefinitionIndex)->GetStaticField(0xA030);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* DialogPath; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* ContentTextPath; // 0x0
		// static const ::System::String* SubmitButtonPath; // 0x0
		// static const ::System::String* ButtonTextPath; // 0x0
		// static const ::System::String* TodayNotTipsPath; // 0x0
		// static const ::System::String* TodayNotTipsTogglePath; // 0x0
		// static const ::System::String* TodayNotTipsTextPath; // 0x0
		::System::Action* OnSubmit; // 0x58
		::System::Action* OnClose; // 0x60
		::System::Action_1<::System::Boolean>* OnToggle; // 0x68
		::UnityEngine::UI::Button* closeButton; // 0x70
		::UnityEngine::UI::Text* contentText; // 0x78
		::UnityEngine::UI::Button* submitButton; // 0x80
		::UnityEngine::UI::Text* buttonText; // 0x88
		::UnityEngine::UI::Toggle* notTipsToggle; // 0x90
		::UnityEngine::UI::Text* notTipsText; // 0x98
		::UnityEngine::GameObject* dialogObject; // 0xA0
		::UnityEngine::GameObject* notTipsObject; // 0xA8
		::System::Int32 noticeAmount; // 0xB0
		::System::Boolean bShowNotTips; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Show(::System::Int32 noticeAmount, ::System::Boolean bShowNotTips)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_SHOW_OFFSET))(noticeAmount, bShowNotTips);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_AWAKE_OFFSET))(this);
		}

		::System::Void updateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_UPDATETEXT_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_CLOSE_OFFSET))(this);
		}

		::System::Void Submit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_SUBMIT_OFFSET))(this);
		}

		::System::Void ClickNotTipsToggle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_CLICKNOTTIPSTOGGLE_OFFSET))(this, value);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_PAYLIMITTIPSDIALOG_ONDESTROY_OFFSET))(this);
		}
	};
}
