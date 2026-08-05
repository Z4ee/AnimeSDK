#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int EFCLogLevel_TypeDefinitionIndex = 64998;

	enum class EFCLogLevel : ::System::Int32
	{
		Info = 0,
		Warning = 1,
		Error = 2,
	};
}
