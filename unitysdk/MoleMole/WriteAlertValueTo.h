#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_4_FFDCB461A077D183;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace MoleMole { class SharedGameEntity; }

#define MOLEMOLE_WRITEALERTVALUETO_ONRESET_OFFSET UNITYSDK_OFFSET(0xEBDAF70)
#define MOLEMOLE_WRITEALERTVALUETO_ONSTART_OFFSET UNITYSDK_OFFSET(0xEBDADB0)
#define MOLEMOLE_WRITEALERTVALUETO_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xEBDAF00)
#define MOLEMOLE_WRITEALERTVALUETO__CTOR_OFFSET UNITYSDK_OFFSET(0xEBDAFC0)
#define MOLEMOLE_WRITEALERTVALUETO___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0xEBDB050)
#define MOLEMOLE_WRITEALERTVALUETO___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0xEBDB0E0)
#define MOLEMOLE_WRITEALERTVALUETO___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xEBDB170)

namespace MoleMole
{
	inline static constexpr unsigned int WriteAlertValueTo_TypeDefinitionIndex = 69242;

	class WriteAlertValueTo : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* TargetSharedValue; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::Class_4_FFDCB461A077D183* _enterBattleComponent; // 0x68

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
