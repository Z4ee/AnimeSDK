#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

#define NODECANVAS_TASKS_ACTIONS_FADEIN_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D1E6DC0)
#define NODECANVAS_TASKS_ACTIONS_FADEIN_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D1E6DF0)
#define NODECANVAS_TASKS_ACTIONS_FADEIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E6E40)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int FadeIn_TypeDefinitionIndex = 30013;

	class FadeIn : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::System::Single fadeTime; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FADEIN__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FADEIN_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FADEIN_ONUPDATE_OFFSET))(this);
		}
	};
}
