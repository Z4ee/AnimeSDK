#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define NODECANVAS_TASKS_ACTIONS_MECANIMSETLAYERWEIGHT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1A9023F0)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETLAYERWEIGHT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A902640)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETLAYERWEIGHT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A9026B0)
#define NODECANVAS_TASKS_ACTIONS_MECANIMSETLAYERWEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9027E0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int MecanimSetLayerWeight_TypeDefinitionIndex = 26670;

	class MecanimSetLayerWeight : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Animator*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* layerWeight; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* layerIndex; // 0x68
		::System::Single currentValue; // 0x70
		::System::Single transitTime; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETLAYERWEIGHT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETLAYERWEIGHT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETLAYERWEIGHT_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_MECANIMSETLAYERWEIGHT_ONUPDATE_OFFSET))(this);
		}
	};
}
