#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_4_FFDCB461A077D183;
namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_HOLDALERTVALUE_ONRESET_OFFSET UNITYSDK_OFFSET(0x125CED80)
#define MOLEMOLE_HOLDALERTVALUE_ONSTART_OFFSET UNITYSDK_OFFSET(0x125CEB80)
#define MOLEMOLE_HOLDALERTVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x125CECD0)
#define MOLEMOLE_HOLDALERTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x125CEDD0)
#define MOLEMOLE_HOLDALERTVALUE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x125CEE60)
#define MOLEMOLE_HOLDALERTVALUE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x125CEEF0)
#define MOLEMOLE_HOLDALERTVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x125CEF80)

namespace MoleMole
{
	inline static constexpr unsigned int HoldAlertValue_TypeDefinitionIndex = 47434;

	class HoldAlertValue : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::Class_4_FFDCB461A077D183* _enterBattleComponent; // 0x60
		::BehaviorDesigner::Runtime::SharedBool* IsHold; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLDALERTVALUE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLDALERTVALUE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLDALERTVALUE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLDALERTVALUE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLDALERTVALUE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLDALERTVALUE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLDALERTVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
