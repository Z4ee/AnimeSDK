#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPrivateMessageReplyWidgetController; }

#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1613D110)
#define MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS29_0__SETFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x1613D120)

namespace MoleMole
{
	inline static constexpr unsigned int UIPrivateMessageReplyWidgetController___c__DisplayClass29_0_TypeDefinitionIndex = 81746;

	class UIPrivateMessageReplyWidgetController___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPrivateMessageReplyWidgetController* __4__this; // 0x10
		::System::Boolean isFinish; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetFinish_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPRIVATEMESSAGEREPLYWIDGETCONTROLLER___C__DISPLAYCLASS29_0__SETFINISH_B__0_OFFSET))(this);
		}
	};
}
