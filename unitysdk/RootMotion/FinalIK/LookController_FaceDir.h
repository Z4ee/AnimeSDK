#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int LookController_FaceDir_TypeDefinitionIndex = 38976;

	enum class LookController_FaceDir : ::System::Byte
	{
		None = 0x0,
		Right = 0x2,
		Left = 0x1,
	};
}
