#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class Object; }

#define FOUNDATION_MYLOGGER_VALUETYPE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x417280)
#define FOUNDATION_MYLOGGER_VALUETYPE_GET_FILTERCOLOR_OFFSET UNITYSDK_OFFSET(0xA41B60)
#define FOUNDATION_MYLOGGER_VALUETYPE_GET_FILTERVALUE_OFFSET UNITYSDK_OFFSET(0x40C750)
#define FOUNDATION_MYLOGGER_VALUETYPE_GET_USINGCOLOR_OFFSET UNITYSDK_OFFSET(0x3E5670)
#define FOUNDATION_MYLOGGER_VALUETYPE_GET_USINGFILTERCOLOR_OFFSET UNITYSDK_OFFSET(0x930880)
#define FOUNDATION_MYLOGGER_VALUETYPE_GET_USINGFILTER_OFFSET UNITYSDK_OFFSET(0x591800)
#define FOUNDATION_MYLOGGER_VALUETYPE_GET_VAL_OFFSET UNITYSDK_OFFSET(0x246290)
#define FOUNDATION_MYLOGGER_VALUETYPE_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x92A7C0)
#define FOUNDATION_MYLOGGER_VALUETYPE_SET_FILTERCOLOR_OFFSET UNITYSDK_OFFSET(0xA41B70)
#define FOUNDATION_MYLOGGER_VALUETYPE_SET_FILTERVALUE_OFFSET UNITYSDK_OFFSET(0x6B3130)
#define FOUNDATION_MYLOGGER_VALUETYPE_SET_USINGCOLOR_OFFSET UNITYSDK_OFFSET(0x5C9410)
#define FOUNDATION_MYLOGGER_VALUETYPE_SET_USINGFILTERCOLOR_OFFSET UNITYSDK_OFFSET(0x930890)
#define FOUNDATION_MYLOGGER_VALUETYPE_SET_USINGFILTER_OFFSET UNITYSDK_OFFSET(0xA41B50)
#define FOUNDATION_MYLOGGER_VALUETYPE_SET_VAL_OFFSET UNITYSDK_OFFSET(0x2B6D10)
#define FOUNDATION_MYLOGGER_VALUETYPE_VALUEASSERT_OFFSET UNITYSDK_OFFSET(0x1DDABCE0)
#define FOUNDATION_MYLOGGER_VALUETYPE_VALUEFILTER_1_OFFSET UNITYSDK_OFFSET(0x1DDABE70)
#define FOUNDATION_MYLOGGER_VALUETYPE_VALUEFILTER_OFFSET UNITYSDK_OFFSET(0x1DDABDC0)
#define FOUNDATION_MYLOGGER_VALUETYPE_VALUE_OFFSET UNITYSDK_OFFSET(0x1DDABC40)

namespace Foundation
{
	inline static constexpr unsigned int MyLogger_ValueType_TypeDefinitionIndex = 7935;

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
