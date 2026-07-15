#pragma once
#include "unitysdk/unitysdk.h"

namespace Mirrorment
{
	inline static constexpr unsigned int MirrormentTool_NodeType_TypeDefinitionIndex = 46002;

	enum class MirrormentTool_NodeType : ::System::Int32
	{
		MirrorFrontRoot = 0,
		SingleObject = 1,
		MoveModule = 2,
		MoveTrack = 3,
		RotateModule = 4,
		NoReflection = 5,
	};
}
