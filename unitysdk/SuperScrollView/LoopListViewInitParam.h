#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_LOOPLISTVIEWINITPARAM_COPYDEFAULTINITPARAM_OFFSET UNITYSDK_OFFSET(0xB98C230)
#define SUPERSCROLLVIEW_LOOPLISTVIEWINITPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xB95ECE0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListViewInitParam_TypeDefinitionIndex = 44405;

	class LoopListViewInitParam : public ::System::Object
	{
	public:
		::System::Single mDistanceForRecycle0; // 0x10
		::System::Single mItemDefaultWithPaddingSize; // 0x14
		::System::Single mDistanceForNew0; // 0x18
		::System::Single mSnapFinishThreshold; // 0x1C
		::System::Single mDistanceForRecycle1; // 0x20
		::System::Boolean mForbidAutoScrollWhenItemSelected; // 0x24
		::System::Boolean mMovePanelUseViewPortSize; // 0x25
		::System::Single mSmoothDumpRate; // 0x28
		::System::Single mSnapFinishCallbackThreshold; // 0x2C
		::System::Single mDistanceForNew1; // 0x30
		::System::Single mSnapVecThreshold; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWINITPARAM__CTOR_OFFSET))(this);
		}

		static ::SuperScrollView::LoopListViewInitParam* CopyDefaultInitParam()
		{
			return ((::SuperScrollView::LoopListViewInitParam*(*)())((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEWINITPARAM_COPYDEFAULTINITPARAM_OFFSET))();
		}
	};
}
