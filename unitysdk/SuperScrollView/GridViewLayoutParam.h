#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_GRIDVIEWLAYOUTPARAM_CHECKPARAM_OFFSET UNITYSDK_OFFSET(0xABE55E0)
#define SUPERSCROLLVIEW_GRIDVIEWLAYOUTPARAM_INITFROM_OFFSET UNITYSDK_OFFSET(0xABE5690)
#define SUPERSCROLLVIEW_GRIDVIEWLAYOUTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xABE5750)

namespace SuperScrollView
{
	inline static constexpr unsigned int GridViewLayoutParam_TypeDefinitionIndex = 38536;

	class GridViewLayoutParam : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* mCustomColumnOrRowOffsetArray; // 0x10
		::System::Int32 mColumnOrRowCount; // 0x18
		::System::Single mPadding2; // 0x1C
		::System::Single mPadding1; // 0x20
		::System::Single mItemWidthOrHeight; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDVIEWLAYOUTPARAM__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckParam(::System::Boolean ignoreWidthOrHeight)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDVIEWLAYOUTPARAM_CHECKPARAM_OFFSET))(this, ignoreWidthOrHeight);
		}

		::System::Void InitFrom(::SuperScrollView::GridViewLayoutParam* layoutParams)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::GridViewLayoutParam*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDVIEWLAYOUTPARAM_INITFROM_OFFSET))(this, layoutParams);
		}
	};
}
