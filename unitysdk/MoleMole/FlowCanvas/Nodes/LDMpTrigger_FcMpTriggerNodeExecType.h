#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMpTrigger_FcMpTriggerNodeExecType_TypeDefinitionIndex = 59020;

	enum class LDMpTrigger_FcMpTriggerNodeExecType : ::System::Int32
	{
		None = 0,
		FcCallTriggerEnter = 1,
		FcCallDelayEntry = 4,
		FcCallTriggerExit = 2,
		FcCallAllTriggerStay = 3,
	};
}
