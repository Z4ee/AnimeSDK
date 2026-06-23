#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_GET_MAXMEMBER_OFFSET UNITYSDK_OFFSET(0x1E3299A0)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_GET_MINMAXMEMBER_OFFSET UNITYSDK_OFFSET(0x1E3299C0)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_GET_MINMEMBER_OFFSET UNITYSDK_OFFSET(0x1E329980)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_SET_MAXMEMBER_OFFSET UNITYSDK_OFFSET(0x1E3299B0)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_SET_MINMAXMEMBER_OFFSET UNITYSDK_OFFSET(0x1E3299D0)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE_SET_MINMEMBER_OFFSET UNITYSDK_OFFSET(0x1E329990)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3299F0)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E329A00)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E329A10)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1E329A20)
#define SIRENIX_ODININSPECTOR_MINMAXSLIDERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3299E0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int MinMaxSliderAttribute_TypeDefinitionIndex = 7328;

	class MinMaxSliderAttribute : public ::System::Attribute
	{
	public:
		::System::String* MinMaxValueGetter; // 0x10
		::System::String* MaxValueGetter; // 0x18
		::System::String* MinValueGetter; // 0x20
		::System::Boolean ShowFields; // 0x28
		::System::Single MaxValue; // 0x2C
		::System::Single MinValue; // 0x30

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
