#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_GRIDVIEWLAYOUTPARAM_CHECKPARAM_OFFSET UNITYSDK_OFFSET(0x197F8580)
#define SUPERSCROLLVIEW_GRIDVIEWLAYOUTPARAM_INITFROM_OFFSET UNITYSDK_OFFSET(0x197F8630)
#define SUPERSCROLLVIEW_GRIDVIEWLAYOUTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x197F86F0)

namespace SuperScrollView
{
	inline static constexpr unsigned int GridViewLayoutParam_TypeDefinitionIndex = 48136;

	class GridViewLayoutParam : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* mCustomColumnOrRowOffsetArray; // 0x10
		::System::Single mPadding1; // 0x18
		::System::Single mItemWidthOrHeight; // 0x1C
		::System::Single mPadding2; // 0x20
		::System::Int32 mColumnOrRowCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDVIEWLAYOUTPARAM__CTOR_OFFSET))(this);
		}

		::System::Boolean CheckParam(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDVIEWLAYOUTPARAM_CHECKPARAM_OFFSET))(this, a1);
		}

		::System::Void InitFrom(::SuperScrollView::GridViewLayoutParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SuperScrollView::GridViewLayoutParam*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_GRIDVIEWLAYOUTPARAM_INITFROM_OFFSET))(this, a1);
		}
	};
}
