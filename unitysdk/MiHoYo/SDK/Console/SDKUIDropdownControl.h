#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class ScrollRect; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_CHANGEDROPDOWNVALUE_OFFSET UNITYSDK_OFFSET(0x174F8BF0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_CLOSEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x174F8C80)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_FIREDROPDOWN_OFFSET UNITYSDK_OFFSET(0x174F75D0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GETDROPDOWNLIST_OFFSET UNITYSDK_OFFSET(0x174F85E0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GETDROPDOWNREPEATRATE_OFFSET UNITYSDK_OFFSET(0x174F8840)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GET_FOCUSEDDROPDOWN_OFFSET UNITYSDK_OFFSET(0x174F8800)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GET_ISWRAPAROUND_OFFSET UNITYSDK_OFFSET(0x174F8820)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_INITIALIZEDROPDOWNITEMS_OFFSET UNITYSDK_OFFSET(0x174F77B0)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SCROLLTOSELECTEDITEM_OFFSET UNITYSDK_OFFSET(0x174F8860)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SET_FOCUSEDDROPDOWN_OFFSET UNITYSDK_OFFSET(0x174F8810)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SET_ISWRAPAROUND_OFFSET UNITYSDK_OFFSET(0x174F8830)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_UPDATEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x174F7800)
#define MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x174F7590)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int SDKUIDropdownControl_TypeDefinitionIndex = 7712;

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
		::System::Single inputHoldTime; // 0x2C
		::System::Single lastInputTime; // 0x30
		::System::Boolean justOpenDropDown; // 0x34
		::System::Boolean _IsWrapAround_k__BackingField; // 0x35
		::System::Boolean isTransitioning; // 0x36
		::System::Int32 focusedDropdownValue; // 0x38
		::System::Int32 lastInputDirection; // 0x3C
		::System::Int32 step; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Dropdown* get_focusedDropdown()
		{
			return ((::UnityEngine::UI::Dropdown*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GET_FOCUSEDDROPDOWN_OFFSET))(this);
		}

		::System::Void set_focusedDropdown(::UnityEngine::UI::Dropdown* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Dropdown*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SET_FOCUSEDDROPDOWN_OFFSET))(this, value);
		}

		::System::Boolean get_IsWrapAround()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GET_ISWRAPAROUND_OFFSET))(this);
		}

		::System::Void set_IsWrapAround(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SET_ISWRAPAROUND_OFFSET))(this, value);
		}

		static ::System::Single GetDropdownRepeatRate(::System::Single holdTime)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GETDROPDOWNREPEATRATE_OFFSET))(holdTime);
		}

		::System::Void ScrollToSelectedItem(::System::Int32 index, ::System::Int32 inputDirection)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_SCROLLTOSELECTEDITEM_OFFSET))(this, index, inputDirection);
		}

		static ::UnityEngine::GameObject* GetDropDownList(::UnityEngine::UI::Dropdown* dropDown)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::Dropdown*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_GETDROPDOWNLIST_OFFSET))(dropDown);
		}

		::System::Collections::IEnumerator* InitializeDropdownItems()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_INITIALIZEDROPDOWNITEMS_OFFSET))(this);
		}

		::System::Void ChangeDropdownValue(::System::Int32 direction, ::System::Int32 step)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_CHANGEDROPDOWNVALUE_OFFSET))(this, direction, step);
		}

		::System::Boolean FireDropdown(::UnityEngine::GameObject* highlightedObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_FIREDROPDOWN_OFFSET))(this, highlightedObject);
		}

		::System::Void CloseDropdown(::System::Boolean updateSelection)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_CLOSEDROPDOWN_OFFSET))(this, updateSelection);
		}

		::System::Boolean UpdateDropdown(::UnityEngine::GameObject* dropdownObj)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_SDKUIDROPDOWNCONTROL_UPDATEDROPDOWN_OFFSET))(this, dropdownObj);
		}
	};
}
