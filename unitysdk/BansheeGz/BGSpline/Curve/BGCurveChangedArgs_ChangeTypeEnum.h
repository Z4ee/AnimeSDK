#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurveChangedArgs_ChangeTypeEnum_TypeDefinitionIndex = 34460;

	enum class BGCurveChangedArgs_ChangeTypeEnum : ::System::Int32
	{
		Multiple = 0,
		CurveTransform = 1,
		Points = 2,
		Point = 3,
		Fields = 4,
		Snap = 5,
		Curve = 6,
	};
}
