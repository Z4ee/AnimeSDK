#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening::Core::Enums
{
	inline static constexpr unsigned int SpecialStartupMode_TypeDefinitionIndex = 25507;

	enum class SpecialStartupMode : ::System::Int32
	{
		None = 0,
		SetLookAt = 1,
		SetShake = 2,
		SetPunch = 3,
		SetCameraShakePosition = 4,
	};
}
