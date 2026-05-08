#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_ScrollParams_ClickType.h"
#include "unitysdk/MonoUITableScrollV2_ScrollParams_GridAlignType.h"
#include "unitysdk/MonoUITableScrollV2_ScrollParams_GridSizeType.h"
#include "unitysdk/MonoUITableScrollV2_ScrollParams_ScrollType.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2_ScrollParams_AlignParam;

#define MONOUITABLESCROLLV2_SCROLLPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x187C66D0)

inline static constexpr unsigned int MonoUITableScrollV2_ScrollParams_TypeDefinitionIndex = 54149;

class MonoUITableScrollV2_ScrollParams : public ::System::Object
{
public:
	::MonoUITableScrollV2_ScrollParams_ScrollType scrollType; // 0x10
	::MonoUITableScrollV2_ScrollParams_GridAlignType gridAlignType; // 0x14
	::MonoUITableScrollV2_ScrollParams_GridSizeType gridSizeType; // 0x18
	::System::Single scrollBarSize; // 0x1C
	::MonoUITableScrollV2_ScrollParams_AlignParam* selectAlignParam; // 0x20
	::MonoUITableScrollV2_ScrollParams_AlignParam* focusAlignParam; // 0x28
	::MonoUITableScrollV2_ScrollParams_ClickType clickType; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_SCROLLPARAMS__CTOR_OFFSET))(this);
	}
};
