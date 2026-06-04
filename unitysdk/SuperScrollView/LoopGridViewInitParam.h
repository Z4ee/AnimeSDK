#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_LOOPGRIDVIEWINITPARAM_COPYDEFAULTINITPARAM_OFFSET UNITYSDK_OFFSET(0xD0B9BD0)
#define SUPERSCROLLVIEW_LOOPGRIDVIEWINITPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xD0B9C30)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopGridViewInitParam_TypeDefinitionIndex = 44941;

	class LoopGridViewInitParam : public ::System::Object
	{
	public:
		::System::Single mSnapFinishThreshold; // 0x10
		::System::Single mSmoothDumpRate; // 0x14
		::System::Single mSnapVecThreshold; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWINITPARAM__CTOR_OFFSET))(this);
		}

		static ::SuperScrollView::LoopGridViewInitParam* CopyDefaultInitParam()
		{
			return ((::SuperScrollView::LoopGridViewInitParam*(*)())((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPGRIDVIEWINITPARAM_COPYDEFAULTINITPARAM_OFFSET))();
		}
	};
}
