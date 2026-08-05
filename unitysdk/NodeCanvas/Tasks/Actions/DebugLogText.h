#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"
#include "unitysdk/NodeCanvas/Tasks/Actions/DebugLogText_LogMode.h"
#include "unitysdk/NodeCanvas/Tasks/Actions/DebugLogText_VerboseMode.h"
#include "unitysdk/ParadoxNotion/CompactStatus.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_DEBUGLOGTEXT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DFDDDC0)
#define NODECANVAS_TASKS_ACTIONS_DEBUGLOGTEXT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1DFDDE70)
#define NODECANVAS_TASKS_ACTIONS_DEBUGLOGTEXT_ONGUI_OFFSET UNITYSDK_OFFSET(0x1DFDE260)
#define NODECANVAS_TASKS_ACTIONS_DEBUGLOGTEXT_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1DFDE110)
#define NODECANVAS_TASKS_ACTIONS_DEBUGLOGTEXT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1DFDE210)
#define NODECANVAS_TASKS_ACTIONS_DEBUGLOGTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFDE7A0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int DebugLogText_TypeDefinitionIndex = 29975;

	class DebugLogText : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* log; // 0x60
		::System::Single secondsToRun; // 0x68
		::System::Single labelYOffset; // 0x6C
		::NodeCanvas::Tasks::Actions::DebugLogText_VerboseMode verboseMode; // 0x70
		::NodeCanvas::Tasks::Actions::DebugLogText_LogMode logMode; // 0x74
		::ParadoxNotion::CompactStatus finishStatus; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGLOGTEXT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGLOGTEXT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGLOGTEXT_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGLOGTEXT_ONSTOP_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGLOGTEXT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DEBUGLOGTEXT_ONGUI_OFFSET))(this);
		}
	};
}
