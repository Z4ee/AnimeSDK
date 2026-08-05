#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginViewRectAdjust_ViewRectAdjustState_TypeDefinitionIndex = 75036;

enum class MonoUITableScrollV2_TableScrollPluginViewRectAdjust_ViewRectAdjustState : ::System::Int32
{
	AutoSpace_Special_Center_WithViewRectAdjust = 6,
	DynamicItemSize = 3,
	CellNotContainMonoUIAnimCell = 9,
	SimpleMode = 2,
	NotEnableUseUIAnimCell = 7,
	MonoUIAnimCellNotContainScaleRootAndAlphaRoot = 10,
	CellIsNull = 8,
	Active = 0,
	ForceDisable = 1,
	AutoSpace = 5,
	DynamicViewRectSize = 4,
};
