#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class CapsuleCollider; }

#define MOLEMOLE_CHECKISINSIDECAMERAVIEW_ISINCAMERAVISIBLERANGE_OFFSET UNITYSDK_OFFSET(0x1347A820)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1347A420)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW_ONSTART_OFFSET UNITYSDK_OFFSET(0x1347A5E0)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1347A6A0)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1347A8C0)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1347A950)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1347A9E0)
#define MOLEMOLE_CHECKISINSIDECAMERAVIEW___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1347AA70)

namespace MoleMole
{
	inline static constexpr unsigned int CheckIsInsideCameraView_TypeDefinitionIndex = 86954;

	class CheckIsInsideCameraView : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x50
		::MoleMole::Battle::Entity* ownerEntity; // 0x58
		::Class_3_DFD5D1FDB9D2A4AC* modelComponent; // 0x60
		::UnityEngine::CapsuleCollider* collider; // 0x68
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
