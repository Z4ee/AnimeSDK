#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/ParadoxNotion/EventData.h"
#include "unitysdk/ParadoxNotion/MouseInteractionTypes.h"

namespace System { class String; }
namespace UnityEngine { class Collider2D; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D412380)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1D412870)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D412630)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D4123F0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONMOUSEENTER_OFFSET UNITYSDK_OFFSET(0x1D412880)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONMOUSEEXIT_OFFSET UNITYSDK_OFFSET(0x1D412960)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONMOUSEOVER_OFFSET UNITYSDK_OFFSET(0x1D412A40)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D412B20)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckMouse2D_TypeDefinitionIndex = 30087;

	class CheckMouse2D : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Collider2D*>
	{
	public:
		::ParadoxNotion::MouseInteractionTypes checkType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_GET_INFO_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONCHECK_OFFSET))(this);
		}

		::System::Void OnMouseEnter(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONMOUSEENTER_OFFSET))(this, msg);
		}

		::System::Void OnMouseExit(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONMOUSEEXIT_OFFSET))(this, msg);
		}

		::System::Void OnMouseOver(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSE2D_ONMOUSEOVER_OFFSET))(this, msg);
		}
	};
}
