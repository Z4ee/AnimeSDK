#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_4_FFDCB461A077D183;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_SETALERTVALUE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1236C110)
#define MOLEMOLE_SETALERTVALUE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1236BF10)
#define MOLEMOLE_SETALERTVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1236C060)
#define MOLEMOLE_SETALERTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1236C160)
#define MOLEMOLE_SETALERTVALUE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1236C1F0)
#define MOLEMOLE_SETALERTVALUE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1236C280)
#define MOLEMOLE_SETALERTVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1236C310)

namespace MoleMole
{
	inline static constexpr unsigned int SetAlertValue_TypeDefinitionIndex = 48728;

	class SetAlertValue : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* TargetSharedValue; // 0x58
		::Class_4_FFDCB461A077D183* _enterBattleComponent; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SETALERTVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
