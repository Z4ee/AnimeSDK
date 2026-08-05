#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_LOOKAT_DOLOOK_OFFSET UNITYSDK_OFFSET(0x1EF927A0)
#define NODECANVAS_TASKS_ACTIONS_LOOKAT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EF92750)
#define NODECANVAS_TASKS_ACTIONS_LOOKAT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EF92790)
#define NODECANVAS_TASKS_ACTIONS_LOOKAT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EF92930)
#define NODECANVAS_TASKS_ACTIONS_LOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF92940)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int LookAt_TypeDefinitionIndex = 30395;

	class LookAt : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* lookTarget; // 0x60
		::System::Boolean repeat; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_LOOKAT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_LOOKAT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_LOOKAT_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_LOOKAT_ONUPDATE_OFFSET))(this);
		}

		::System::Void DoLook()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_LOOKAT_DOLOOK_OFFSET))(this);
		}
	};
}
