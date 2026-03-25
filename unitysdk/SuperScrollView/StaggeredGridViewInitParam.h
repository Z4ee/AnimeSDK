#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_STAGGEREDGRIDVIEWINITPARAM_COPYDEFAULTINITPARAM_OFFSET UNITYSDK_OFFSET(0xAC25BE0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDVIEWINITPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xAC25C60)

namespace SuperScrollView
{
	inline static constexpr unsigned int StaggeredGridViewInitParam_TypeDefinitionIndex = 38534;

	class StaggeredGridViewInitParam : public ::System::Object
	{
	public:
		::System::Single mDistanceForNew0; // 0x10
		::System::Single mItemDefaultWithPaddingSize; // 0x14
		::System::Single mDistanceForRecycle1; // 0x18
		::System::Single mDistanceForRecycle0; // 0x1C
		::System::Single mDistanceForNew1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDVIEWINITPARAM__CTOR_OFFSET))(this);
		}

		static ::SuperScrollView::StaggeredGridViewInitParam* CopyDefaultInitParam()
		{
			return ((::SuperScrollView::StaggeredGridViewInitParam*(*)())((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_STAGGEREDGRIDVIEWINITPARAM_COPYDEFAULTINITPARAM_OFFSET))();
		}
	};
}
