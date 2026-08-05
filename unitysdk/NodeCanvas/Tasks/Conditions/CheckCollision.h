#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/ParadoxNotion/CollisionTypes.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EB79190)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1EB79560)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1EB79580)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1EB798E0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1EB793D0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1EB79240)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB79A90)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckCollision_TypeDefinitionIndex = 30571;

	class CheckCollision : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Collider*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveGameObjectAs; // 0x60
		::System::String* objectTag; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveContactNormal; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveContactPoint; // 0x78
		::System::Boolean specifiedTagOnly; // 0x80
		::System::Boolean stay; // 0x81
		::ParadoxNotion::CollisionTypes checkType; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_GET_INFO_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_ONCHECK_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::ParadoxNotion::EventData_1<::UnityEngine::Collision*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_ONCOLLISIONENTER_OFFSET))(this, data);
		}

		::System::Void OnCollisionExit(::ParadoxNotion::EventData_1<::UnityEngine::Collision*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_ONCOLLISIONEXIT_OFFSET))(this, data);
		}
	};
}
