#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/NodeCanvas/Tasks/Actions/SetBoolean_BoolSetModes.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SETBOOLEAN_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D411610)
#define NODECANVAS_TASKS_ACTIONS_SETBOOLEAN_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D4116F0)
#define NODECANVAS_TASKS_ACTIONS_SETBOOLEAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D411780)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetBoolean_TypeDefinitionIndex = 29392;

	class SetBoolean : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Boolean>* boolVariable; // 0x60
		::NodeCanvas::Tasks::Actions::SetBoolean_BoolSetModes setTo; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETBOOLEAN__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETBOOLEAN_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETBOOLEAN_ONEXECUTE_OFFSET))(this);
		}
	};
}
