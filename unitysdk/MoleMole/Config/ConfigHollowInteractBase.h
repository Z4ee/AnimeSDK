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

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1230C2C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractBase_TypeDefinitionIndex = 51978;

	class ConfigHollowInteractBase : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowInteractEffect* Effect; // 0x10
		::MoleMole::Config::ConfigHollowInteractEffect* FailureEffect; // 0x18
		::MoleMole::Config::ConfigHollowInteractCondition* Condition; // 0x20
		::MoleMole::Config::HollowInteractType InteractType; // 0x28
		::MoleMole::Config::InteractTargetType Type; // 0x2C
		::MoleMole::InputLogicEventType ConsoleOrKeyboardEvent; // 0x30
		::MoleMole::Config::InteractPosType PosType; // 0x34
		::System::Int32 Group; // 0x38
		::System::Boolean BreakSleep; // 0x3C
		::System::Boolean DestroyAfterInteract; // 0x3D
		::System::Boolean EnableDefault; // 0x3E
		::System::Boolean ForbidMove; // 0x3F
		::MoleMole::Config::BindSendMsgType BindMove; // 0x40
		::System::Int32 Priority; // 0x44
		::System::Boolean IsInteractFailure; // 0x48
		::System::Boolean TryMoveToTarget; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTBASE__CTOR_OFFSET))(this);
		}
	};
}
