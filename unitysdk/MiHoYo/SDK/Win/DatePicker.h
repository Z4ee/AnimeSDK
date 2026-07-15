#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class UIManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_DATEPICKER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1567DA20)
#define MIHOYO_SDK_WIN_DATEPICKER_BACK_OFFSET UNITYSDK_OFFSET(0x1567F600)
#define MIHOYO_SDK_WIN_DATEPICKER_CHECKINPUTVALID_1_OFFSET UNITYSDK_OFFSET(0x1567F560)
#define MIHOYO_SDK_WIN_DATEPICKER_CHECKINPUTVALID_OFFSET UNITYSDK_OFFSET(0x1567EFB0)
#define MIHOYO_SDK_WIN_DATEPICKER_CONFIRM_OFFSET UNITYSDK_OFFSET(0x1567F310)
#define MIHOYO_SDK_WIN_DATEPICKER_HIDE_OFFSET UNITYSDK_OFFSET(0x1567F2F0)
#define MIHOYO_SDK_WIN_DATEPICKER_ONCOLLAPSELIST_OFFSET UNITYSDK_OFFSET(0x1567F0D0)
#define MIHOYO_SDK_WIN_DATEPICKER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1567F650)
#define MIHOYO_SDK_WIN_DATEPICKER_ONNOTICEEXPANDDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1567EF60)
#define MIHOYO_SDK_WIN_DATEPICKER_SHOW_OFFSET UNITYSDK_OFFSET(0x1567F120)
#define MIHOYO_SDK_WIN_DATEPICKER_UPDATEPICKER_OFFSET UNITYSDK_OFFSET(0x1567E960)
#define MIHOYO_SDK_WIN_DATEPICKER_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1567EA40)
#define MIHOYO_SDK_WIN_DATEPICKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1567F670)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DatePicker_TypeDefinitionIndex = 8956;

	class DatePicker : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::DatePicker** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::DatePicker**)Il2CppClass::FromTypeDefinitionIndex(DatePicker_TypeDefinitionIndex)->GetStaticField(0x1CE90);
		}
		static ::MiHoYo::SDK::UIManager** StaticGet_manager()
		{
			return (::MiHoYo::SDK::UIManager**)Il2CppClass::FromTypeDefinitionIndex(DatePicker_TypeDefinitionIndex)->GetStaticField(0x1CE98);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* backBtnPath; // 0x0
		// static const ::System::String* titlePath; // 0x0
		// static const ::System::String* hintPath; // 0x0
		// static const ::System::String* monthPickerPath; // 0x0
		// static const ::System::String* monthPickerUpArrowPath; // 0x0
		// static const ::System::String* monthPickerDownArrowPath; // 0x0
		// static const ::System::String* monthPickerTextPath; // 0x0
		// static const ::System::String* monthPickerPlaceHolderPath; // 0x0
		// static const ::System::String* yearPickerTextPath; // 0x0
		// static const ::System::String* yearPickerInputFieldPath; // 0x0
		// static const ::System::String* yearInputText; // 0x0
		// static const ::System::String* yearInputPlaceHolderText; // 0x0
		// static const ::System::String* confirmButtonPath; // 0x0
		// static const ::System::String* confirmButtonTextPath; // 0x0
		// static const ::System::Int32 defaultDay = 0x1; // 0x0
		::UnityEngine::UI::Text* title; // 0x58
		::UnityEngine::UI::Text* hint; // 0x60
		::UnityEngine::UI::Text* monthPickerText; // 0x68
		::UnityEngine::UI::Text* yearPickerText; // 0x70
		::UnityEngine::UI::Dropdown* monthPicker; // 0x78
		::UnityEngine::UI::InputField* yearPicker; // 0x80
		::UnityEngine::GameObject* upArrow; // 0x88
		::UnityEngine::GameObject* downArrow; // 0x90
		::UnityEngine::UI::Text* monthPickerPlaceHolderText; // 0x98
		::UnityEngine::UI::Text* yearPickerInputText; // 0xA0
		::UnityEngine::UI::Text* yearPickerPlaceHolderText; // 0xA8
		::UnityEngine::UI::Button* backBtn; // 0xB0
		::UnityEngine::UI::Button* confirmBtn; // 0xB8
		::UnityEngine::UI::Text* confirmBtnText; // 0xC0
		::System::Action_3<::System::Int32, ::System::Int32, ::System::Int64>* OnConfirm; // 0xC8
		::System::Action* OnBack; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_AWAKE_OFFSET))(this);
		}

		::System::Void OnNoticeExpandDropdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_ONNOTICEEXPANDDROPDOWN_OFFSET))(this);
		}

		::System::Void OnCollapseList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_ONCOLLAPSELIST_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_UPDATETEXT_OFFSET))(this);
		}

		::System::Void UpdatePicker()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_UPDATEPICKER_OFFSET))(this);
		}

		static ::System::Void Show(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_HIDE_OFFSET))();
		}

		::System::Void Confirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_CONFIRM_OFFSET))(this);
		}

		::System::Void CheckInputValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_CHECKINPUTVALID_OFFSET))(this);
		}

		::System::Void CheckInputValid_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_CHECKINPUTVALID_1_OFFSET))(this, a1);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_BACK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DATEPICKER_ONDESTROY_OFFSET))(this);
		}
	};
}
