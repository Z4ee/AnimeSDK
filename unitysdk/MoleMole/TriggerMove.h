#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_3B42BC0680587011;
class Class_3_F33F9DC5F4112336;
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }

#define MOLEMOLE_TRIGGERMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x189229A0)
#define MOLEMOLE_TRIGGERMOVE_ONRESET_OFFSET UNITYSDK_OFFSET(0x189231C0)
#define MOLEMOLE_TRIGGERMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18922C10)
#define MOLEMOLE_TRIGGERMOVE_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x18923130)
#define MOLEMOLE_TRIGGERMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x18923250)
#define MOLEMOLE_TRIGGERMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x189232E0)
#define MOLEMOLE_TRIGGERMOVE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x18923370)
#define MOLEMOLE_TRIGGERMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x18923400)

namespace MoleMole
{
	inline static constexpr unsigned int TriggerMove_TypeDefinitionIndex = 46921;

	class TriggerMove : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::Entity* ownerEntity; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* intValue; // 0x60
		::Class_3_F33F9DC5F4112336* animatorComponent; // 0x68
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x70
		::Class_3_3B42BC0680587011* inputComponent; // 0x78
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x80
		::System::Boolean setOnce; // 0x88
		::System::Int32 hashID; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERMOVE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERMOVE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERMOVE_ONUPDATE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ResetValue(::System::Int32 origVale)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERMOVE_RESETVALUE_OFFSET))(this, origVale);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERMOVE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERMOVE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERMOVE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TRIGGERMOVE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
