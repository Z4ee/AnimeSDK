#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_LayoutMeta_LayoutType.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class RectOffset; }

inline static constexpr unsigned int MonoUITableScrollV2_LayoutMeta_TypeDefinitionIndex = 75004;

struct alignas(8) MonoUITableScrollV2_LayoutMeta
{
	::System::Single xsize; // 0x10
	::System::Single ysize; // 0x14
	::System::Int32 xcount; // 0x18
	::System::Int32 ycount; // 0x1C
	::System::Int32 xcountForFillViewRect; // 0x20
	::System::Int32 ycountForFillViewRect; // 0x24
	::System::Int32 pageCount; // 0x28
	::System::Int32 xcountForEmptyPadding; // 0x2C
	::System::Int32 ycountForEmptyPadding; // 0x30
	::System::Single cellsizeX; // 0x34
	::System::Single cellsizeY; // 0x38
	::System::Single spaceX; // 0x3C
	::System::Single spaceY; // 0x40
	::UnityEngine::RectOffset* pading; // 0x48
	::System::Boolean startAxisIsVertial; // 0x50
	::MonoUITableScrollV2_LayoutMeta_LayoutType type; // 0x54
};
