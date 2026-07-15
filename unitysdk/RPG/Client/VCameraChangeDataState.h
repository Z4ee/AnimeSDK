#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int VCameraChangeDataState_TypeDefinitionIndex = 66415;

	enum class VCameraChangeDataState : ::System::Int32
	{
		Ready = 0,
		BlendIn = 1,
		Keep = 2,
		BlendOut = 3,
		WaitFinish = 4,
		Finish = 5,
	};
}
