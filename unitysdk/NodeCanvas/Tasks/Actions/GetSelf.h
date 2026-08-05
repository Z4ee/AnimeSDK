#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_GETSELF_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E542C40)
#define NODECANVAS_TASKS_ACTIONS_GETSELF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E542CE0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetSelf_TypeDefinitionIndex = 30161;

	class GetSelf : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveAs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETSELF__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETSELF_ONEXECUTE_OFFSET))(this);
		}
	};
}
