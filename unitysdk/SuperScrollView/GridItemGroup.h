#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SuperScrollView { class LoopGridViewItem; }

#define SUPERSCROLLVIEW_GRIDITEMGROUP_ADDFIRST_OFFSET UNITYSDK_OFFSET(0xABE30F0)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_ADDLAST_OFFSET UNITYSDK_OFFSET(0xABE3180)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_CLEAR_OFFSET UNITYSDK_OFFSET(0xABE3340)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GETITEMBYCOLUMN_OFFSET UNITYSDK_OFFSET(0xABE2F30)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GETITEMBYROW_OFFSET UNITYSDK_OFFSET(0xABE2FA0)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xABE2EE0)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GET_FIRST_OFFSET UNITYSDK_OFFSET(0xABE2EF0)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0xABE2F10)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_GET_LAST_OFFSET UNITYSDK_OFFSET(0xABE2F00)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_REMOVEFIRST_OFFSET UNITYSDK_OFFSET(0xABE3220)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_REMOVELAST_OFFSET UNITYSDK_OFFSET(0xABE32B0)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_REPLACEITEM_OFFSET UNITYSDK_OFFSET(0xABE3010)
#define SUPERSCROLLVIEW_GRIDITEMGROUP_SET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0xABE2F20)
#define SUPERSCROLLVIEW_GRIDITEMGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xABE33B0)

namespace SuperScrollView
{
	inline static constexpr unsigned int GridItemGroup_TypeDefinitionIndex = 38509;

	class GridItemGroup : public ::System::Object
	{
	public:
		::SuperScrollView::LoopGridViewItem* mFirst; // 0x10
		::SuperScrollView::LoopGridViewItem* mLast; // 0x18
		::System::Int32 mGroupIndex; // 0x20
		::System::Int32 mCount; // 0x24

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
