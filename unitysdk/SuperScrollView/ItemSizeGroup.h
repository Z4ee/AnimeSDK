#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_ITEMSIZEGROUP_CLEAROLDDATA_OFFSET UNITYSDK_OFFSET(0xB95D8C0)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_GETITEMINDEXBYPOS_OFFSET UNITYSDK_OFFSET(0xB95E120)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_GETITEMSTARTPOS_OFFSET UNITYSDK_OFFSET(0xB95DEC0)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xB95E580)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_INIT_OFFSET UNITYSDK_OFFSET(0xB95E380)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_RECALCGROUPSIZE_OFFSET UNITYSDK_OFFSET(0xB95E590)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_SETITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xB95DA10)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_SETITEMSIZE_OFFSET UNITYSDK_OFFSET(0xB95DB70)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_UPDATEALLITEMSTARTPOS_OFFSET UNITYSDK_OFFSET(0xB95E250)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xB95D9F0)

namespace SuperScrollView
{
	inline static constexpr unsigned int ItemSizeGroup_TypeDefinitionIndex = 44382;

	class ItemSizeGroup : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* mItemStartPosArray; // 0x10
		::Il2CppArray<::System::Single>* mItemSizeArray; // 0x18
		::System::Int32 mGroupIndex; // 0x20
		::System::Int32 mDirtyBeginIndex; // 0x24
		::System::Int32 mItemCount; // 0x28
		::System::Single mGroupSize; // 0x2C
		::System::Single mGroupEndPos; // 0x30
		::System::Single mGroupStartPos; // 0x34
		::System::Single mItemDefaultSize; // 0x38
		::System::Int32 mMaxNoZeroIndex; // 0x3C

		::System::Void _ctor(::System::Int32 index, ::System::Single itemDefaultSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP__CTOR_OFFSET))(this, index, itemDefaultSize);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_INIT_OFFSET))(this);
		}

		::System::Single GetItemStartPos(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_GETITEMSTARTPOS_OFFSET))(this, index);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Single SetItemSize(::System::Int32 index, ::System::Single size)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_SETITEMSIZE_OFFSET))(this, index, size);
		}

		::System::Void SetItemCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_SETITEMCOUNT_OFFSET))(this, count);
		}

		::System::Void RecalcGroupSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_RECALCGROUPSIZE_OFFSET))(this);
		}

		::System::Int32 GetItemIndexByPos(::System::Single pos)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_GETITEMINDEXBYPOS_OFFSET))(this, pos);
		}

		::System::Void UpdateAllItemStartPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_UPDATEALLITEMSTARTPOS_OFFSET))(this);
		}

		::System::Void ClearOldData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_CLEAROLDDATA_OFFSET))(this);
		}
	};
}
