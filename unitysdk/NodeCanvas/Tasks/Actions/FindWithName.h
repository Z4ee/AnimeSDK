#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_FINDWITHNAME_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EB99E20)
#define NODECANVAS_TASKS_ACTIONS_FINDWITHNAME_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EB9A070)
#define NODECANVAS_TASKS_ACTIONS_FINDWITHNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB9A120)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int FindWithName_TypeDefinitionIndex = 30623;

	class FindWithName : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* gameObjectName; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveAs; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDWITHNAME__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDWITHNAME_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_FINDWITHNAME_ONEXECUTE_OFFSET))(this);
		}
	};
}
