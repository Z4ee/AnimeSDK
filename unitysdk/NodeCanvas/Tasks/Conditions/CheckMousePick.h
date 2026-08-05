#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"
#include "unitysdk/ParadoxNotion/ButtonKeys.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSEPICK_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EA9F7C0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSEPICK_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EA9F910)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSEPICK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA9FC10)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckMousePick_TypeDefinitionIndex = 31341;

	class CheckMousePick : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* savePosAs; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* saveDistanceAs; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveGoAs; // 0x70
		::System::Int32 layer; // 0x78
		::ParadoxNotion::ButtonKeys buttonKey; // 0x7C
		::UnityEngine::RaycastHit hit; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSEPICK__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSEPICK_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSEPICK_ONCHECK_OFFSET))(this);
		}
	};
}
