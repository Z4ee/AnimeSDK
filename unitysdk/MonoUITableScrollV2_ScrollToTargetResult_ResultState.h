#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_ScrollToTargetResult_ResultState_TypeDefinitionIndex = 75012;

enum class MonoUITableScrollV2_ScrollToTargetResult_ResultState : ::System::UInt64
{
	ScrollByIndex = 0x100,
	NotSimpleMode = 0x800,
	FromDataIndexEqualToDataIndex = 0x4002,
	Success = 0x1,
	InValid = 0x0,
	TemplateNotInit = 0x1002,
	RectTransformNull = 0x12,
	Failed = 0x2,
	ScrollByRectTransform = 0x80,
	ManualMode = 0x42,
	SimpleMode = 0x400,
	CanNotMoveRuntime = 0x6,
	IsDragging = 0xA,
	DataIndexOutOfRange = 0x2002,
	ScrollByDelta = 0x200,
	AlignParamNull = 0x22,
};
