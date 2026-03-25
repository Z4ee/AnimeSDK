#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_LOOPLISTVIEWINITPARAM_COPYDEFAULTINITPARAM_OFFSET UNITYSDK_OFFSET(0xAC15B70)
#define SUPERSCROLLVIEW_LOOPLISTVIEWINITPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xAC15BD0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListViewInitParam_TypeDefinitionIndex = 38523;

	class LoopListViewInitParam : public ::System::Object
	{
	public:
		::System::Boolean mForbidAutoScrollWhenItemSelected; // 0x10
		::System::Boolean mMovePanelUseViewPortSize; // 0x11
		::System::Single mDistanceForNew0; // 0x14
		::System::Single mDistanceForRecycle0; // 0x18
		::System::Single mDistanceForNew1; // 0x1C
		::System::Single mItemDefaultWithPaddingSize; // 0x20
		::System::Single mSnapVecThreshold; // 0x24
		::System::Single mSnapFinishCallbackThreshold; // 0x28
		::System::Single mSmoothDumpRate; // 0x2C
		::System::Single mSnapFinishThreshold; // 0x30
		::System::Single mDistanceForRecycle1; // 0x34

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
