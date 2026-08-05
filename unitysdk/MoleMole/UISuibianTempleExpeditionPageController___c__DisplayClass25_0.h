#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISuibianTempleExpeditionAreaWidgetController; }

#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1676DEF0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__DISPLAYCLASS25_0__FINDAREAGAMEOBJECT_B__0_OFFSET UNITYSDK_OFFSET(0x1676DF00)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleExpeditionPageController___c__DisplayClass25_0_TypeDefinitionIndex = 62509;

	class UISuibianTempleExpeditionPageController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Int32 areaID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindAreaGameObject_b__0(::MoleMole::UISuibianTempleExpeditionAreaWidgetController* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UISuibianTempleExpeditionAreaWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__DISPLAYCLASS25_0__FINDAREAGAMEOBJECT_B__0_OFFSET))(this, match);
		}
	};
}
