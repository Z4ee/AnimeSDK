#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SIRENIX_ODININSPECTOR_IVALUEDROPDOWNITEM_GETSELECTEDTEXT_OFFSET UNITYSDK_OFFSET(0x53E1B0)
#define SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SIRENIX_ODININSPECTOR_IVALUEDROPDOWNITEM_GETTEXT_OFFSET UNITYSDK_OFFSET(0x259D70)
#define SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SIRENIX_ODININSPECTOR_IVALUEDROPDOWNITEM_GETVALUE_OFFSET UNITYSDK_OFFSET(0x3C9DA0)
#define SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x69F550)
#define SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x5E76D0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ValueDropdownItem_TypeDefinitionIndex = 7386;

	struct alignas(8) ValueDropdownItem
	{
		::System::String* Text; // 0x10
		::System::String* SelectedText; // 0x18
		::System::Object* Value; // 0x20

		::System::Void _ctor(::System::String* text, ::System::Object* value, ::System::String* selectedText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM__CTOR_OFFSET))(this, text, value, selectedText);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_TOSTRING_OFFSET))(this);
		}

		::System::String* Sirenix_OdinInspector_IValueDropdownItem_GetText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SIRENIX_ODININSPECTOR_IVALUEDROPDOWNITEM_GETTEXT_OFFSET))(this);
		}

		::System::String* Sirenix_OdinInspector_IValueDropdownItem_GetSelectedText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SIRENIX_ODININSPECTOR_IVALUEDROPDOWNITEM_GETSELECTEDTEXT_OFFSET))(this);
		}

		::System::Object* Sirenix_OdinInspector_IValueDropdownItem_GetValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SIRENIX_ODININSPECTOR_IVALUEDROPDOWNITEM_GETVALUE_OFFSET))(this);
		}
	};
}
