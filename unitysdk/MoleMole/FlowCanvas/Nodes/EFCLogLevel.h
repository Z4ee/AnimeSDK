#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int EFCLogLevel_TypeDefinitionIndex = 80161;

	enum class EFCLogLevel : ::System::Int32
	{
		Error = 2,
		Warning = 1,
		Info = 0,
	};
}
