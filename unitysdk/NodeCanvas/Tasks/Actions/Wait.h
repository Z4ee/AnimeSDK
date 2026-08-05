#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/ParadoxNotion/CompactStatus.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_WAIT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E6DD0A0)
#define NODECANVAS_TASKS_ACTIONS_WAIT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E6DD110)
#define NODECANVAS_TASKS_ACTIONS_WAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DD190)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int Wait_TypeDefinitionIndex = 30890;

	class Wait : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* waitTime; // 0x60
		::ParadoxNotion::CompactStatus finishStatus; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_WAIT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_WAIT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_WAIT_ONUPDATE_OFFSET))(this);
		}
	};
}
