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

#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D6E92B0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1D6E9360)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1D6E96C0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_ONCOLLISIONEXIT2D_OFFSET UNITYSDK_OFFSET(0x1D6E99B0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D6E9520)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D6E9380)
#define NODECANVAS_TASKS_CONDITIONS_CHECKCOLLISION2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E9AF0)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckCollision2D_TypeDefinitionIndex = 30782;

	class CheckCollision2D : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Collider2D*>
	{
	public:
		::System::String* objectTag; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveContactPoint; // 0x68
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::Vector3>* saveContactNormal; // 0x70
		::NodeCanvas::Framework::BBParameter_1<::UnityEngine::GameObject*>* saveGameObjectAs; // 0x78
		::ParadoxNotion::CollisionTypes checkType; // 0x80
		::System::Boolean specifiedTagOnly; // 0x84
		::System::Boolean stay; // 0x85

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
