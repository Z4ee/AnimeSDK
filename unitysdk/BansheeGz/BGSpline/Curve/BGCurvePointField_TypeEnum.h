#pragma once
#include "unitysdk/unitysdk.h"

namespace BansheeGz::BGSpline::Curve
{
	inline static constexpr unsigned int BGCurvePointField_TypeEnum_TypeDefinitionIndex = 34473;

	enum class BGCurvePointField_TypeEnum : ::System::Int32
	{
		Bool = 0,
		Int = 1,
		Float = 2,
		String = 3,
		Vector3 = 100,
		Bounds = 101,
		Color = 102,
		Quaternion = 103,
		AnimationCurve = 200,
		GameObject = 201,
		Component = 202,
		BGCurve = 300,
		BGCurvePointComponent = 301,
		BGCurvePointGO = 302,
	};
}
