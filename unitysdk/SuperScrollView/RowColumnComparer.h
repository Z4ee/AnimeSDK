#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/RowColumnPair.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_ROWCOLUMNCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0xD0DD6B0)
#define SUPERSCROLLVIEW_ROWCOLUMNCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xD0DD710)
#define SUPERSCROLLVIEW_ROWCOLUMNCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD0DD780)
#define SUPERSCROLLVIEW_ROWCOLUMNCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xD0DD770)

namespace SuperScrollView
{
	inline static constexpr unsigned int RowColumnComparer_TypeDefinitionIndex = 44924;

	class RowColumnComparer : public ::System::Object
	{
	public:
		static ::SuperScrollView::RowColumnComparer** StaticGet_comparer()
		{
			return (::SuperScrollView::RowColumnComparer**)Il2CppClass::FromTypeDefinitionIndex(RowColumnComparer_TypeDefinitionIndex)->GetStaticField(0x11450);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::SuperScrollView::RowColumnPair a1, ::SuperScrollView::RowColumnPair a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::RowColumnPair, ::SuperScrollView::RowColumnPair))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNCOMPARER_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::SuperScrollView::RowColumnPair a1)
		{
			return ((::System::Int32(*)(::PVOID, ::SuperScrollView::RowColumnPair))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNCOMPARER_GETHASHCODE_OFFSET))(this, a1);
		}
	};
}
