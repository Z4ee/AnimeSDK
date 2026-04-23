#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CurveObjectLogicTriggerSetting; }
namespace RPG::Client { class MonoCurveTriggerManager; }
namespace RPG::GameCore { class OptionTriggerInfo; }

#define RPG_CLIENT_MONOCURVETRIGGERMANAGER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA923880)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER___C__DISPLAYCLASS13_0__UPDATEMOVABLEOBJECTLOGICTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0xA924270)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveTriggerManager___c__DisplayClass13_0_TypeDefinitionIndex = 63222;

	class MonoCurveTriggerManager___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::CurveObjectLogicTriggerSetting* setting; // 0x10
		::RPG::Client::MonoCurveTriggerManager* __4__this; // 0x18
		::RPG::GameCore::OptionTriggerInfo* triggerInfo; // 0x20

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
