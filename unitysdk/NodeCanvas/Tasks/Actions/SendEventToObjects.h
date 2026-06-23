#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_SENDEVENTTOOBJECTS_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D8298E0)
#define NODECANVAS_TASKS_ACTIONS_SENDEVENTTOOBJECTS_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D829950)
#define NODECANVAS_TASKS_ACTIONS_SENDEVENTTOOBJECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D829CF0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SendEventToObjects_TypeDefinitionIndex = 29566;

	class SendEventToObjects : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>* targetObjects; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* eventName; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SENDEVENTTOOBJECTS__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SENDEVENTTOOBJECTS_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SENDEVENTTOOBJECTS_ONEXECUTE_OFFSET))(this);
		}
	};
}
