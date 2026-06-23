#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"
#include "unitysdk/ParadoxNotion/ButtonKeys.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSEPICK2D_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D396F40)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSEPICK2D_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1D397080)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSEPICK2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D397490)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckMousePick2D_TypeDefinitionIndex = 30790;

	class CheckMousePick2D : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* savePosAs; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveGoAs; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveDistanceAs; // 0x70
		::UnityEngine::RaycastHit2D hit; // 0x78
		::ParadoxNotion::ButtonKeys buttonKey; // 0x9C
		::UnityEngine::LayerMask mask; // 0xA0
		::System::Int32 buttonID; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSEPICK2D__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSEPICK2D_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSEPICK2D_ONCHECK_OFFSET))(this);
		}
	};
}
