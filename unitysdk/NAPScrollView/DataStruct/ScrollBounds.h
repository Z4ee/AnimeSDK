#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace System { class Object; }
namespace System { class String; }

#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x774B80)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_EQUALS_OFFSET UNITYSDK_OFFSET(0x774B70)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x774A70)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x7747A0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_GET_END_OFFSET UNITYSDK_OFFSET(0x7746E0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x774A10)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_GET_START_OFFSET UNITYSDK_OFFSET(0x774620)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11BC01A0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x11BC0470)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11BC0290)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x774C50)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7745A0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x42AB90)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x774CA0)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x774D10)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLBOUNDS___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x774D80)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollBounds_TypeDefinitionIndex = 65988;

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
