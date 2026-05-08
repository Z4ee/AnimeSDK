#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_CF6254B260CF5CF4;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKHAVEATTACKTARGET_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x141DA470)
#define MOLEMOLE_CHECKHAVEATTACKTARGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x141DA620)
#define MOLEMOLE_CHECKHAVEATTACKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x141DA7C0)
#define MOLEMOLE_CHECKHAVEATTACKTARGET___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x141DA850)
#define MOLEMOLE_CHECKHAVEATTACKTARGET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x141DA8E0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckHaveAttackTarget_TypeDefinitionIndex = 64319;

	class CheckHaveAttackTarget : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::Class_3_CF6254B260CF5CF4* attackTargetComponent; // 0x50
		::MoleMole::Battle::Entity* ownerEntity; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHAVEATTACKTARGET__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHAVEATTACKTARGET_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHAVEATTACKTARGET_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHAVEATTACKTARGET___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKHAVEATTACKTARGET___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
