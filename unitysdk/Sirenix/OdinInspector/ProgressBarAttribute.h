#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/TextAlignment.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_BACKGROUNDCOLORMEMBER_OFFSET UNITYSDK_OFFSET(0x1F770FF0)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_COLORMEMBER_OFFSET UNITYSDK_OFFSET(0x1F770FD0)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1F7711B0)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_CUSTOMVALUESTRINGMEMBER_OFFSET UNITYSDK_OFFSET(0x1F771010)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_DRAWVALUELABELHASVALUE_OFFSET UNITYSDK_OFFSET(0x1F771150)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_DRAWVALUELABEL_OFFSET UNITYSDK_OFFSET(0x1F771130)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_MAXMEMBER_OFFSET UNITYSDK_OFFSET(0x1F770FB0)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_MINMEMBER_OFFSET UNITYSDK_OFFSET(0x1F770F90)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_VALUELABELALIGNMENTHASVALUE_OFFSET UNITYSDK_OFFSET(0x1F771190)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_VALUELABELALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1F771170)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_BACKGROUNDCOLORMEMBER_OFFSET UNITYSDK_OFFSET(0x1F771000)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_COLORMEMBER_OFFSET UNITYSDK_OFFSET(0x1F770FE0)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_CUSTOMVALUESTRINGMEMBER_OFFSET UNITYSDK_OFFSET(0x1F771020)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_DRAWVALUELABELHASVALUE_OFFSET UNITYSDK_OFFSET(0x1F771160)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_DRAWVALUELABEL_OFFSET UNITYSDK_OFFSET(0x1F771140)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_MAXMEMBER_OFFSET UNITYSDK_OFFSET(0x1F770FC0)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_MINMEMBER_OFFSET UNITYSDK_OFFSET(0x1F770FA0)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_VALUELABELALIGNMENTHASVALUE_OFFSET UNITYSDK_OFFSET(0x1F7711A0)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_VALUELABELALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1F771180)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F771070)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F7710B0)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F7710F0)
#define SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F771030)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ProgressBarAttribute_TypeDefinitionIndex = 7343;

	class ProgressBarAttribute : public ::System::Attribute
	{
	public:
		::System::String* ColorGetter; // 0x10
		::System::String* MaxGetter; // 0x18
		::System::String* MinGetter; // 0x20
		::System::String* BackgroundColorGetter; // 0x28
		::System::String* CustomValueStringGetter; // 0x30
		::System::Double Max; // 0x38
		::UnityEngine::TextAlignment valueLabelAlignment; // 0x40
		::System::Single R; // 0x44
		::System::Double Min; // 0x48
		::System::Single B; // 0x50
		::System::Int32 Height; // 0x54
		::System::Boolean drawValueLabel; // 0x58
		::System::Boolean Segmented; // 0x59
		::System::Boolean _DrawValueLabelHasValue_k__BackingField; // 0x5A
		::System::Boolean _ValueLabelAlignmentHasValue_k__BackingField; // 0x5B
		::System::Single G; // 0x5C

		::System::Void _ctor(::System::Double min, ::System::Double max, ::System::Single r, ::System::Single g, ::System::Single b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE__CTOR_OFFSET))(this, min, max, r, g, b);
		}

		::System::Void _ctor_1(::System::String* minGetter, ::System::Double max, ::System::Single r, ::System::Single g, ::System::Single b)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE__CTOR_1_OFFSET))(this, minGetter, max, r, g, b);
		}

		::System::Void _ctor_2(::System::Double min, ::System::String* maxGetter, ::System::Single r, ::System::Single g, ::System::Single b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE__CTOR_2_OFFSET))(this, min, maxGetter, r, g, b);
		}

		::System::Void _ctor_3(::System::String* minGetter, ::System::String* maxGetter, ::System::Single r, ::System::Single g, ::System::Single b)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE__CTOR_3_OFFSET))(this, minGetter, maxGetter, r, g, b);
		}

		::System::String* get_MinMember()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_MINMEMBER_OFFSET))(this);
		}

		::System::Void set_MinMember(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_MINMEMBER_OFFSET))(this, value);
		}

		::System::String* get_MaxMember()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_MAXMEMBER_OFFSET))(this);
		}

		::System::Void set_MaxMember(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_MAXMEMBER_OFFSET))(this, value);
		}

		::System::String* get_ColorMember()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_COLORMEMBER_OFFSET))(this);
		}

		::System::Void set_ColorMember(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_COLORMEMBER_OFFSET))(this, value);
		}

		::System::String* get_BackgroundColorMember()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_BACKGROUNDCOLORMEMBER_OFFSET))(this);
		}

		::System::Void set_BackgroundColorMember(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_BACKGROUNDCOLORMEMBER_OFFSET))(this, value);
		}

		::System::String* get_CustomValueStringMember()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_CUSTOMVALUESTRINGMEMBER_OFFSET))(this);
		}

		::System::Void set_CustomValueStringMember(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_CUSTOMVALUESTRINGMEMBER_OFFSET))(this, value);
		}

		::System::Boolean get_DrawValueLabel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_DRAWVALUELABEL_OFFSET))(this);
		}

		::System::Void set_DrawValueLabel(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_DRAWVALUELABEL_OFFSET))(this, value);
		}

		::System::Boolean get_DrawValueLabelHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_DRAWVALUELABELHASVALUE_OFFSET))(this);
		}

		::System::Void set_DrawValueLabelHasValue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_DRAWVALUELABELHASVALUE_OFFSET))(this, value);
		}

		::UnityEngine::TextAlignment get_ValueLabelAlignment()
		{
			return ((::UnityEngine::TextAlignment(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_VALUELABELALIGNMENT_OFFSET))(this);
		}

		::System::Void set_ValueLabelAlignment(::UnityEngine::TextAlignment value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TextAlignment))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_VALUELABELALIGNMENT_OFFSET))(this, value);
		}

		::System::Boolean get_ValueLabelAlignmentHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_VALUELABELALIGNMENTHASVALUE_OFFSET))(this);
		}

		::System::Void set_ValueLabelAlignmentHasValue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_SET_VALUELABELALIGNMENTHASVALUE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_Color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_PROGRESSBARATTRIBUTE_GET_COLOR_OFFSET))(this);
		}
	};
}
