#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CurveObjectLogicTriggerSetting; }
namespace RPG::Client { class MonoCurveTriggerManager; }
namespace RPG::GameCore { class OptionTriggerInfo; }

#define RPG_CLIENT_MONOCURVETRIGGERMANAGER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10CC33E0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER___C__DISPLAYCLASS13_0__UPDATEMOVABLEOBJECTLOGICTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x10CC3E40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveTriggerManager___c__DisplayClass13_0_TypeDefinitionIndex = 65510;

	class MonoCurveTriggerManager___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::MonoCurveTriggerManager* __4__this; // 0x10
		::RPG::GameCore::OptionTriggerInfo* triggerInfo; // 0x18
		::RPG::Client::CurveObjectLogicTriggerSetting* setting; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateMovableObjectLogicTrigger_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER___C__DISPLAYCLASS13_0__UPDATEMOVABLEOBJECTLOGICTRIGGER_B__0_OFFSET))(this);
		}
	};
}
