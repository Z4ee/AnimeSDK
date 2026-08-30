#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int EClipType_TypeDefinitionIndex = 73625;

	enum class EClipType : ::System::Int32
	{
		Default = 0,
		Sit = 1,
		Other = 1024,
	};
}
