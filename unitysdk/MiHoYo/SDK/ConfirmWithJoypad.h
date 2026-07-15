#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ConfirmWithJoypad_ConfirmResult.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class ConfirmWithJoypad_OnConfirmDelegate; }
namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_CONFIRMWITHJOYPAD_AWAKE_OFFSET UNITYSDK_OFFSET(0x1888ECA0)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD_CLOSE_OFFSET UNITYSDK_OFFSET(0x188901F0)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD_HIDE_OFFSET UNITYSDK_OFFSET(0x1888FF80)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18890BD0)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD_ONTAPACCEPT_OFFSET UNITYSDK_OFFSET(0x1888FB20)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD_ONTAPCANCEL_OFFSET UNITYSDK_OFFSET(0x1888FB90)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD_SETJOYPADSTATUS_OFFSET UNITYSDK_OFFSET(0x188902B0)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD_SHOW_OFFSET UNITYSDK_OFFSET(0x1888FC00)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD_START_OFFSET UNITYSDK_OFFSET(0x1888F440)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD_UPDATEJOYPADICON_OFFSET UNITYSDK_OFFSET(0x18890780)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD_UPDATE_OFFSET UNITYSDK_OFFSET(0x1888F600)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD__CCTOR_OFFSET UNITYSDK_OFFSET(0x18890CC0)
#define MIHOYO_SDK_CONFIRMWITHJOYPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x18890C60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ConfirmWithJoypad_TypeDefinitionIndex = 7950;

	class ConfirmWithJoypad : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(ConfirmWithJoypad_TypeDefinitionIndex)->GetStaticField(0xFE20);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_sm_hideTask()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(ConfirmWithJoypad_TypeDefinitionIndex)->GetStaticField(0xFE28);
		}
		static ::MiHoYo::SDK::ConfirmWithJoypad** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ConfirmWithJoypad**)Il2CppClass::FromTypeDefinitionIndex(ConfirmWithJoypad_TypeDefinitionIndex)->GetStaticField(0xFE30);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* DialogPath; // 0x0
		// static const ::System::String* ContentTextPath; // 0x0
		// static const ::System::String* CancelBtnPath; // 0x0
		// static const ::System::String* CancelBtnJoypadIconPath; // 0x0
		// static const ::System::String* CancelBtnJoypadIconImagePath; // 0x0
		// static const ::System::String* CancelBtnTextPath; // 0x0
		// static const ::System::String* AcceptBtnPath; // 0x0
		// static const ::System::String* AcceptBtnJoypadIconPath; // 0x0
		// static const ::System::String* AcceptBtnJoypadIconImagePath; // 0x0
		// static const ::System::String* AcceptBtnTextPath; // 0x0
		// static const ::System::Single NomalDialogWidth; // 0x0
		// static const ::System::Single NomalButtonWidth; // 0x0
		// static const ::System::Single ExpandDialogWidth; // 0x0
		// static const ::System::Single ExpandButtonWidth; // 0x0
		::System::String* strContent; // 0x58
		::System::String* strAcceptTitle; // 0x60
		::System::String* strCancelTitle; // 0x68
		::MiHoYo::SDK::ConfirmWithJoypad_OnConfirmDelegate* OnConfirmResult; // 0x70
		::MiHoYo::SDK::ConfirmWithJoypad_ConfirmResult result; // 0x78
		::UnityEngine::GameObject* dialogObject; // 0x80
		::UnityEngine::UI::Button* cancelButton; // 0x88
		::UnityEngine::UI::Button* acceptButton; // 0x90
		::UnityEngine::UI::Text* contentText; // 0x98
		::UnityEngine::UI::Text* acceptText; // 0xA0
		::UnityEngine::UI::Text* cancelText; // 0xA8
		::UnityEngine::GameObject* cancelButtonJoypadIcon; // 0xB0
		::UnityEngine::GameObject* acceptButtonJoypadIcon; // 0xB8
		::System::String* m_joypadType; // 0xC0
		::System::Boolean m_bJoypadExchange; // 0xC8
		::System::Boolean m_bIsJoypadSignal; // 0xC9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_UPDATE_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* a1, ::System::String* a2, ::System::String* a3, ::MiHoYo::SDK::ConfirmWithJoypad_OnConfirmDelegate* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::ConfirmWithJoypad_OnConfirmDelegate*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_SHOW_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_HIDE_OFFSET))();
		}

		static ::System::Void Close()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_CLOSE_OFFSET))();
		}

		::System::Void SetJoypadStatus(::System::Boolean a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_SETJOYPADSTATUS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateJoyPadIcon(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_UPDATEJOYPADICON_OFFSET))(this, a1, a2);
		}

		::System::Void OnTapCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_ONTAPCANCEL_OFFSET))(this);
		}

		::System::Void OnTapAccept()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_ONTAPACCEPT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRMWITHJOYPAD_ONDESTROY_OFFSET))(this);
		}
	};
}
