#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int TargetType_TypeDefinitionIndex = 35144;

	enum class TargetType : ::System::Int32
	{
		Unset = 0,
		Camera = 1,
		CanvasGroup = 2,
		Image = 3,
		Light = 4,
		RectTransform = 5,
		Renderer = 6,
		SpriteRenderer = 7,
		Rigidbody = 8,
		Rigidbody2D = 9,
		Text = 10,
		Transform = 11,
		tk2dBaseSprite = 12,
		tk2dTextMesh = 13,
		TextMeshPro = 14,
		TextMeshProUGUI = 15,
	};
}
