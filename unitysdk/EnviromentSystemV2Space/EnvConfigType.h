#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvConfigType_TypeDefinitionIndex = 47474;

	enum class EnvConfigType : ::System::Int32
	{
		Common = 0,
		CommonCurve = 1,
		BoolCurve = 2,
		IntCurve = 3,
		TextCurve = 4,
		Direction = 5,
		Vector1 = 6,
		Vector3 = 7,
		Vector2 = 8,
		Vector4 = 9,
		Color3 = 10,
		Color4 = 11,
		ColorHDR = 12,
		MinMaxFloatVal = 13,
		Curve = 14,
		Texture = 15,
		Prefab = 16,
		PrefabCurve = 17,
		Gradient = 18,
		Asset = 19,
		ImageCurve = 20,
		CubemapCurve = 21,
		GradientCurve = 22,
		VectorCurve = 23,
		ColorCurve = 24,
		Count = 25,
	};
}
