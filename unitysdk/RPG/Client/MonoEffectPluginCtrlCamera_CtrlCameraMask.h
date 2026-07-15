#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCtrlCamera_CtrlCameraMask_TypeDefinitionIndex = 66912;

	enum class MonoEffectPluginCtrlCamera_CtrlCameraMask : ::System::Int32
	{
		Transform = 1,
		Projection = 2,
		OrthographicSize = 4,
		ClippingPlane = 8,
		Fov = 16,
		CullingMask = 32,
	};
}
