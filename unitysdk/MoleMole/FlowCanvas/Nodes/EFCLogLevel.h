#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int EFCLogLevel_TypeDefinitionIndex = 81521;

	enum class EFCLogLevel : ::System::Int32
	{
		Error = 2,
		Info = 0,
		Warning = 1,
	};
}
