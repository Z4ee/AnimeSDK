#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SuperScrollView { class LoopGridViewItem; }

#define SUPERSCROLLVIEW_GRIDITEMGROUP_ADDFIRST_OFFSET UNITYSDK_OFFSET(0xB959470)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_ADDLAST_OFFSET UNITYSDK_OFFSET(0xB959500)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_CLEAR_OFFSET UNITYSDK_OFFSET(0xB9596C0)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GETITEMBYCOLUMN_OFFSET UNITYSDK_OFFSET(0xB9592B0)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GETITEMBYROW_OFFSET UNITYSDK_OFFSET(0xB959320)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xB959260)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GET_FIRST_OFFSET UNITYSDK_OFFSET(0xB959270)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0xB959290)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GET_LAST_OFFSET UNITYSDK_OFFSET(0xB959280)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_REMOVEFIRST_OFFSET UNITYSDK_OFFSET(0xB9595A0)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_REMOVELAST_OFFSET UNITYSDK_OFFSET(0xB959630)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_REPLACEITEM_OFFSET UNITYSDK_OFFSET(0xB959390)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_SET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0xB9592A0)
#define SUPERSCROLLVIEW_GRIDITEMGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xB959730)

namespace SuperScrollView
{
	inline static constexpr unsigned int GridItemGroup_TypeDefinitionIndex = 44391;

	class GridItemGroup : public ::System::Object
	{
	public:
		::SuperScrollView::LoopGridViewItem* mLast; // 0x10
		::SuperScrollView::LoopGridViewItem* mFirst; // 0x18
		::System::Int32 mCount; // 0x20
		::System::Int32 mGroupIndex; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_GET_COUNT_OFFSET))(this);
		}

		::SuperScrollView::LoopGridViewItem* get_First()
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_GET_FIRST_OFFSET))(this);
		}

		::SuperScrollView::LoopGridViewItem* get_Last()
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_GET_LAST_OFFSET))(this);
		}

		::System::Int32 get_GroupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_GET_GROUPINDEX_OFFSET))(this);
		}

		::System::Void set_GroupIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_SET_GROUPINDEX_OFFSET))(this, value);
		}

		::SuperScrollView::LoopGridViewItem* GetItemByColumn(::System::Int32 column)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_GETITEMBYCOLUMN_OFFSET))(this, column);
		}

		::SuperScrollView::LoopGridViewItem* GetItemByRow(::System::Int32 row)
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_GETITEMBYROW_OFFSET))(this, row);
		}

		::System::Void ReplaceItem(::SuperScrollView::LoopGridViewItem* curItem, ::SuperScrollView::LoopGridViewItem* newItem)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_REPLACEITEM_OFFSET))(this, curItem, newItem);
		}

		::System::Void AddFirst(::SuperScrollView::LoopGridViewItem* newItem)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_ADDFIRST_OFFSET))(this, newItem);
		}

		::System::Void AddLast(::SuperScrollView::LoopGridViewItem* newItem)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::LoopGridViewItem*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_ADDLAST_OFFSET))(this, newItem);
		}

		::SuperScrollView::LoopGridViewItem* RemoveFirst()
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_REMOVEFIRST_OFFSET))(this);
		}

		::SuperScrollView::LoopGridViewItem* RemoveLast()
		{
			return ((::SuperScrollView::LoopGridViewItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_REMOVELAST_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDITEMGROUP_CLEAR_OFFSET))(this);
		}
	};
}
