#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/ParadoxNotion/EventData.h"
#include "unitysdk/ParadoxNotion/MouseClickEvent.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1A2AA040)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1A2AA0B0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A2AA360)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A2AA0C0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0x1A2AA600)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0x1A2AA6E0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2AA7C0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckMouseClick_TypeDefinitionIndex = 27312;

	class CheckMouseClick : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Collider*>
	{
	public:
		::ParadoxNotion::MouseClickEvent checkType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONCHECK_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnMouseDown(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONMOUSEDOWN_OFFSET))(this, msg);
		}

		::System::Void OnMouseUp(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONMOUSEUP_OFFSET))(this, msg);
		}
	};
}
