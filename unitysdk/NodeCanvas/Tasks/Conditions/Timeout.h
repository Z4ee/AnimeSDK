#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_TIMEOUT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1B331350)
#define NODECANVAS_TASKS_CONDITIONS_TIMEOUT_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B3315A0)
#define NODECANVAS_TASKS_CONDITIONS_TIMEOUT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1B331600)
#define NODECANVAS_TASKS_CONDITIONS_TIMEOUT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3314D0)
#define NODECANVAS_TASKS_CONDITIONS_TIMEOUT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B331400)
#define NODECANVAS_TASKS_CONDITIONS_TIMEOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B331640)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int Timeout_TypeDefinitionIndex = 28119;

	class Timeout : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* timeout; // 0x60
		::System::Single currentTime; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_TIMEOUT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_TIMEOUT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_TIMEOUT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_TIMEOUT_ONDISABLE_OFFSET))(this);
		}

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_TIMEOUT_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_TIMEOUT_ONCHECK_OFFSET))(this);
		}
	};
}
