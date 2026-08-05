#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"

namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }
namespace MoleMole { class SharedGameEntity; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_NAPSENDEVENT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1081D320)
#define MOLEMOLE_NAPSENDEVENT_ONSTART_OFFSET UNITYSDK_OFFSET(0x1081C9E0)
#define MOLEMOLE_NAPSENDEVENT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1081CB30)
#define MOLEMOLE_NAPSENDEVENT_RESOLVETARGET_OFFSET UNITYSDK_OFFSET(0x1081D3A0)
#define MOLEMOLE_NAPSENDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1081D620)
#define MOLEMOLE_NAPSENDEVENT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1081D6B0)
#define MOLEMOLE_NAPSENDEVENT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1081D740)
#define MOLEMOLE_NAPSENDEVENT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1081D7D0)

namespace MoleMole
{
	inline static constexpr unsigned int NapSendEvent_TypeDefinitionIndex = 51841;

	class NapSendEvent : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::Battle::Entity* ownerEntity; // 0x58
		::BehaviorDesigner::Runtime::SharedVariable* argument2; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68
		::BehaviorDesigner::Runtime::SharedVariable* argument3; // 0x70
		::BehaviorDesigner::Runtime::SharedString* eventName; // 0x78
		::BehaviorDesigner::Runtime::SharedVariable* argument1; // 0x80
		::BehaviorDesigner::Runtime::SharedString* CustomKey; // 0x88
		::MoleMole::Config::AbilityTargetting Target; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSENDEVENT__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSENDEVENT_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSENDEVENT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSENDEVENT_ONRESET_OFFSET))(this);
		}

		::System::Void ResolveTarget(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* targetList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSENDEVENT_RESOLVETARGET_OFFSET))(this, targetList);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSENDEVENT___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSENDEVENT___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPSENDEVENT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
