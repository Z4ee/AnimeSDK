#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class CapsuleCollider; }

#define MOLEMOLE_CHECKISINSIDECAMERAVIEW_ISINCAMERAVISIBLERANGE_OFFSET UNITYSDK_OFFSET(0x11C8A950)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11C8A550)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW_ONSTART_OFFSET UNITYSDK_OFFSET(0x11C8A710)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11C8A7D0)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x11C8A9F0)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11C8AA80)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x11C8AB10)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11C8ABA0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckIsInsideCameraView_TypeDefinitionIndex = 71158;

	class CheckIsInsideCameraView : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::UnityEngine::CapsuleCollider* collider; // 0x50
		::MoleMole::Battle::Entity* ownerEntity; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::Class_3_DFD5D1FDB9D2A4AC* modelComponent; // 0x68
		::System::Single CheckDistance; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINSIDECAMERAVIEW__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINSIDECAMERAVIEW_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINSIDECAMERAVIEW_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINSIDECAMERAVIEW_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean IsInCameraVisibleRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINSIDECAMERAVIEW_ISINCAMERAVISIBLERANGE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINSIDECAMERAVIEW___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINSIDECAMERAVIEW___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKISINSIDECAMERAVIEW___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
