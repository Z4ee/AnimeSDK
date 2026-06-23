#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1A84C744BF703CC0.h"
#include "unitysdk/System/Object.h"

class Class_1_9EDE5D0623B668B8;

#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS93_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15B63780)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS93_0__REFRESHCIRCLEHISTORYMESSAGES_B__0_OFFSET UNITYSDK_OFFSET(0x15B63790)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController___c__DisplayClass93_0_TypeDefinitionIndex = 50163;

	class UIChatWindowWidgetController___c__DisplayClass93_0 : public ::System::Object
	{
	public:
		::Struct_2_1A84C744BF703CC0 locatorIdentifier; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS93_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshCircleHistoryMessages_b__0(::Class_1_9EDE5D0623B668B8* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_9EDE5D0623B668B8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS93_0__REFRESHCIRCLEHISTORYMESSAGES_B__0_OFFSET))(this, context);
		}
	};
}
