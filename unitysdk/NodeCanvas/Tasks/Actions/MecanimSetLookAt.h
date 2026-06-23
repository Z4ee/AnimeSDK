#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_ACTIONS_MECANIMSETLOOKAT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D53DF50)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETLOOKAT_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x1D53E150)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETLOOKAT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D53DF90)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETLOOKAT_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1D53E070)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D53E3C0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int MecanimSetLookAt_TypeDefinitionIndex = 30029;

	class MecanimSetLookAt : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Animator*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* targetPosition; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* targetWeight; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETLOOKAT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETLOOKAT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETLOOKAT_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETLOOKAT_ONSTOP_OFFSET))(this);
		}

		::System::Void OnAnimatorIK(::ParadoxNotion::EventData_1<::System::Int32> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::System::Int32>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETLOOKAT_ONANIMATORIK_OFFSET))(this, msg);
		}
	};
}
