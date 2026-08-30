#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/LoopListView2_PredictSnapValue.h"
#include "unitysdk/SuperScrollView/SnapStatus.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xE961290)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE97A980)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2_SnapData_TypeDefinitionIndex = 48124;

	class LoopListView2_SnapData : public ::System::Object
	{
	public:
		::System::Single mCurSnapVal; // 0x10
		::System::Int32 mIsSnapDirect; // 0x14
		::System::Int32 mTempTargetIndex; // 0x18
		::SuperScrollView::SnapStatus mSnapStatus; // 0x1C
		::SuperScrollView::LoopListView2_PredictSnapValue predictSnapValue; // 0x20
		::System::Single mMoveMaxAbsVec; // 0x34
		::System::Boolean mIsTempTarget; // 0x38
		::System::Boolean mIsForceSnapTo; // 0x39
		::System::Boolean mIsSnapWithPredict; // 0x3A
		::System::Boolean mIsFinishCallbackDone; // 0x3B
		::System::Single mTargetSnapVal; // 0x3C
		::System::Int32 mSnapTargetIndex; // 0x40

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
