#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/ParadoxNotion/CollisionTypes.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class GameObject; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1B330580)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1B330630)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1B330990)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1B330C80)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B3307F0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B330650)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B330DC0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckCollision2D_TypeDefinitionIndex = 26761;

	class CheckCollision2D : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Collider2D*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveGameObjectAs; // 0x60
		::System::String* objectTag; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveContactPoint; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveContactNormal; // 0x78
		::System::Boolean stay; // 0x80
		::System::Boolean specifiedTagOnly; // 0x81
		::ParadoxNotion::CollisionTypes checkType; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_ONCHECK_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnCollisionEnter2D(::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_ONCOLLISIONENTER2D_OFFSET))(this, data);
		}

		::System::Void OnCollisionExit2D(::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::Collision2D*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_ONCOLLISIONEXIT2D_OFFSET))(this, data);
		}
	};
}
