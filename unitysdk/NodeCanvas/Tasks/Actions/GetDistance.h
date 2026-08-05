#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_GETDISTANCE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DAF2250)
#define NODECANVAS_TASKS_ACTIONS_GETDISTANCE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1DAF22D0)
#define NODECANVAS_TASKS_ACTIONS_GETDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF2450)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetDistance_TypeDefinitionIndex = 31235;

	class GetDistance : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* target; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveAs; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETDISTANCE__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETDISTANCE_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETDISTANCE_ONEXECUTE_OFFSET))(this);
		}
	};
}
