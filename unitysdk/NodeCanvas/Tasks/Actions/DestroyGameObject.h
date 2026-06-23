#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_DESTROYGAMEOBJECT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DB9C070)
#define NODECANVAS_TASKS_ACTIONS_DESTROYGAMEOBJECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1DB9C110)
#define NODECANVAS_TASKS_ACTIONS_DESTROYGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9C2E0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int DestroyGameObject_TypeDefinitionIndex = 30502;

	class DestroyGameObject : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::System::Boolean immediately; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DESTROYGAMEOBJECT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DESTROYGAMEOBJECT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DESTROYGAMEOBJECT_ONUPDATE_OFFSET))(this);
		}
	};
}
