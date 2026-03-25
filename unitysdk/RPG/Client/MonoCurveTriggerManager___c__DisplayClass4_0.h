#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CurveEdgeConnectionTriggerSetting; }
namespace RPG::Client { class MonoCurveTriggerManager; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_MONOCURVETRIGGERMANAGER___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9C26290)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER___C__DISPLAYCLASS4_0__SETUPCURVEEDGECONNECTIONTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x9C28140)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveTriggerManager___c__DisplayClass4_0_TypeDefinitionIndex = 55980;

	class MonoCurveTriggerManager___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::CurveEdgeConnectionTriggerSetting* setting; // 0x10
		::RPG::Client::MonoCurveTriggerManager* __4__this; // 0x18
		::RPG::GameCore::GameEntity* propEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupCurveEdgeConnectionTrigger_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER___C__DISPLAYCLASS4_0__SETUPCURVEEDGECONNECTIONTRIGGER_B__0_OFFSET))(this);
		}
	};
}
