#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define NODECANVAS_TASKS_CONDITIONS_MECANIMISINTRANSITION_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E7B8D70)
#define NODECANVAS_TASKS_CONDITIONS_MECANIMISINTRANSITION_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1E7B8DB0)
#define NODECANVAS_TASKS_CONDITIONS_MECANIMISINTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B8E20)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int MecanimIsInTransition_TypeDefinitionIndex = 29729;

	class MecanimIsInTransition : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Animator*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* layerIndex; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMISINTRANSITION__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMISINTRANSITION_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_MECANIMISINTRANSITION_ONCHECK_OFFSET))(this);
		}
	};
}
