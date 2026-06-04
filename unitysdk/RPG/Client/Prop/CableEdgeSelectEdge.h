#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CableEdgeSelectEdge_TypeDefinitionIndex = 73124;

	enum class CableEdgeSelectEdge : ::System::Int32
	{
		UnSelect = 0,
		Selectable = 1,
		UnSelectable = 2,
	};
}
