#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_ROTATEAWAY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D410DA0)
#define NODECANVAS_TASKS_ACTIONS_ROTATEAWAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4114A0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int RotateAway_TypeDefinitionIndex = 29150;

	class RotateAway : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* speed; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* target; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* angleDifference; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* upVector; // 0x78
		::System::Boolean waitActionFinish; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_ROTATEAWAY__CTOR_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_ROTATEAWAY_ONUPDATE_OFFSET))(this);
		}
	};
}
