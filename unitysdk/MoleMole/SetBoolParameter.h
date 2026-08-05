#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

class Class_3_F33F9DC5F4112336;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_SETBOOLPARAMETER_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x14A1FD70)
#define MOLEMOLE_SETBOOLPARAMETER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14A1FC20)
#define MOLEMOLE_SETBOOLPARAMETER_ONRESET_OFFSET UNITYSDK_OFFSET(0x14A20420)
#define MOLEMOLE_SETBOOLPARAMETER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14A1FE90)
#define MOLEMOLE_SETBOOLPARAMETER_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x14A20390)
#define MOLEMOLE_SETBOOLPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x14A204B0)
#define MOLEMOLE_SETBOOLPARAMETER___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14A20540)
#define MOLEMOLE_SETBOOLPARAMETER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x14A205D0)
#define MOLEMOLE_SETBOOLPARAMETER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14A20660)

namespace MoleMole
{
	inline static constexpr unsigned int SetBoolParameter_TypeDefinitionIndex = 71227;

	class SetBoolParameter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* boolValue; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::BehaviorDesigner::Runtime::SharedString* CustomKey; // 0x68
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x70
		::MoleMole::Battle::Entity* ownerEntity; // 0x78
		::MoleMole::AITargetType TargetType; // 0x80
		::System::Int32 hashID; // 0x84
		::System::Boolean setOnce; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER_ONAWAKE_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetTargetEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER_GETTARGETENTITY_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER_ONUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ResetValue(::Class_3_F33F9DC5F4112336* animatorComponent, ::System::Boolean origVale)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER_RESETVALUE_OFFSET))(this, animatorComponent, origVale);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETBOOLPARAMETER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
