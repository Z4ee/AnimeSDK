#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

#define NODECANVAS_TASKS_ACTIONS_RUNFOREVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E236C50)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int RunForever_TypeDefinitionIndex = 30140;

	class RunForever : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_RUNFOREVER__CTOR_OFFSET))(this);
		}
	};
}
