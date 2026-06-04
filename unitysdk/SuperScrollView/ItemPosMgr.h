#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SuperScrollView { class ItemSizeGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SUPERSCROLLVIEW_ITEMPOSMGR_GETITEMINDEXANDPOSATGIVENPOS_OFFSET UNITYSDK_OFFSET(0xD0A32B0)
#define SUPERSCROLLVIEW_ITEMPOSMGR_GETITEMPOS_OFFSET UNITYSDK_OFFSET(0xD0A2F80)
#define SUPERSCROLLVIEW_ITEMPOSMGR_SETITEMMAXCOUNT_OFFSET UNITYSDK_OFFSET(0xD0A23D0)
#define SUPERSCROLLVIEW_ITEMPOSMGR_SETITEMSIZE_OFFSET UNITYSDK_OFFSET(0xD0A2DB0)
#define SUPERSCROLLVIEW_ITEMPOSMGR_SETSPACING_OFFSET UNITYSDK_OFFSET(0xD0A2300)
#define SUPERSCROLLVIEW_ITEMPOSMGR_UPDATE_OFFSET UNITYSDK_OFFSET(0xD0A3080)
#define SUPERSCROLLVIEW_ITEMPOSMGR__CTOR_OFFSET UNITYSDK_OFFSET(0xD0A2380)

namespace SuperScrollView
{
	inline static constexpr unsigned int ItemPosMgr_TypeDefinitionIndex = 44929;

	class ItemPosMgr : public ::System::Object
	{
	public:
		// static const ::System::Int32 mItemMaxCountPerGroup = 0x64; // 0x0
		::System::Collections::Generic::List_1<::SuperScrollView::ItemSizeGroup*>* mItemSizeGroupList; // 0x10
		::System::Int32 mMaxNotEmptyGroupIndex; // 0x18
		::System::Single mItemDefaultSize; // 0x1C
		::System::Int32 mDirtyBeginIndex; // 0x20
		::System::Single mStartSpacing; // 0x24
		::System::Single mEndSpacing; // 0x28
		::System::Single mTotalSize; // 0x2C

		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOSMGR__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetSpacing(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOSMGR_SETSPACING_OFFSET))(this, a1, a2);
		}

		::System::Void SetItemMaxCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOSMGR_SETITEMMAXCOUNT_OFFSET))(this, a1);
		}

		::System::Void SetItemSize(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOSMGR_SETITEMSIZE_OFFSET))(this, a1, a2);
		}

		::System::Single GetItemPos(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOSMGR_GETITEMPOS_OFFSET))(this, a1);
		}

		::System::Boolean GetItemIndexAndPosAtGivenPos(::System::Single a1, ::System::Int32& a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOSMGR_GETITEMINDEXANDPOSATGIVENPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Update(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ITEMPOSMGR_UPDATE_OFFSET))(this, a1);
		}
	};
}
