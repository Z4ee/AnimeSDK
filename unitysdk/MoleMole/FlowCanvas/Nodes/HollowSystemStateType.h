#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowSystemStateType_TypeDefinitionIndex = 83504;

	enum class HollowSystemStateType : ::System::Int32
	{
		Close = 0,
		Revert = 1,
	};
}
