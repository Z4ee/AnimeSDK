#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/LoopListView2_PredictSnapValue.h"
#include "unitysdk/SuperScrollView/SnapStatus.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xB974FF0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB98BB70)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2_SnapData_TypeDefinitionIndex = 44407;

	class LoopListView2_SnapData : public ::System::Object
	{
	public:
		::System::Int32 mTempTargetIndex; // 0x10
		::System::Boolean mIsForceSnapTo; // 0x14
		::System::Boolean mIsSnapWithPredict; // 0x15
		::System::Boolean mIsTempTarget; // 0x16
		::System::Boolean mIsFinishCallbackDone; // 0x17
		::SuperScrollView::LoopListView2_PredictSnapValue predictSnapValue; // 0x18
		::System::Single mMoveMaxAbsVec; // 0x2C
		::System::Int32 mSnapTargetIndex; // 0x30
		::System::Single mTargetSnapVal; // 0x34
		::System::Int32 mIsSnapDirect; // 0x38
		::System::Single mCurSnapVal; // 0x3C
		::SuperScrollView::SnapStatus mSnapStatus; // 0x40

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
