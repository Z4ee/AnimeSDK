#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RenderDataAliveType_TypeDefinitionIndex = 80777;

	enum class RenderDataAliveType : ::System::Int32
	{
		KillWhenNotExecuting = 2,
		Unknown = 0,
		Permanent = 1,
	};
}
