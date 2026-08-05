#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AttackType.h"

class Class_3_0D4C1A014C7CC9DE;
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CHECKAIATTACKTYPE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11454D70)
#define MOLEMOLE_CHECKAIATTACKTYPE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11454F60)
#define MOLEMOLE_CHECKAIATTACKTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x11455170)
#define MOLEMOLE_CHECKAIATTACKTYPE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11455210)
#define MOLEMOLE_CHECKAIATTACKTYPE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x114552A0)

namespace MoleMole
{
	inline static constexpr unsigned int CheckAIAttackType_TypeDefinitionIndex = 40677;

	class CheckAIAttackType : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::MoleMole::Battle::Entity* _ownerEntity; // 0x50
		::Class_3_0D4C1A014C7CC9DE* _levelAIComponent; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::MoleMole::AttackType AttackType; // 0x68
		::System::Boolean IsEqual; // 0x6C
		::System::Boolean IsSelf; // 0x6D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAIATTACKTYPE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAIATTACKTYPE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAIATTACKTYPE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAIATTACKTYPE___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHECKAIATTACKTYPE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
