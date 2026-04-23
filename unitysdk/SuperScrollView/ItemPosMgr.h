#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SuperScrollView { class ItemSizeGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SUPERSCROLLVIEW_ITEMPOSMGR_GETITEMINDEXANDPOSATGIVENPOS_OFFSET UNITYSDK_OFFSET(0xB95DF40)
#define SUPERSCROLLVIEW_ITEMPOSMGR_GETITEMPOS_OFFSET UNITYSDK_OFFSET(0xB95DC40)
#define SUPERSCROLLVIEW_ITEMPOSMGR_SETITEMMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xB95D530)
#define SUPERSCROLLVIEW_ITEMPOSMGR_SETITEMSIZE_OFFSET UNITYSDK_OFFSET(0xB95DA80)
#define SUPERSCROLLVIEW_ITEMPOSMGR_SETSPACING_OFFSET UNITYSDK_OFFSET(0xB95D460)
#define SUPERSCROLLVIEW_ITEMPOSMGR_UPDATE_OFFSET UNITYSDK_OFFSET(0xB95DD30)
#define SUPERSCROLLVIEW_ITEMPOSMGR__CTOR_OFFSET UNITYSDK_OFFSET(0xB95D4E0)

namespace SuperScrollView
{
	inline static constexpr unsigned int ItemPosMgr_TypeDefinitionIndex = 44383;

	class ItemPosMgr : public ::System::Object
	{
	public:
		// static const ::System::Int32 mItemMaxCountPerGroup = 0x64; // 0x0
		::System::Collections::Generic::List_1<::SuperScrollView::ItemSizeGroup*>* mItemSizeGroupList; // 0x10
		::System::Single mTotalSize; // 0x18
		::System::Int32 mDirtyBeginIndex; // 0x1C
		::System::Int32 mMaxNotEmptyGroupIndex; // 0x20
		::System::Single mStartSpacing; // 0x24
		::System::Single mItemDefaultSize; // 0x28
		::System::Single mEndSpacing; // 0x2C

		::System::Void _ctor(::System::Single itemDefaultSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOSMGR__CTOR_OFFSET))(this, itemDefaultSize);
		}

		::System::Void SetSpacing(::System::Single startSpacing, ::System::Single endSpacing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOSMGR_SETSPACING_OFFSET))(this, startSpacing, endSpacing);
		}

		::System::Void SetItemMaxCount(::System::Int32 maxCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOSMGR_SETITEMMAXCOUNT_OFFSET))(this, maxCount);
		}

		::System::Void SetItemSize(::System::Int32 itemIndex, ::System::Single size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOSMGR_SETITEMSIZE_OFFSET))(this, itemIndex, size);
		}

		::System::Single GetItemPos(::System::Int32 itemIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOSMGR_GETITEMPOS_OFFSET))(this, itemIndex);
		}

		::System::Boolean GetItemIndexAndPosAtGivenPos(::System::Single pos, ::System::Int32& index, ::System::Single& itemPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOSMGR_GETITEMINDEXANDPOSATGIVENPOS_OFFSET))(this, pos, index, itemPos);
		}

		::System::Void Update(::System::Boolean updateAll)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOSMGR_UPDATE_OFFSET))(this, updateAll);
		}
	};
}
