#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDirSourceType_TypeDefinitionIndex = 23942;

	enum class RtDirSourceType : ::System::Int32
	{
		None = 0,
		TargetFaceDir = 1,
		TwoTargetLinkDir = 2,
	};
}
