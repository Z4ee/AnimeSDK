#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/ParadoxNotion/CompactStatus.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class Object; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_DEBUGLOGVARIABLE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1A9020D0)
#define NODECANVAS_TASKS_ACTIONS_DEBUGLOGVARIABLE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A902370)
#define NODECANVAS_TASKS_ACTIONS_DEBUGLOGVARIABLE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A902380)
#define NODECANVAS_TASKS_ACTIONS_DEBUGLOGVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9023D0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int DebugLogVariable_TypeDefinitionIndex = 26565;

	class DebugLogVariable : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Object*>* log; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* prefix; // 0x68
		::ParadoxNotion::CompactStatus finishStatus; // 0x70
		::System::Single secondsToRun; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGLOGVARIABLE__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGLOGVARIABLE_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGLOGVARIABLE_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGLOGVARIABLE_ONUPDATE_OFFSET))(this);
		}
	};
}
