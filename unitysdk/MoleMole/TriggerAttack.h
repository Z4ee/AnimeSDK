#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_BA709FB56ED5FAC4;
class Class_3_F33F9DC5F4112336;
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_TRIGGERATTACK_ONATTACKTRIGGERED_OFFSET UNITYSDK_OFFSET(0x12FD2DF0)
#define MOLEMOLE_TRIGGERATTACK_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12FD2A10)
#define MOLEMOLE_TRIGGERATTACK_ONRESET_OFFSET UNITYSDK_OFFSET(0x12FD2EB0)
#define MOLEMOLE_TRIGGERATTACK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12FD2C80)
#define MOLEMOLE_TRIGGERATTACK_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x12FD2E30)
#define MOLEMOLE_TRIGGERATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x12FD2F30)
#define MOLEMOLE_TRIGGERATTACK___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12FD2FC0)
#define MOLEMOLE_TRIGGERATTACK___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x12FD3050)
#define MOLEMOLE_TRIGGERATTACK___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12FD30E0)

namespace MoleMole
{
	inline static constexpr unsigned int TriggerAttack_TypeDefinitionIndex = 64345;

	class TriggerAttack : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Class_3_F33F9DC5F4112336* animatorComponent; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::MoleMole::Battle::Entity* ownerEntity; // 0x68
		::BehaviorDesigner::Runtime::SharedInt* intValue; // 0x70
		::Class_3_BA709FB56ED5FAC4* inputComponent; // 0x78
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x80
		::System::Int32 hashID; // 0x88
		::System::Boolean setOnce; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERATTACK__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERATTACK_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERATTACK_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnAttackTriggered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERATTACK_ONATTACKTRIGGERED_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ResetValue(::System::Int32 origVale)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERATTACK_RESETVALUE_OFFSET))(this, origVale);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERATTACK_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERATTACK___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERATTACK___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERATTACK___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
