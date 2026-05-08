#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"

namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_CONDITIONS_ISACTIVE_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1B466A10)
#define NODECANVAS_TASKS_CONDITIONS_ISACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B466A70)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int IsActive_TypeDefinitionIndex = 28071;

	class IsActive : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Transform*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISACTIVE__CTOR_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISACTIVE_ONCHECK_OFFSET))(this);
		}
	};
}
