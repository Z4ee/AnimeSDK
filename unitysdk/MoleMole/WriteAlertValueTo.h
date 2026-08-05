#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_4_C2BA23F5AA27FA67;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_WRITEALERTVALUETO_ONRESET_OFFSET UNITYSDK_OFFSET(0x112EA670)
#define MOLEMOLE_WRITEALERTVALUETO_ONSTART_OFFSET UNITYSDK_OFFSET(0x112EA4C0)
#define MOLEMOLE_WRITEALERTVALUETO_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x112EA600)
#define MOLEMOLE_WRITEALERTVALUETO__CTOR_OFFSET UNITYSDK_OFFSET(0x112EA6C0)
#define MOLEMOLE_WRITEALERTVALUETO___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x112EA750)
#define MOLEMOLE_WRITEALERTVALUETO___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x112EA7E0)
#define MOLEMOLE_WRITEALERTVALUETO___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x112EA870)

namespace MoleMole
{
	inline static constexpr unsigned int WriteAlertValueTo_TypeDefinitionIndex = 46762;

	class WriteAlertValueTo : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* TargetSharedValue; // 0x58
		::Class_4_C2BA23F5AA27FA67* _enterBattleComponent; // 0x60
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WRITEALERTVALUETO__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WRITEALERTVALUETO_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WRITEALERTVALUETO_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WRITEALERTVALUETO_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WRITEALERTVALUETO___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WRITEALERTVALUETO___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_WRITEALERTVALUETO___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
