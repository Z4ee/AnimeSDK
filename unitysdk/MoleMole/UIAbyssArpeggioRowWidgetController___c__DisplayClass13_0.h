#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_9FEE7E7D3F46814D_1;
namespace MoleMole { class UIAbyssArpeggioRowWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIABYSSARPEGGIOROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C7480)
#define MOLEMOLE_UIABYSSARPEGGIOROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHSTATE_B__3_OFFSET UNITYSDK_OFFSET(0x1A1C7490)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssArpeggioRowWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 48412;

	class UIAbyssArpeggioRowWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAbyssArpeggioRowWidgetController* __4__this; // 0x10
		::System::Action* __9__3; // 0x18
		::Class_3_9FEE7E7D3F46814D_1* chapterData; // 0x20
		::System::Boolean isUnlock; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshState_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOROWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__REFRESHSTATE_B__3_OFFSET))(this);
		}
	};
}
