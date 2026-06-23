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

#define MOLEMOLE_TRIGGERMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1266A090)
#define MOLEMOLE_TRIGGERMOVE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1266A6B0)
#define MOLEMOLE_TRIGGERMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1266A2F0)
#define MOLEMOLE_TRIGGERMOVE_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x1266A620)
#define MOLEMOLE_TRIGGERMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1266A740)
#define MOLEMOLE_TRIGGERMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1266A7D0)
#define MOLEMOLE_TRIGGERMOVE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1266A860)
#define MOLEMOLE_TRIGGERMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1266A8F0)

namespace MoleMole
{
	inline static constexpr unsigned int TriggerMove_TypeDefinitionIndex = 83071;

	class TriggerMove : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Class_3_F33F9DC5F4112336* animatorComponent; // 0x58
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x60
		::MoleMole::Battle::Entity* ownerEntity; // 0x68
		::Class_3_3B42BC0680587011* inputComponent; // 0x70
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x78
		::BehaviorDesigner::Runtime::SharedInt* intValue; // 0x80
		::System::Int32 hashID; // 0x88
		::System::Boolean setOnce; // 0x8C

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
