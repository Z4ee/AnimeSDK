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

#define MOLEMOLE_TRIGGERMOVE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13ECB040)
#define MOLEMOLE_TRIGGERMOVE_ONRESET_OFFSET UNITYSDK_OFFSET(0x13ECB670)
#define MOLEMOLE_TRIGGERMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13ECB2B0)
#define MOLEMOLE_TRIGGERMOVE_RESETVALUE_OFFSET UNITYSDK_OFFSET(0x13ECB5E0)
#define MOLEMOLE_TRIGGERMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x13ECB700)
#define MOLEMOLE_TRIGGERMOVE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13ECB790)
#define MOLEMOLE_TRIGGERMOVE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x13ECB820)
#define MOLEMOLE_TRIGGERMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13ECB8B0)

namespace MoleMole
{
	inline static constexpr unsigned int TriggerMove_TypeDefinitionIndex = 76632;

	class TriggerMove : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Class_3_BA709FB56ED5FAC4* inputComponent; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* intValue; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::MoleMole::Battle::Entity* ownerEntity; // 0x70
		::BehaviorDesigner::Runtime::SharedString* paramaterName; // 0x78
		::Class_3_F33F9DC5F4112336* animatorComponent; // 0x80
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
