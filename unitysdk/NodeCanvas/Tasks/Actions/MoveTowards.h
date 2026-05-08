#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_MOVETOWARDS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1ADBA740)
#define NODECANVAS_TASKS_ACTIONS_MOVETOWARDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADBAAC0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int MoveTowards_TypeDefinitionIndex = 27792;

	class MoveTowards : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* speed; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* stopDistance; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* target; // 0x70
		::System::Boolean waitActionFinish; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVETOWARDS__CTOR_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MOVETOWARDS_ONUPDATE_OFFSET))(this);
		}
	};
}
