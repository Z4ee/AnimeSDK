#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginViewRectAdjust_ViewRectAdjustState_TypeDefinitionIndex = 69988;

enum class MonoUITableScrollV2_TableScrollPluginViewRectAdjust_ViewRectAdjustState : ::System::Int32
{
	AutoSpace = 5,
	AutoSpace_Special_Center_WithViewRectAdjust = 6,
	MonoUIAnimCellNotContainScaleRootAndAlphaRoot = 10,
	SimpleMode = 2,
	DynamicItemSize = 3,
	CellIsNull = 8,
	DynamicViewRectSize = 4,
	ForceDisable = 1,
	NotEnableUseUIAnimCell = 7,
	CellNotContainMonoUIAnimCell = 9,
	Active = 0,
};
