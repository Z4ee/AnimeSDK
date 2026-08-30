#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B8DD200)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B8DDB10)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_HIDE_OFFSET UNITYSDK_OFFSET(0x1B8DDAA0)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B8DDB50)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_SHOW_OFFSET UNITYSDK_OFFSET(0x1B8DD0A0)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_SUBMIT_OFFSET UNITYSDK_OFFSET(0x1B8DDB30)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1B8DD750)
#define MIHOYO_SDK_WIN_REACTIVATEACCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8DDB70)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ReactivateAccount_TypeDefinitionIndex = 9488;

	class ReactivateAccount : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::ReactivateAccount** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::ReactivateAccount**)Il2CppClass::FromTypeDefinitionIndex(ReactivateAccount_TypeDefinitionIndex)->GetStaticField(0x38290);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* ContentTextPath; // 0x0
		// static const ::System::String* SubmitButtonPath; // 0x0
		// static const ::System::String* ButtonTextPath; // 0x0
		::UnityEngine::UI::Button* closeButton; // 0x58
		::UnityEngine::UI::Text* contentText; // 0x60
		::UnityEngine::UI::Button* submitButton; // 0x68
		::UnityEngine::UI::Text* buttonText; // 0x70
		::System::Action* OnSubmit; // 0x78
		::System::Action* OnClose; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_SHOW_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_UPDATETEXT_OFFSET))(this);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_HIDE_OFFSET))();
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_CLOSE_OFFSET))(this);
		}

		::System::Void Submit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_SUBMIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REACTIVATEACCOUNT_ONDESTROY_OFFSET))(this);
		}
	};
}
