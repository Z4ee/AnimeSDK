#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int LookController_FaceDir_TypeDefinitionIndex = 36712;

	enum class LookController_FaceDir : ::System::Byte
	{
		None = 0x0,
		Left = 0x1,
		Right = 0x2,
	};
}
