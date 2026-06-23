#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class AnimationCurve; }

#define NODECANVAS_TASKS_ACTIONS_SAMPLECURVE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1DB9C790)
#define NODECANVAS_TASKS_ACTIONS_SAMPLECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9C870)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SampleCurve_TypeDefinitionIndex = 29208;

	class SampleCurve : public ::NodeCanvas::Framework::ActionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::AnimationCurve*>* curve; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveAs; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* sampleAt; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SAMPLECURVE__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SAMPLECURVE_ONEXECUTE_OFFSET))(this);
		}
	};
}
