#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RenderDataAliveType_TypeDefinitionIndex = 58478;

	enum class RenderDataAliveType : ::System::Int32
	{
		Permanent = 1,
		KillWhenNotExecuting = 2,
		Unknown = 0,
	};
}
