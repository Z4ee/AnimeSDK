#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKLOS2D_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D848E30)
#define NODECANVAS_TASKS_CONDITIONS_CHECKLOS2D_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1D848E90)
#define NODECANVAS_TASKS_CONDITIONS_CHECKLOS2D_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1D849480)
#define NODECANVAS_TASKS_CONDITIONS_CHECKLOS2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8497A0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckLOS2D_TypeDefinitionIndex = 30666;

	class CheckLOS2D : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::LayerMask>* layerMask; // 0x60
		::UnityEngine::Collider2D* agentCollider; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveDistanceAs; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* LOSTarget; // 0x78
		::Il2CppArray<::UnityEngine::RaycastHit2D>* hits; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKLOS2D__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKLOS2D_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKLOS2D_ONCHECK_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKLOS2D_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
