#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }

#define NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1BCCC5B0)
#define NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1BCCC6D0)
#define NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED_ONCLICK_OFFSET UNITYSDK_OFFSET(0x1BCCC6E0)
#define NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED_ONINIT_OFFSET UNITYSDK_OFFSET(0x1BCCC630)
#define NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCCC7C0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int ButtonClicked_TypeDefinitionIndex = 29795;

	class ButtonClicked : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::UI::Button*>* button; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED_GET_INFO_OFFSET))(this);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED_ONINIT_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED_ONCHECK_OFFSET))(this);
		}

		::System::Void OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BUTTONCLICKED_ONCLICK_OFFSET))(this);
		}
	};
}
