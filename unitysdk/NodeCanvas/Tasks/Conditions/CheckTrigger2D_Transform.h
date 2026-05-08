#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/ParadoxNotion/TriggerTypes.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1A9046A0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1A904750)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A904910)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A904770)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONTRIGGERENTER2D_OFFSET UNITYSDK_OFFSET(0x1A904AB0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONTRIGGEREXIT2D_OFFSET UNITYSDK_OFFSET(0x1A904C60)
#define NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A904E10)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckTrigger2D_Transform_TypeDefinitionIndex = 28247;

	class CheckTrigger2D_Transform : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Transform*>
	{
	public:
		::System::String* objectTag; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveGameObjectAs; // 0x68
		::ParadoxNotion::TriggerTypes CheckType; // 0x70
		::System::Boolean stay; // 0x74
		::System::Boolean specifiedTagOnly; // 0x75

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONCHECK_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter2D(::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONTRIGGERENTER2D_OFFSET))(this, data);
		}

		::System::Void OnTriggerExit2D(::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collider2D*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKTRIGGER2D_TRANSFORM_ONTRIGGEREXIT2D_OFFSET))(this, data);
		}
	};
}
