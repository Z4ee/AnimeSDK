#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/RowColumnPair.h"
#include "unitysdk/SuperScrollView/SnapStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SNAPDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xE950AC0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEW_SNAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE95D9F0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopGridView_SnapData_TypeDefinitionIndex = 48114;

	class LoopGridView_SnapData : public ::System::Object
	{
	public:
		::System::Single mCurSnapVal; // 0x10
		::UnityEngine::Vector2 mSnapNeedMoveDir; // 0x14
		::SuperScrollView::RowColumnPair mSnapTarget; // 0x1C
		::SuperScrollView::SnapStatus mSnapStatus; // 0x24
		::System::Boolean mIsForceSnapTo; // 0x28
		::System::Single mTargetSnapVal; // 0x2C

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
