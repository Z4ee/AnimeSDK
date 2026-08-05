#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BindSendMsgType.h"
#include "unitysdk/MoleMole/Config/HollowInteractType.h"
#include "unitysdk/MoleMole/Config/InteractPosType.h"
#include "unitysdk/MoleMole/Config/InteractTargetType.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Object.h"

class Class_1_3E7861A5123BFC05;
namespace MoleMole::Config { class ConfigHollowInteractCondition; }
namespace MoleMole::Config { class ConfigHollowInteractEffect; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x172A5D10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractBase_TypeDefinitionIndex = 53112;

	class ConfigHollowInteractBase : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowInteractCondition* Condition; // 0x10
		::MoleMole::Config::ConfigHollowInteractEffect* Effect; // 0x18
		::MoleMole::Config::ConfigHollowInteractEffect* FailureEffect; // 0x20
		::System::Int32 Group; // 0x28
		::MoleMole::Config::HollowInteractType InteractType; // 0x2C
		::System::Boolean DestroyAfterInteract; // 0x30
		::System::Boolean BreakSleep; // 0x31
		::MoleMole::Config::BindSendMsgType BindMove; // 0x34
		::MoleMole::InputLogicEventType ConsoleOrKeyboardEvent; // 0x38
		::MoleMole::Config::InteractTargetType Type; // 0x3C
		::System::Int32 Priority; // 0x40
		::MoleMole::Config::InteractPosType PosType; // 0x44
		::System::Boolean IsInteractFailure; // 0x48
		::System::Boolean TryMoveToTarget; // 0x49
		::System::Boolean EnableDefault; // 0x4A
		::System::Boolean ForbidMove; // 0x4B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTBASE__CTOR_OFFSET))(this);
		}
	};
}
