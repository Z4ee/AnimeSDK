#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"
#include "unitysdk/NodeCanvas/Tasks/Actions/SetObjectActive_SetActiveMode.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_SETOBJECTACTIVE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E7B6E80)
#define NODECANVAS_TASKS_ACTIONS_SETOBJECTACTIVE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E7B6F40)
#define NODECANVAS_TASKS_ACTIONS_SETOBJECTACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B7030)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetObjectActive_TypeDefinitionIndex = 30921;

	class SetObjectActive : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Tasks::Actions::SetObjectActive_SetActiveMode setTo; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETOBJECTACTIVE__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETOBJECTACTIVE_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETOBJECTACTIVE_ONEXECUTE_OFFSET))(this);
		}
	};
}
