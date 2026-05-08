#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1B0B96C0)
#define NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B0B9330)
#define NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B99E0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GetLinecastInfo_TypeDefinitionIndex = 28011;

	class GetLinecastInfo : public ::NodeCanvas::Framework::ActionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveNormalAs; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* savePointAs; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveHitGameObjectAs; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* target; // 0x78
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveDistanceAs; // 0x80
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::LayerMask>* layerMask; // 0x88
		::UnityEngine::RaycastHit hit; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO__CTOR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GETLINECASTINFO_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
