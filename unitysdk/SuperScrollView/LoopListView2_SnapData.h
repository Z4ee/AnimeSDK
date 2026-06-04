#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/LoopListView2_PredictSnapValue.h"
#include "unitysdk/SuperScrollView/SnapStatus.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xD0BB2A0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2_SNAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD0D2FC0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2_SnapData_TypeDefinitionIndex = 44953;

	class LoopListView2_SnapData : public ::System::Object
	{
	public:
		::System::Boolean mIsSnapWithPredict; // 0x10
		::System::Boolean mIsForceSnapTo; // 0x11
		::System::Boolean mIsFinishCallbackDone; // 0x12
		::System::Boolean mIsTempTarget; // 0x13
		::System::Single mTargetSnapVal; // 0x14
		::SuperScrollView::SnapStatus mSnapStatus; // 0x18
		::System::Int32 mTempTargetIndex; // 0x1C
		::System::Int32 mIsSnapDirect; // 0x20
		::System::Int32 mSnapTargetIndex; // 0x24
		::System::Single mMoveMaxAbsVec; // 0x28
		::System::Single mCurSnapVal; // 0x2C
		::SuperScrollView::LoopListView2_PredictSnapValue predictSnapValue; // 0x30

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
