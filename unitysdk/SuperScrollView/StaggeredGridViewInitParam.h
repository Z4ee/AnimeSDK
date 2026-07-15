#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_STAGGEREDGRIDVIEWINITPARAM_COPYDEFAULTINITPARAM_OFFSET UNITYSDK_OFFSET(0x105269F0)
#define SUPERSCROLLVIEW_STAGGEREDGRIDVIEWINITPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x10526A70)

namespace SuperScrollView
{
	inline static constexpr unsigned int StaggeredGridViewInitParam_TypeDefinitionIndex = 45880;

	class StaggeredGridViewInitParam : public ::System::Object
	{
	public:
		::System::Single mDistanceForNew1; // 0x10
		::System::Single mDistanceForNew0; // 0x14
		::System::Single mDistanceForRecycle1; // 0x18
		::System::Single mItemDefaultWithPaddingSize; // 0x1C
		::System::Single mDistanceForRecycle0; // 0x20

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
