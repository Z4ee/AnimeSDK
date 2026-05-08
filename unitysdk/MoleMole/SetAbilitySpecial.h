#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_F41D242A20F8FE06;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_SETABILITYSPECIAL_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x125EE020)
#define MOLEMOLE_SETABILITYSPECIAL_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x125EE1E0)
#define MOLEMOLE_SETABILITYSPECIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x125EE4C0)
#define MOLEMOLE_SETABILITYSPECIAL___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x125EE550)
#define MOLEMOLE_SETABILITYSPECIAL___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x125EE5E0)

namespace MoleMole
{
	inline static constexpr unsigned int SetAbilitySpecial_TypeDefinitionIndex = 71431;

	class SetAbilitySpecial : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::String* SourceAbilitySpecial; // 0x58
		::Class_3_F41D242A20F8FE06* _abilityComponent; // 0x60
		::System::String* SourceAbilityName; // 0x68
		::MoleMole::Battle::Entity* ownerEntity; // 0x70
		::System::String* TargetAbilityName; // 0x78
		::System::String* TargetAbilitySpecial; // 0x80
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x88
		::BehaviorDesigner::Runtime::SharedFloat* TargetAbilitySpecialValue; // 0x90
		::System::Boolean IsRefreshProperty; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETABILITYSPECIAL__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETABILITYSPECIAL_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETABILITYSPECIAL_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETABILITYSPECIAL___BASE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETABILITYSPECIAL___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
