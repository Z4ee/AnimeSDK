#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/UnityEngine/AvatarIKGoal.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_MECANIMSETIK_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1A85C610)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETIK_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x1A85CA40)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETIK_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A85C880)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETIK_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1A85C960)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A85CCA0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int MecanimSetIK_TypeDefinitionIndex = 26574;

	class MecanimSetIK : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Animator*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* goal; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* weight; // 0x68
		::UnityEngine::AvatarIKGoal IKGoal; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETIK__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETIK_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETIK_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETIK_ONSTOP_OFFSET))(this);
		}

		::System::Void OnAnimatorIK(::ParadoxNotion::EventData_1<::System::Int32> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::System::Int32>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETIK_ONANIMATORIK_OFFSET))(this, msg);
		}
	};
}
