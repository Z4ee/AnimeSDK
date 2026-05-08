#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/ParadoxNotion/TriggerTypes.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_TRANSFORM_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1A2AA7E0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_TRANSFORM_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1A2AA890)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_TRANSFORM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A2AAB50)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_TRANSFORM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A2AA8B0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_TRANSFORM_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1A2AADF0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_TRANSFORM_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1A2AAFA0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_TRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2AB150)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckTrigger_Transform_TypeDefinitionIndex = 27101;

	class CheckTrigger_Transform : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Transform*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveGameObjectAs; // 0x60
		::System::String* objectTag; // 0x68
		::ParadoxNotion::TriggerTypes checkType; // 0x70
		::System::Boolean stay; // 0x74
		::System::Boolean specifiedTagOnly; // 0x75

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_TRANSFORM__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_TRANSFORM_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_TRANSFORM_ONCHECK_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_TRANSFORM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_TRANSFORM_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::ParadoxNotion::EventData_1<::UnityEngine::Collider*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_TRANSFORM_ONTRIGGERENTER_OFFSET))(this, data);
		}

		::System::Void OnTriggerExit(::ParadoxNotion::EventData_1<::UnityEngine::Collider*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER_TRANSFORM_ONTRIGGEREXIT_OFFSET))(this, data);
		}
	};
}
