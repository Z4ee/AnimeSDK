#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_ITEMSIZEGROUP_CLEAROLDDATA_OFFSET UNITYSDK_OFFSET(0xD0A2B90)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_GETITEMINDEXBYPOS_OFFSET UNITYSDK_OFFSET(0xD0A3490)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_GETITEMSTARTPOS_OFFSET UNITYSDK_OFFSET(0xD0A3240)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xD0A38B0)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_INIT_OFFSET UNITYSDK_OFFSET(0xD0A36C0)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_RECALCGROUPSIZE_OFFSET UNITYSDK_OFFSET(0xD0A38C0)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_SETITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xD0A2CE0)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_SETITEMSIZE_OFFSET UNITYSDK_OFFSET(0xD0A2EC0)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP_UPDATEALLITEMSTARTPOS_OFFSET UNITYSDK_OFFSET(0xD0A35B0)
#define SUPERSCROLLVIEW_ITEMSIZEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xD0A2CC0)

namespace SuperScrollView
{
	inline static constexpr unsigned int ItemSizeGroup_TypeDefinitionIndex = 44928;

	class ItemSizeGroup : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* mItemStartPosArray; // 0x10
		::Il2CppArray<::System::Single>* mItemSizeArray; // 0x18
		::System::Single mItemDefaultSize; // 0x20
		::System::Single mGroupSize; // 0x24
		::System::Int32 mGroupIndex; // 0x28
		::System::Int32 mItemCount; // 0x2C
		::System::Single mGroupStartPos; // 0x30
		::System::Single mGroupEndPos; // 0x34
		::System::Int32 mDirtyBeginIndex; // 0x38
		::System::Int32 mMaxNoZeroIndex; // 0x3C

		::System::Void _ctor(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_INIT_OFFSET))(this);
		}

		::System::Single GetItemStartPos(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_GETITEMSTARTPOS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Single SetItemSize(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_SETITEMSIZE_OFFSET))(this, a1, a2);
		}

		::System::Void SetItemCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_SETITEMCOUNT_OFFSET))(this, a1);
		}

		::System::Void RecalcGroupSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_RECALCGROUPSIZE_OFFSET))(this);
		}

		::System::Int32 GetItemIndexByPos(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMSIZEGROUP_GETITEMINDEXBYPOS_OFFSET))(this, a1);
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
