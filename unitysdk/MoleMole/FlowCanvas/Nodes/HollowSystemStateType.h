#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowSystemStateType_TypeDefinitionIndex = 55608;

	enum class HollowSystemStateType : ::System::Int32
	{
		Revert = 1,
		Close = 0,
	};
}
