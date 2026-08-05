#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/ParadoxNotion/EventData.h"
#include "unitysdk/ParadoxNotion/MouseClickEvent.h"

namespace System { class String; }
namespace UnityEngine { class Collider2D; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK2D_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E7B8150)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK2D_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1E7B81C0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E7B8360)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E7B81D0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK2D_ONMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0x1E7B84F0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK2D_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0x1E7B85D0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B86B0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckMouseClick2D_TypeDefinitionIndex = 30530;

	class CheckMouseClick2D : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Collider2D*>
	{
	public:
		::ParadoxNotion::MouseClickEvent checkType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK2D__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK2D_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK2D_ONCHECK_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK2D_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK2D_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnMouseDown(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK2D_ONMOUSEDOWN_OFFSET))(this, msg);
		}

		::System::Void OnMouseUp(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK2D_ONMOUSEUP_OFFSET))(this, msg);
		}
	};
}
