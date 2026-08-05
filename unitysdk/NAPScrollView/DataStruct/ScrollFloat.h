#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ABS_OFFSET UNITYSDK_OFFSET(0x12B4F130)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ADD_1_OFFSET UNITYSDK_OFFSET(0x7BB660)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ADD_OFFSET UNITYSDK_OFFSET(0x7BB5F0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_AVG_OFFSET UNITYSDK_OFFSET(0x12B4F0D0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_DELTA_OFFSET UNITYSDK_OFFSET(0x7BB570)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_DIV_OFFSET UNITYSDK_OFFSET(0x7BB760)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_END_OFFSET UNITYSDK_OFFSET(0x12B4ED80)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7BB870)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x7BB7E0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7BB880)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ISENDEQUALTHAN_OFFSET UNITYSDK_OFFSET(0x7BB400)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ISENDTHAN_OFFSET UNITYSDK_OFFSET(0x7BB390)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ISSTARTEQUALTHAN_OFFSET UNITYSDK_OFFSET(0x7BB320)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ISSTARTTHAN_OFFSET UNITYSDK_OFFSET(0x7BB2B0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_LERPUNCLAMPED_OFFSET UNITYSDK_OFFSET(0x12B4EFE0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_LERP_OFFSET UNITYSDK_OFFSET(0x12B4EE90)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_MUL_OFFSET UNITYSDK_OFFSET(0x7BB6F0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x12B4F9B0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x12B4EFA0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x12B4FA70)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_SIGN_OFFSET UNITYSDK_OFFSET(0x7BB7D0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_START_OFFSET UNITYSDK_OFFSET(0x12B4EC70)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_SUB_1_OFFSET UNITYSDK_OFFSET(0x7BB6E0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_SUB_OFFSET UNITYSDK_OFFSET(0x7BB670)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_TOEND_OFFSET UNITYSDK_OFFSET(0x7BB4F0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_TOSTART_OFFSET UNITYSDK_OFFSET(0x7BB470)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7BB240)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x7BB220)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7BB8F0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7BB950)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7BB9B0)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollFloat_TypeDefinitionIndex = 72113;

	struct alignas(4) ScrollFloat
	{
		::System::Single value; // 0x10
		::System::Boolean _vertical; // 0x14

		::System::Void _ctor(::System::Single value, ::System::Boolean vertical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT__CTOR_OFFSET))(this, value, vertical);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_TOSTRING_OFFSET))(this);
		}

		static ::NAPScrollView::DataStruct::ScrollFloat Start(::NAPScrollView::DataStruct::ScrollFloat a, ::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_START_OFFSET))(a, b);
		}

		static ::NAPScrollView::DataStruct::ScrollFloat End(::NAPScrollView::DataStruct::ScrollFloat a, ::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_END_OFFSET))(a, b);
		}

		static ::NAPScrollView::DataStruct::ScrollFloat Lerp(::NAPScrollView::DataStruct::ScrollFloat a, ::NAPScrollView::DataStruct::ScrollFloat b, ::System::Single t)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_LERP_OFFSET))(a, b, t);
		}

		static ::NAPScrollView::DataStruct::ScrollFloat LerpUnclamped(::NAPScrollView::DataStruct::ScrollFloat a, ::NAPScrollView::DataStruct::ScrollFloat b, ::System::Single t)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_LERPUNCLAMPED_OFFSET))(a, b, t);
		}

		static ::NAPScrollView::DataStruct::ScrollFloat Avg(::NAPScrollView::DataStruct::ScrollFloat a, ::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_AVG_OFFSET))(a, b);
		}

		static ::NAPScrollView::DataStruct::ScrollFloat Abs(::NAPScrollView::DataStruct::ScrollFloat a)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ABS_OFFSET))(a);
		}

		::System::Boolean IsStartThan(::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ISSTARTTHAN_OFFSET))(this, b);
		}

		::System::Boolean IsStartEqualThan(::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ISSTARTEQUALTHAN_OFFSET))(this, b);
		}

		::System::Boolean IsEndThan(::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ISENDTHAN_OFFSET))(this, b);
		}

		::System::Boolean IsEndEqualThan(::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ISENDEQUALTHAN_OFFSET))(this, b);
		}

		::NAPScrollView::DataStruct::ScrollFloat ToStart(::System::Single delta)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_TOSTART_OFFSET))(this, delta);
		}

		::NAPScrollView::DataStruct::ScrollFloat ToEnd(::System::Single delta)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_TOEND_OFFSET))(this, delta);
		}

		::NAPScrollView::DataStruct::ScrollFloat Delta(::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_DELTA_OFFSET))(this, b);
		}

		::NAPScrollView::DataStruct::ScrollFloat Add(::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ADD_OFFSET))(this, b);
		}

		::NAPScrollView::DataStruct::ScrollFloat Add_1(::System::Single b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_ADD_1_OFFSET))(this, b);
		}

		::NAPScrollView::DataStruct::ScrollFloat Sub(::NAPScrollView::DataStruct::ScrollFloat b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_SUB_OFFSET))(this, b);
		}

		::NAPScrollView::DataStruct::ScrollFloat Sub_1(::System::Single b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_SUB_1_OFFSET))(this, b);
		}

		::NAPScrollView::DataStruct::ScrollFloat Mul(::System::Single b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_MUL_OFFSET))(this, b);
		}

		::NAPScrollView::DataStruct::ScrollFloat Div(::System::Single b)
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_DIV_OFFSET))(this, b);
		}

		::NAPScrollView::DataStruct::ScrollFloat Sign()
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_SIGN_OFFSET))(this);
		}

		static ::System::Single op_Implicit(::NAPScrollView::DataStruct::ScrollFloat scrollFloat)
		{
			return ((::System::Single(*)(::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_OP_IMPLICIT_OFFSET))(scrollFloat);
		}

		::System::Boolean Equals(::NAPScrollView::DataStruct::ScrollFloat other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::NAPScrollView::DataStruct::ScrollFloat left, ::NAPScrollView::DataStruct::ScrollFloat right)
		{
			return ((::System::Boolean(*)(::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::NAPScrollView::DataStruct::ScrollFloat left, ::NAPScrollView::DataStruct::ScrollFloat right)
		{
			return ((::System::Boolean(*)(::NAPScrollView::DataStruct::ScrollFloat, ::NAPScrollView::DataStruct::ScrollFloat))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT_OP_INEQUALITY_OFFSET))(left, right);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLFLOAT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
