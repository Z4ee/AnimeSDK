#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKBOOLEANTRIGGER_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DAF3B60)
#define NODECANVAS_TASKS_CONDITIONS_CHECKBOOLEANTRIGGER_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1DAF3BD0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKBOOLEANTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF3C20)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckBooleanTrigger_TypeDefinitionIndex = 30459;

	class CheckBooleanTrigger : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Boolean>* trigger; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKBOOLEANTRIGGER__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKBOOLEANTRIGGER_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKBOOLEANTRIGGER_ONCHECK_OFFSET))(this);
		}
	};
}
