#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CurveMovementHandler; }
namespace RPG::Client { class MonoCurveTriggerManager; }

#define RPG_CLIENT_MONOCURVETRIGGERMANAGER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9C269E0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER___C__DISPLAYCLASS6_0__SETUPMOVABLEOBJECTTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x9C28170)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER___C__DISPLAYCLASS6_0__SETUPMOVABLEOBJECTTRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x9C281A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveTriggerManager___c__DisplayClass6_0_TypeDefinitionIndex = 55981;

	class MonoCurveTriggerManager___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::CurveMovementHandler* handler; // 0x10
		::RPG::Client::MonoCurveTriggerManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupMovableObjectTrigger_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER___C__DISPLAYCLASS6_0__SETUPMOVABLEOBJECTTRIGGER_B__0_OFFSET))(this);
		}

		::System::Void _SetupMovableObjectTrigger_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER___C__DISPLAYCLASS6_0__SETUPMOVABLEOBJECTTRIGGER_B__1_OFFSET))(this);
		}
	};
}
