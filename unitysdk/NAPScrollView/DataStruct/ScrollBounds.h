#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System { class Object; }
namespace System { class String; }

#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7BEB20)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_EQUALS_OFFSET UNITYSDK_OFFSET(0x7BEB10)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7BEA20)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x7BE750)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_GET_END_OFFSET UNITYSDK_OFFSET(0x7BE690)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x7BE9C0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_GET_START_OFFSET UNITYSDK_OFFSET(0x7BE5D0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x139EB8F0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x139EBBC0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x139EB9E0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7BEBF0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7BE550)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x41CC40)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x7BEC40)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7BECB0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7BED20)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollBounds_TypeDefinitionIndex = 55270;

	struct alignas(4) ScrollBounds
	{
		::UnityEngine::Bounds _bounds; // 0x10
		::System::Boolean _vertical; // 0x28

		::System::Void _ctor(::UnityEngine::Bounds bounds, ::System::Boolean vertical)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS__CTOR_OFFSET))(this, bounds, vertical);
		}

		::System::Void _ctor_1(::System::Single start, ::System::Single end, ::System::Boolean vertical)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS__CTOR_1_OFFSET))(this, start, end, vertical);
		}

		/*
		::NAPScrollView::DataStruct::ScrollFloat get_Start()
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_GET_START_OFFSET))(this);
		}
		*/

		/*
		::NAPScrollView::DataStruct::ScrollFloat get_End()
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_GET_END_OFFSET))(this);
		}
		*/

		/*
		::NAPScrollView::DataStruct::ScrollFloat get_Center()
		{
			return ((::NAPScrollView::DataStruct::ScrollFloat(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_GET_CENTER_OFFSET))(this);
		}
		*/

		::System::Single get_Size()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_GET_SIZE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::NAPScrollView::DataStruct::ScrollBounds other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAPScrollView::DataStruct::ScrollBounds))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::NAPScrollView::DataStruct::ScrollBounds lhs, ::NAPScrollView::DataStruct::ScrollBounds rhs)
		{
			return ((::System::Boolean(*)(::NAPScrollView::DataStruct::ScrollBounds, ::NAPScrollView::DataStruct::ScrollBounds))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::NAPScrollView::DataStruct::ScrollBounds lhs, ::NAPScrollView::DataStruct::ScrollBounds rhs)
		{
			return ((::System::Boolean(*)(::NAPScrollView::DataStruct::ScrollBounds, ::NAPScrollView::DataStruct::ScrollBounds))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_TOSTRING_OFFSET))(this);
		}

		static ::UnityEngine::Bounds op_Implicit(::NAPScrollView::DataStruct::ScrollBounds scrollFloat)
		{
			return ((::UnityEngine::Bounds(*)(::NAPScrollView::DataStruct::ScrollBounds))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_OP_IMPLICIT_OFFSET))(scrollFloat);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
