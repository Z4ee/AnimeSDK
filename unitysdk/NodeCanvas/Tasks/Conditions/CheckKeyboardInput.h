#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"
#include "unitysdk/ParadoxNotion/PressTypes.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKKEYBOARDINPUT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DB39850)
#define NODECANVAS_TASKS_CONDITIONS_CHECKKEYBOARDINPUT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1DB39920)
#define NODECANVAS_TASKS_CONDITIONS_CHECKKEYBOARDINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB39960)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckKeyboardInput_TypeDefinitionIndex = 31266;

	class CheckKeyboardInput : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::ParadoxNotion::PressTypes pressType; // 0x60
		::UnityEngine::KeyCode key; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKKEYBOARDINPUT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKKEYBOARDINPUT_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKKEYBOARDINPUT_ONCHECK_OFFSET))(this);
		}
	};
}
