#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_CF6254B260CF5CF4;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FOLLOWTARGET_CHECKLOCKTARGETVALID_OFFSET UNITYSDK_OFFSET(0x19128A20)
#define MOLEMOLE_FOLLOWTARGET_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19128170)
#define MOLEMOLE_FOLLOWTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x191282F0)
#define MOLEMOLE_FOLLOWTARGET_TRYGETLOCKENTITY_OFFSET UNITYSDK_OFFSET(0x19128350)
#define MOLEMOLE_FOLLOWTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x19128BD0)
#define MOLEMOLE_FOLLOWTARGET___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x19128C60)
#define MOLEMOLE_FOLLOWTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19128CF0)

namespace MoleMole
{
	inline static constexpr unsigned int FollowTarget_TypeDefinitionIndex = 79238;

	class FollowTarget : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::Entity* _followerEntity; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::Class_3_CF6254B260CF5CF4* _attackTargetComponent_follower; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWTARGET_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWTARGET_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean TryGetLockEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWTARGET_TRYGETLOCKENTITY_OFFSET))(this);
		}

		::System::Boolean CheckLockTargetValid(::MoleMole::Battle::Entity* lockEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWTARGET_CHECKLOCKTARGETVALID_OFFSET))(this, lockEntity);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWTARGET___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWTARGET___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
