#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/ParadoxNotion/EventData.h"
#include "unitysdk/ParadoxNotion/MouseInteractionTypes.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DFE1980)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1DFE19F0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1DFE1C40)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DFE1A00)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONMOUSEENTER_OFFSET UNITYSDK_OFFSET(0x1DFE1E80)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONMOUSEEXIT_OFFSET UNITYSDK_OFFSET(0x1DFE1F60)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE_ONMOUSEOVER_OFFSET UNITYSDK_OFFSET(0x1DFE2040)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE2120)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckMouse_TypeDefinitionIndex = 30553;

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
