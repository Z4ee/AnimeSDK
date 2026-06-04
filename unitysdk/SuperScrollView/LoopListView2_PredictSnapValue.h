#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SUPERSCROLLVIEW_LOOPLISTVIEW2_PREDICTSNAPVALUE_CLEAR_OFFSET UNITYSDK_OFFSET(0x14B0F0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2_PredictSnapValue_TypeDefinitionIndex = 44955;

	struct alignas(4) LoopListView2_PredictSnapValue
	{
		::System::Single PredictSnapStartTime; // 0x10
		::System::Single PredictSnapTime; // 0x14
		::System::Single PredictSnapStartValue; // 0x18
		::System::Single PredictSnapOffset; // 0x1C
		::System::Single PredictSnapLastProgress; // 0x20

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2_PREDICTSNAPVALUE_CLEAR_OFFSET))(this);
		}
	};
}
