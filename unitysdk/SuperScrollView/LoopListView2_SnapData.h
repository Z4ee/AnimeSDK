#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/LoopListView2_PredictSnapValue.h"
#include "unitysdk/SuperScrollView/SnapStatus.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x10514280)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10513FD0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2_SnapData_TypeDefinitionIndex = 45871;

	class LoopListView2_SnapData : public ::System::Object
	{
	public:
		::System::Int32 mTempTargetIndex; // 0x10
		::System::Int32 mSnapTargetIndex; // 0x14
		::SuperScrollView::SnapStatus mSnapStatus; // 0x18
		::System::Int32 mIsSnapDirect; // 0x1C
		::SuperScrollView::LoopListView2_PredictSnapValue predictSnapValue; // 0x20
		::System::Boolean mIsForceSnapTo; // 0x34
		::System::Boolean mIsFinishCallbackDone; // 0x35
		::System::Boolean mIsTempTarget; // 0x36
		::System::Boolean mIsSnapWithPredict; // 0x37
		::System::Single mCurSnapVal; // 0x38
		::System::Single mTargetSnapVal; // 0x3C
		::System::Single mMoveMaxAbsVec; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CLEAR_OFFSET))(this);
		}
	};
}
