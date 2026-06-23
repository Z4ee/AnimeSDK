#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/ParadoxNotion/EventData.h"
#include "unitysdk/ParadoxNotion/MouseInteractionTypes.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1CC4C710)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1CC4C780)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CC4C9D0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CC4C790)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONMOUSEENTER_OFFSET UNITYSDK_OFFSET(0x1CC4CC10)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONMOUSEEXIT_OFFSET UNITYSDK_OFFSET(0x1CC4CCF0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONMOUSEOVER_OFFSET UNITYSDK_OFFSET(0x1CC4CDD0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC4CEB0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckMouse_TypeDefinitionIndex = 29378;

	class CheckMouse : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Collider*>
	{
	public:
		::ParadoxNotion::MouseInteractionTypes checkType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONCHECK_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnMouseEnter(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONMOUSEENTER_OFFSET))(this, msg);
		}

		::System::Void OnMouseExit(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONMOUSEEXIT_OFFSET))(this, msg);
		}

		::System::Void OnMouseOver(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONMOUSEOVER_OFFSET))(this, msg);
		}
	};
}
