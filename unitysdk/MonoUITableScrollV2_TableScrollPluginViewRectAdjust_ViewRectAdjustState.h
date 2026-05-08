#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginViewRectAdjust_ViewRectAdjustState_TypeDefinitionIndex = 54131;

enum class MonoUITableScrollV2_TableScrollPluginViewRectAdjust_ViewRectAdjustState : ::System::Int32
{
	NotEnableUseUIAnimCell = 7,
	AutoSpace_Special_Center_WithViewRectAdjust = 6,
	MonoUIAnimCellNotContainScaleRootAndAlphaRoot = 10,
	CellNotContainMonoUIAnimCell = 9,
	CellIsNull = 8,
	DynamicViewRectSize = 4,
	AutoSpace = 5,
	SimpleMode = 2,
	Active = 0,
	DynamicItemSize = 3,
	ForceDisable = 1,
};
