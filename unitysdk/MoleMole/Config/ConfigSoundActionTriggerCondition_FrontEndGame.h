#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_FRONTENDGAME_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1BD61400)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_FRONTENDGAME_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1BD613C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_FRONTENDGAME_ISFRONTENDGAME_OFFSET UNITYSDK_OFFSET(0x1BD61460)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_FRONTENDGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD61630)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_FrontEndGame_TypeDefinitionIndex = 76788;

	class ConfigSoundActionTriggerCondition_FrontEndGame : public ::System::Object
	{
	public:
		::System::Boolean invert; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_FRONTENDGAME__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_FRONTENDGAME_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Class_0_16E4307DCC419505_197* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_FRONTENDGAME_EVALUATE_OFFSET))(this, context);
		}

		static ::System::Boolean IsFrontEndGame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_FRONTENDGAME_ISFRONTENDGAME_OFFSET))();
		}
	};
}
