#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { class GraphOwner; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_SHOUTEVENT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DB9D4B0)
#define NODECANVAS_TASKS_ACTIONS_SHOUTEVENT_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1DB9D8F0)
#define NODECANVAS_TASKS_ACTIONS_SHOUTEVENT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1DB9D530)
#define NODECANVAS_TASKS_ACTIONS_SHOUTEVENT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1DB9D5E0)
#define NODECANVAS_TASKS_ACTIONS_SHOUTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9DB20)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int ShoutEvent_TypeDefinitionIndex = 30056;

	class ShoutEvent : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* completionTime; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* eventName; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* shoutRange; // 0x70
		::Il2CppArray<::NodeCanvas::Framework::GraphOwner*>* owners; // 0x78
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::GraphOwner*>* receivedOwners; // 0x80
		::System::Single traveledDistance; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SHOUTEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SHOUTEVENT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SHOUTEVENT_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SHOUTEVENT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SHOUTEVENT_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
