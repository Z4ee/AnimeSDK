#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_INPUTMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AFCFC90)
#define NODECANVAS_TASKS_ACTIONS_INPUTMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD0610)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int InputMove_TypeDefinitionIndex = 26953;

	class InputMove : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* rotationSpeed; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* strafe; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* turn; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* up; // 0x78
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* forward; // 0x80
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* moveSpeed; // 0x88
		::System::Boolean repeat; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_INPUTMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_INPUTMOVE_ONUPDATE_OFFSET))(this);
		}
	};
}
