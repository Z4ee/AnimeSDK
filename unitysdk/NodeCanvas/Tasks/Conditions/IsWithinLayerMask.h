#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_CONDITIONS_ISWITHINLAYERMASK_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EA9FC50)
#define NODECANVAS_TASKS_CONDITIONS_ISWITHINLAYERMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA9FCE0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int IsWithinLayerMask_TypeDefinitionIndex = 31395;

	class IsWithinLayerMask : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::LayerMask>* targetLayers; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISWITHINLAYERMASK__CTOR_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_ISWITHINLAYERMASK_ONCHECK_OFFSET))(this);
		}
	};
}
