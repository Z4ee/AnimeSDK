#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace System { class Object; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_BBVARIABLECHANGED_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EA9EC30)
#define NODECANVAS_TASKS_CONDITIONS_BBVARIABLECHANGED_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EA9EED0)
#define NODECANVAS_TASKS_CONDITIONS_BBVARIABLECHANGED_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EA9EDE0)
#define NODECANVAS_TASKS_CONDITIONS_BBVARIABLECHANGED_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EA9ECF0)
#define NODECANVAS_TASKS_CONDITIONS_BBVARIABLECHANGED_ONINIT_OFFSET UNITYSDK_OFFSET(0x1EA9EC70)
#define NODECANVAS_TASKS_CONDITIONS_BBVARIABLECHANGED_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1EA9EEE0)
#define NODECANVAS_TASKS_CONDITIONS_BBVARIABLECHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA9EF50)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int BBVariableChanged_TypeDefinitionIndex = 30678;

	class BBVariableChanged : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::Internal::BBObjectParameter* targetVariable; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BBVARIABLECHANGED__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BBVARIABLECHANGED_GET_INFO_OFFSET))(this);
		}

		::System::String* OnInit()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BBVARIABLECHANGED_ONINIT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BBVARIABLECHANGED_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BBVARIABLECHANGED_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BBVARIABLECHANGED_ONCHECK_OFFSET))(this);
		}

		::System::Void OnValueChanged(::System::Object* varValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_BBVARIABLECHANGED_ONVALUECHANGED_OFFSET))(this, varValue);
		}
	};
}
