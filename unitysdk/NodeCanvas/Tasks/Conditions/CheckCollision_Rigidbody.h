#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/ParadoxNotion/CollisionTypes.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_RIGIDBODY_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E6DD6C0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_RIGIDBODY_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1E6DDA90)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_RIGIDBODY_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1E6DDAB0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_RIGIDBODY_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0x1E6DDE10)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_RIGIDBODY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E6DD900)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_RIGIDBODY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E6DD770)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_RIGIDBODY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DDFC0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckCollision_Rigidbody_TypeDefinitionIndex = 30865;

	class CheckCollision_Rigidbody : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Rigidbody*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveContactPoint; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveGameObjectAs; // 0x68
		::System::String* objectTag; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveContactNormal; // 0x78
		::ParadoxNotion::CollisionTypes checkType; // 0x80
		::System::Boolean specifiedTagOnly; // 0x84
		::System::Boolean stay; // 0x85

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_RIGIDBODY__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_RIGIDBODY_GET_INFO_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_RIGIDBODY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_RIGIDBODY_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_RIGIDBODY_ONCHECK_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::ParadoxNotion::EventData_1<::UnityEngine::Collision*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_RIGIDBODY_ONCOLLISIONENTER_OFFSET))(this, data);
		}

		::System::Void OnCollisionExit(::ParadoxNotion::EventData_1<::UnityEngine::Collision*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION_RIGIDBODY_ONCOLLISIONEXIT_OFFSET))(this, data);
		}
	};
}
