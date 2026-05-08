#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_CallCameraEffect_CallType_TypeDefinitionIndex = 70070;

	enum class LD_CallCameraEffect_CallType : ::System::Int32
	{
		Call_CustomShaderFog = 2,
		Call_ScreenEffectType = 1,
	};
}
