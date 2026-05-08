#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_ScrollToTargetResult_ResultState_TypeDefinitionIndex = 54124;

enum class MonoUITableScrollV2_ScrollToTargetResult_ResultState : ::System::UInt64
{
	ScrollByIndex = 0x100,
	NotSimpleMode = 0x800,
	InValid = 0x0,
	FromDataIndexEqualToDataIndex = 0x4002,
	Failed = 0x2,
	IsDragging = 0xA,
	Success = 0x1,
	AlignParamNull = 0x22,
	RectTransformNull = 0x12,
	CanNotMoveRuntime = 0x6,
	DataIndexOutOfRange = 0x2002,
	TemplateNotInit = 0x1002,
	ManualMode = 0x42,
	ScrollByDelta = 0x200,
	SimpleMode = 0x400,
	ScrollByRectTransform = 0x80,
};
