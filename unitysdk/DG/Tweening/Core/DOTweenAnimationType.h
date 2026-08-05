#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int DOTweenAnimationType_TypeDefinitionIndex = 35141;

	enum class DOTweenAnimationType : ::System::Int32
	{
		None = 0,
		Move = 1,
		LocalMove = 2,
		Rotate = 3,
		LocalRotate = 4,
		Scale = 5,
		Color = 6,
		Fade = 7,
		Text = 8,
		PunchPosition = 9,
		PunchRotation = 10,
		PunchScale = 11,
		ShakePosition = 12,
		ShakeRotation = 13,
		ShakeScale = 14,
		CameraAspect = 15,
		CameraBackgroundColor = 16,
		CameraFieldOfView = 17,
		CameraOrthoSize = 18,
		CameraPixelRect = 19,
		CameraRect = 20,
		UIWidthHeight = 21,
	};
}
