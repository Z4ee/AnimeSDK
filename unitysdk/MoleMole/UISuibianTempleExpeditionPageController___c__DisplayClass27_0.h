#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISuibianTempleExpeditionAreaWidgetController; }
namespace MoleMole { class UISuibianTempleExpeditionPageController; }

#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12C6B890)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__DISPLAYCLASS27_0__ONFOCUSAREA_B__0_OFFSET UNITYSDK_OFFSET(0x12C6B8A0)
#define MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__DISPLAYCLASS27_0__ONFOCUSAREA_B__1_OFFSET UNITYSDK_OFFSET(0x12C6B960)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleExpeditionPageController___c__DisplayClass27_0_TypeDefinitionIndex = 69870;

	class UISuibianTempleExpeditionPageController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MoleMole::UISuibianTempleExpeditionPageController* __4__this; // 0x10
		::System::Int32 areaID; // 0x18
		::System::Int32 layerID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnFocusArea_b__0(::MoleMole::UISuibianTempleExpeditionAreaWidgetController* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UISuibianTempleExpeditionAreaWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__DISPLAYCLASS27_0__ONFOCUSAREA_B__0_OFFSET))(this, match);
		}

		::System::Void _OnFocusArea_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEXPEDITIONPAGECONTROLLER___C__DISPLAYCLASS27_0__ONFOCUSAREA_B__1_OFFSET))(this);
		}
	};
}
