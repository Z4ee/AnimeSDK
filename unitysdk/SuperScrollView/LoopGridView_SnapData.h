#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/RowColumnPair.h"
#include "unitysdk/SuperScrollView/SnapStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SNAPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x19800B90)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SNAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1980E590)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopGridView_SnapData_TypeDefinitionIndex = 48114;

	class LoopGridView_SnapData : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 mSnapNeedMoveDir; // 0x10
		::System::Single mTargetSnapVal; // 0x18
		::System::Boolean mIsForceSnapTo; // 0x1C
		::System::Single mCurSnapVal; // 0x20
		::SuperScrollView::SnapStatus mSnapStatus; // 0x24
		::SuperScrollView::RowColumnPair mSnapTarget; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SNAPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEW_SNAPDATA_CLEAR_OFFSET))(this);
		}
	};
}
