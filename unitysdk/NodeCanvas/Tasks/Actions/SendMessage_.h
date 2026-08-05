#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_SENDMESSAGE__GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EB9C000)
#define NODECANVAS_TASKS_ACTIONS_SENDMESSAGE__ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EB9C070)
#define NODECANVAS_TASKS_ACTIONS_SENDMESSAGE___CTOR_OFFSET UNITYSDK_OFFSET(0x1EB9C120)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SendMessage__TypeDefinitionIndex = 30188;

	class SendMessage_ : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* methodName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SENDMESSAGE___CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SENDMESSAGE__GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SENDMESSAGE__ONEXECUTE_OFFSET))(this);
		}
	};
}
