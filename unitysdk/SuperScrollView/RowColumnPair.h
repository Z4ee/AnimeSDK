#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SUPERSCROLLVIEW_ROWCOLUMNPAIR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xE5B10)
#define SUPERSCROLLVIEW_ROWCOLUMNPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0xE5A60)
#define SUPERSCROLLVIEW_ROWCOLUMNPAIR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE5AC0)
#define SUPERSCROLLVIEW_ROWCOLUMNPAIR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB9940B0)
#define SUPERSCROLLVIEW_ROWCOLUMNPAIR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB994110)
#define SUPERSCROLLVIEW_ROWCOLUMNPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x73E20)
#define SUPERSCROLLVIEW_ROWCOLUMNPAIR___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xE5B60)
#define SUPERSCROLLVIEW_ROWCOLUMNPAIR___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE5B20)

namespace SuperScrollView
{
	inline static constexpr unsigned int RowColumnPair_TypeDefinitionIndex = 44377;

	struct alignas(4) RowColumnPair
	{
		::System::Int32 mRow; // 0x10
		::System::Int32 mColumn; // 0x14

		::System::Void _ctor(::System::Int32 row1, ::System::Int32 column1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNPAIR__CTOR_OFFSET))(this, row1, column1);
		}

		::System::Boolean Equals(::SuperScrollView::RowColumnPair other)
		{
			return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::RowColumnPair))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNPAIR_EQUALS_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::SuperScrollView::RowColumnPair a, ::SuperScrollView::RowColumnPair b)
		{
			return ((::System::Boolean(*)(::SuperScrollView::RowColumnPair, ::SuperScrollView::RowColumnPair))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNPAIR_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::SuperScrollView::RowColumnPair a, ::SuperScrollView::RowColumnPair b)
		{
			return ((::System::Boolean(*)(::SuperScrollView::RowColumnPair, ::SuperScrollView::RowColumnPair))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNPAIR_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNPAIR_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNPAIR_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNPAIR___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNPAIR___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}
	};
}
