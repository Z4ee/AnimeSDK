#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class AnimationCurve; }

#define NODECANVAS_TASKS_ACTIONS_EVALUATECURVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1CC49530)
#define NODECANVAS_TASKS_ACTIONS_EVALUATECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC496E0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int EvaluateCurve_TypeDefinitionIndex = 30432;

	class EvaluateCurve : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::AnimationCurve*>* curve; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveAs; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* from; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* time; // 0x78
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* to; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EVALUATECURVE__CTOR_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EVALUATECURVE_ONUPDATE_OFFSET))(this);
		}
	};
}
