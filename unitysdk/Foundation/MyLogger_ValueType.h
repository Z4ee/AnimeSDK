#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Object; }

#define FOUNDATION_MYLOGGER_VALUETYPE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x4963E0)
#define FOUNDATION_MYLOGGER_VALUETYPE_GET_FILTERCOLOR_OFFSET UNITYSDK_OFFSET(0xA8DF20)
#define FOUNDATION_MYLOGGER_VALUETYPE_GET_FILTERVALUE_OFFSET UNITYSDK_OFFSET(0x3D1A20)
#define FOUNDATION_MYLOGGER_VALUETYPE_GET_USINGCOLOR_OFFSET UNITYSDK_OFFSET(0x41FD70)
#define FOUNDATION_MYLOGGER_VALUETYPE_GET_USINGFILTERCOLOR_OFFSET UNITYSDK_OFFSET(0x96CAB0)
#define FOUNDATION_MYLOGGER_VALUETYPE_GET_USINGFILTER_OFFSET UNITYSDK_OFFSET(0x463380)
#define FOUNDATION_MYLOGGER_VALUETYPE_GET_VAL_OFFSET UNITYSDK_OFFSET(0x259D70)
#define FOUNDATION_MYLOGGER_VALUETYPE_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x97A350)
#define FOUNDATION_MYLOGGER_VALUETYPE_SET_FILTERCOLOR_OFFSET UNITYSDK_OFFSET(0xA8DF30)
#define FOUNDATION_MYLOGGER_VALUETYPE_SET_FILTERVALUE_OFFSET UNITYSDK_OFFSET(0x7BA870)
#define FOUNDATION_MYLOGGER_VALUETYPE_SET_USINGCOLOR_OFFSET UNITYSDK_OFFSET(0x622AD0)
#define FOUNDATION_MYLOGGER_VALUETYPE_SET_USINGFILTERCOLOR_OFFSET UNITYSDK_OFFSET(0x96CAC0)
#define FOUNDATION_MYLOGGER_VALUETYPE_SET_USINGFILTER_OFFSET UNITYSDK_OFFSET(0xA8DF10)
#define FOUNDATION_MYLOGGER_VALUETYPE_SET_VAL_OFFSET UNITYSDK_OFFSET(0x324D50)
#define FOUNDATION_MYLOGGER_VALUETYPE_VALUEASSERT_OFFSET UNITYSDK_OFFSET(0x1F0A5E40)
#define FOUNDATION_MYLOGGER_VALUETYPE_VALUEFILTER_1_OFFSET UNITYSDK_OFFSET(0x1F0A5FD0)
#define FOUNDATION_MYLOGGER_VALUETYPE_VALUEFILTER_OFFSET UNITYSDK_OFFSET(0x1F0A5F20)
#define FOUNDATION_MYLOGGER_VALUETYPE_VALUE_OFFSET UNITYSDK_OFFSET(0x1F0A5DA0)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger_ValueType_TypeDefinitionIndex = 8374;

	struct alignas(8) MyLogger_ValueType
	{
		::System::Object* _Val_k__BackingField; // 0x10
		::System::Boolean _UsingColor_k__BackingField; // 0x18
		::UnityEngine::Color _Color_k__BackingField; // 0x1C
		::System::Boolean _UsingFilter_k__BackingField; // 0x2C
		::System::Object* _FilterValue_k__BackingField; // 0x30
		::System::Boolean _UsingFilterColor_k__BackingField; // 0x38
		::UnityEngine::Color _FilterColor_k__BackingField; // 0x3C

		static ::Foundation::MyLogger_ValueType Value(::System::Object* val)
		{
			return ((::Foundation::MyLogger_ValueType(*)(::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_VALUE_OFFSET))(val);
		}

		static ::Foundation::MyLogger_ValueType ValueAssert(::System::Object* val, ::UnityEngine::Color color)
		{
			return ((::Foundation::MyLogger_ValueType(*)(::System::Object*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_VALUEASSERT_OFFSET))(val, color);
		}

		static ::Foundation::MyLogger_ValueType ValueFilter(::System::Object* val, ::System::Object* filterValue)
		{
			return ((::Foundation::MyLogger_ValueType(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_VALUEFILTER_OFFSET))(val, filterValue);
		}

		static ::Foundation::MyLogger_ValueType ValueFilter_1(::System::Object* val, ::System::Object* filterValue, ::UnityEngine::Color color)
		{
			return ((::Foundation::MyLogger_ValueType(*)(::System::Object*, ::System::Object*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_VALUEFILTER_1_OFFSET))(val, filterValue, color);
		}

		::System::Object* get_Val()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_GET_VAL_OFFSET))(this);
		}

		::System::Void set_Val(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_SET_VAL_OFFSET))(this, value);
		}

		::System::Boolean get_UsingColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_GET_USINGCOLOR_OFFSET))(this);
		}

		::System::Void set_UsingColor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_SET_USINGCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_Color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_Color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_SET_COLOR_OFFSET))(this, value);
		}

		::System::Boolean get_UsingFilter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_GET_USINGFILTER_OFFSET))(this);
		}

		::System::Void set_UsingFilter(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_SET_USINGFILTER_OFFSET))(this, value);
		}

		::System::Object* get_FilterValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_GET_FILTERVALUE_OFFSET))(this);
		}

		::System::Void set_FilterValue(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_SET_FILTERVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_UsingFilterColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_GET_USINGFILTERCOLOR_OFFSET))(this);
		}

		::System::Void set_UsingFilterColor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_SET_USINGFILTERCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_FilterColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_GET_FILTERCOLOR_OFFSET))(this);
		}

		::System::Void set_FilterColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FOUNDATION_MYLOGGER_VALUETYPE_SET_FILTERCOLOR_OFFSET))(this, value);
		}
	};
}
