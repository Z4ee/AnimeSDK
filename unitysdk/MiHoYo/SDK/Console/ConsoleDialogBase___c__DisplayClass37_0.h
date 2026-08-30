#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleDialogBase; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B78FBC0)
#define MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE___C__DISPLAYCLASS37_0__REGISTERINPUTFIELDTOUCHHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0x1B78FBD0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleDialogBase___c__DisplayClass37_0_TypeDefinitionIndex = 8944;

	class ConsoleDialogBase___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::ConsoleDialogBase* __4__this; // 0x10
		::UnityEngine::GameObject* inputFieldObject; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterInputFieldTouchHandler_b__0(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEDIALOGBASE___C__DISPLAYCLASS37_0__REGISTERINPUTFIELDTOUCHHANDLER_B__0_OFFSET))(this, a1);
		}
	};
}
