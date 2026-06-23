#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityDetectiveMissionRowWidgetController; }

#define MOLEMOLE_UIACTIVITYDETECTIVEMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A34E50)
#define MOLEMOLE_UIACTIVITYDETECTIVEMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__TRACKQUESTTHENOPENMAINPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x18A34E60)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityDetectiveMissionRowWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 50941;

	class UIActivityDetectiveMissionRowWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivityDetectiveMissionRowWidgetController* __4__this; // 0x10
		::System::Int32 questID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVEMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _TrackQuestThenOpenMainPage_b__0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYDETECTIVEMISSIONROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__TRACKQUESTTHENOPENMAINPAGE_B__0_OFFSET))(this, success);
		}
	};
}
