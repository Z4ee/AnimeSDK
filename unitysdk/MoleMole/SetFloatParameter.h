#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AITargetType.h"

class Class_3_F33F9DC5F4112336;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_SETFLOATPARAMETER_GETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0x12654040)
#define MOLEMOLE_SETFLOATPARAMETER_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12653EF0)
#define MOLEMOLE_SETFLOATPARAMETER_ONRESET_OFFSET UNITYSDK_OFFSET(0x12654530)
#define MOLEMOLE_SETFLOATPARAMETER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12654160)
#define MOLEMOLE_SETFLOATPARAMETER_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x12654490)
#define MOLEMOLE_SETFLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x126545C0)
#define MOLEMOLE_SETFLOATPARAMETER___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12654650)
#define MOLEMOLE_SETFLOATPARAMETER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x126546E0)
#define MOLEMOLE_SETFLOATPARAMETER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12654770)

namespace MoleMole
{
	inline static constexpr unsigned int SetFloatParameter_TypeDefinitionIndex = 68469;

	class SetFloatParameter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* floatValue; // 0x60
		::BehaviorDesigner::Runtime::SharedString* CustomKey; // 0x68
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x70
		::MoleMole::Battle::Entity* ownerEntity; // 0x78
		::MoleMole::AITargetType TargetType; // 0x80
		::System::Boolean setOnce; // 0x84
		::System::Int32 hashID; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER_ONAWAKE_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* GetTargetEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER_GETTARGETENTITY_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER_ONUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ResetValue(::Class_3_F33F9DC5F4112336* animatorComponent, ::System::Single origVale)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER_RESETVALUE_OFFSET))(this, animatorComponent, origVale);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETFLOATPARAMETER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
