#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"
#include "unitysdk/ParadoxNotion/PressTypes.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKBUTTONINPUT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DB9E0B0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKBUTTONINPUT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1DB9E150)
#define NODECANVAS_TASKS_CONDITIONS_CHECKBUTTONINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9E220)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckButtonInput_TypeDefinitionIndex = 29327;

	class CheckButtonInput : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* buttonName; // 0x60
		::ParadoxNotion::PressTypes pressType; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKBUTTONINPUT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKBUTTONINPUT_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKBUTTONINPUT_ONCHECK_OFFSET))(this);
		}
	};
}
