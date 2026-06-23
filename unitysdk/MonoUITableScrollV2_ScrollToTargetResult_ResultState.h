#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_ScrollToTargetResult_ResultState_TypeDefinitionIndex = 69986;

enum class MonoUITableScrollV2_ScrollToTargetResult_ResultState : ::System::UInt64
{
	ManualMode = 0x42,
	Failed = 0x2,
	Success = 0x1,
	DataIndexOutOfRange = 0x2002,
	InValid = 0x0,
	ScrollByIndex = 0x100,
	NotSimpleMode = 0x800,
	AlignParamNull = 0x22,
	RectTransformNull = 0x12,
	ScrollByDelta = 0x200,
	ScrollByRectTransform = 0x80,
	IsDragging = 0xA,
	TemplateNotInit = 0x1002,
	FromDataIndexEqualToDataIndex = 0x4002,
	SimpleMode = 0x400,
	CanNotMoveRuntime = 0x6,
};
