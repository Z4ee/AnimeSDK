#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/LoopListView2_PredictSnapValue.h"
#include "unitysdk/SuperScrollView/SnapStatus.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xABFD7C0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAC154B0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2_SnapData_TypeDefinitionIndex = 38525;

	class LoopListView2_SnapData : public ::System::Object
	{
	public:
		::System::Single mTargetSnapVal; // 0x10
		::SuperScrollView::SnapStatus mSnapStatus; // 0x14
		::System::Single mMoveMaxAbsVec; // 0x18
		::System::Single mCurSnapVal; // 0x1C
		::SuperScrollView::LoopListView2_PredictSnapValue predictSnapValue; // 0x20
		::System::Boolean mIsTempTarget; // 0x34
		::System::Boolean mIsSnapWithPredict; // 0x35
		::System::Boolean mIsFinishCallbackDone; // 0x36
		::System::Boolean mIsForceSnapTo; // 0x37
		::System::Int32 mIsSnapDirect; // 0x38
		::System::Int32 mSnapTargetIndex; // 0x3C
		::System::Int32 mTempTargetIndex; // 0x40

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
