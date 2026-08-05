#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_GET_MAXMEMBER_OFFSET UNITYSDK_OFFSET(0x1F770D30)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_GET_MINMAXMEMBER_OFFSET UNITYSDK_OFFSET(0x1F770D50)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_GET_MINMEMBER_OFFSET UNITYSDK_OFFSET(0x1F770D10)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_SET_MAXMEMBER_OFFSET UNITYSDK_OFFSET(0x1F770D40)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_SET_MINMAXMEMBER_OFFSET UNITYSDK_OFFSET(0x1F770D60)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_SET_MINMEMBER_OFFSET UNITYSDK_OFFSET(0x1F770D20)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F770D80)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F770D90)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F770DA0)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1F770DB0)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F770D70)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int MinMaxSliderAttribute_TypeDefinitionIndex = 7332;

	class MinMaxSliderAttribute : public ::System::Attribute
	{
	public:
		::System::String* MaxValueGetter; // 0x10
		::System::String* MinMaxValueGetter; // 0x18
		::System::String* MinValueGetter; // 0x20
		::System::Boolean ShowFields; // 0x28
		::System::Single MinValue; // 0x2C
		::System::Single MaxValue; // 0x30

		::System::Void _ctor(::System::Single minValue, ::System::Single maxValue, ::System::Boolean showFields)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE__CTOR_OFFSET))(this, minValue, maxValue, showFields);
		}

		::System::Void _ctor_1(::System::String* minValueGetter, ::System::Single maxValue, ::System::Boolean showFields)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE__CTOR_1_OFFSET))(this, minValueGetter, maxValue, showFields);
		}

		::System::Void _ctor_2(::System::Single minValue, ::System::String* maxValueGetter, ::System::Boolean showFields)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE__CTOR_2_OFFSET))(this, minValue, maxValueGetter, showFields);
		}

		::System::Void _ctor_3(::System::String* minValueGetter, ::System::String* maxValueGetter, ::System::Boolean showFields)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE__CTOR_3_OFFSET))(this, minValueGetter, maxValueGetter, showFields);
		}

		::System::Void _ctor_4(::System::String* minMaxValueGetter, ::System::Boolean showFields)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE__CTOR_4_OFFSET))(this, minMaxValueGetter, showFields);
		}

		::System::String* get_MinMember()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_GET_MINMEMBER_OFFSET))(this);
		}

		::System::Void set_MinMember(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_SET_MINMEMBER_OFFSET))(this, value);
		}

		::System::String* get_MaxMember()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_GET_MAXMEMBER_OFFSET))(this);
		}

		::System::Void set_MaxMember(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_SET_MAXMEMBER_OFFSET))(this, value);
		}

		::System::String* get_MinMaxMember()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_GET_MINMAXMEMBER_OFFSET))(this);
		}

		::System::Void set_MinMaxMember(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_SET_MINMAXMEMBER_OFFSET))(this, value);
		}
	};
}
