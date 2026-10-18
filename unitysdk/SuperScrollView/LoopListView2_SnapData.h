#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/LoopListView2_PredictSnapValue.h"
#include "unitysdk/SuperScrollView/SnapStatus.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xE9ADA70)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE9C5900)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2_SnapData_TypeDefinitionIndex = 47664;

	class LoopListView2_SnapData : public ::System::Object
	{
	public:
		::System::Single mTargetSnapVal; // 0x10
		::System::Int32 mIsSnapDirect; // 0x14
		::System::Boolean mIsFinishCallbackDone; // 0x18
		::System::Boolean mIsForceSnapTo; // 0x19
		::System::Boolean mIsSnapWithPredict; // 0x1A
		::System::Boolean mIsTempTarget; // 0x1B
		::System::Single mMoveMaxAbsVec; // 0x1C
		::System::Int32 mTempTargetIndex; // 0x20
		::System::Int32 mSnapTargetIndex; // 0x24
		::SuperScrollView::LoopListView2_PredictSnapValue predictSnapValue; // 0x28
		::SuperScrollView::SnapStatus mSnapStatus; // 0x3C
		::System::Single mCurSnapVal; // 0x40

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
