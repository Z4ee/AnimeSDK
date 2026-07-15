#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_CHANGEDROPDOWNVALUE_OFFSET UNITYSDK_OFFSET(0x1AA2FE40)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_CLOSEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1AA2FED0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_FIREDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1AA2EDC0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GETDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x1AA2F740)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GETDROPDOWNREPEATRATE_OFFSET UNITYSDK_OFFSET(0x1AA2F9C0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GET_FOCUSEDDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1AA2F980)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GET_ISWRAPAROUND_OFFSET UNITYSDK_OFFSET(0x1AA2F9A0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_INITIALIZEDROPDOWNITEMS_OFFSET UNITYSDK_OFFSET(0x1AA2EF90)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SCROLLTOSELECTEDITEM_OFFSET UNITYSDK_OFFSET(0x1AA2F9E0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SET_FOCUSEDDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1AA2F990)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SET_ISWRAPAROUND_OFFSET UNITYSDK_OFFSET(0x1AA2F9B0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_UPDATEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1AA2EFE0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA2ED80)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int SDKUIDropdownControl_TypeDefinitionIndex = 8627;

	class SDKUIDropdownControl : public ::System::Object
	{
	public:
		// static const ::System::Single inputRepeatDelay; // 0x0
		// static const ::System::Single inputRepeatRate; // 0x0
		// static const ::System::Single accelerationInterval; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::UI::Toggle*>* dropdownItems; // 0x10
		::UnityEngine::UI::Dropdown* _focusedDropdown_k__BackingField; // 0x18
		::UnityEngine::UI::ScrollRect* dropdownScrollRect; // 0x20
		::System::Int32 maxStep; // 0x28
		::System::Int32 lastInputDirection; // 0x2C
		::System::Single lastInputTime; // 0x30
		::System::Int32 step; // 0x34
		::System::Boolean _IsWrapAround_k__BackingField; // 0x38
		::System::Boolean justOpenDropDown; // 0x39
		::System::Boolean isTransitioning; // 0x3A
		::System::Single inputHoldTime; // 0x3C
		::System::Int32 focusedDropdownValue; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Dropdown* get_focusedDropdown()
		{
			return ((::UnityEngine::UI::Dropdown*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GET_FOCUSEDDROPDOWN_OFFSET))(this);
		}

		::System::Void set_focusedDropdown(::UnityEngine::UI::Dropdown* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Dropdown*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SET_FOCUSEDDROPDOWN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWrapAround()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GET_ISWRAPAROUND_OFFSET))(this);
		}

		::System::Void set_IsWrapAround(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SET_ISWRAPAROUND_OFFSET))(this, a1);
		}

		static ::System::Single GetDropdownRepeatRate(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GETDROPDOWNREPEATRATE_OFFSET))(a1);
		}

		::System::Void ScrollToSelectedItem(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SCROLLTOSELECTEDITEM_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::GameObject* GetDropDownList(::UnityEngine::UI::Dropdown* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::Dropdown*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GETDROPDOWNLIST_OFFSET))(a1);
		}

		::System::Collections::IEnumerator* InitializeDropdownItems()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_INITIALIZEDROPDOWNITEMS_OFFSET))(this);
		}

		::System::Void ChangeDropdownValue(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_CHANGEDROPDOWNVALUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean FireDropdown(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_FIREDROPDOWN_OFFSET))(this, a1);
		}

		::System::Void CloseDropdown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_CLOSEDROPDOWN_OFFSET))(this, a1);
		}

		::System::Boolean UpdateDropdown(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_UPDATEDROPDOWN_OFFSET))(this, a1);
		}
	};
}
