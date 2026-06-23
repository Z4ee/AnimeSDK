#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int LookController_FaceDir_TypeDefinitionIndex = 38266;

	enum class LookController_FaceDir : ::System::Byte
	{
		Right = 0x2,
		None = 0x0,
		Left = 0x1,
	};
}
