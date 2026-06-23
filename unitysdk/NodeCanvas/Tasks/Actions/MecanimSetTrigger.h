#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define NODECANVAS_TASKS_ACTIONS_MECANIMSETTRIGGER_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D80B030)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETTRIGGER_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D80B110)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80B240)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int MecanimSetTrigger_TypeDefinitionIndex = 29765;

	class MecanimSetTrigger : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Animator*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* parameter; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* parameterHashID; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETTRIGGER__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETTRIGGER_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETTRIGGER_ONEXECUTE_OFFSET))(this);
		}
	};
}
