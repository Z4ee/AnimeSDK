#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"
#include "unitysdk/ParadoxNotion/OperationMethod.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SETFLOAT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1A85D7A0)
#define NODECANVAS_TASKS_ACTIONS_SETFLOAT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A85DAC0)
#define NODECANVAS_TASKS_ACTIONS_SETFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A85DBE0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetFloat_TypeDefinitionIndex = 27286;

	class SetFloat : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* valueA; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* valueB; // 0x68
		::ParadoxNotion::OperationMethod Operation; // 0x70
		::System::Boolean perSecond; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETFLOAT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETFLOAT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETFLOAT_ONEXECUTE_OFFSET))(this);
		}
	};
}
