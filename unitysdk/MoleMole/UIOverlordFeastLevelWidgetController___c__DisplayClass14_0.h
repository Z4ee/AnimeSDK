#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIOverlordFeastLevelWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12E072F0)
#define MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS14_0__DOPLAYPROGRESSANIM_B__1_OFFSET UNITYSDK_OFFSET(0x12E07610)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastLevelWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 81867;

	class UIOverlordFeastLevelWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::UIOverlordFeastLevelWidgetController* __4__this; // 0x10
		::System::Action* onFinish; // 0x18
		::System::Single prvProgress; // 0x20
		::System::Single curProgress; // 0x24
		::System::Single duration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPlayProgressAnim_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTLEVELWIDGETCONTROLLER___C__DISPLAYCLASS14_0__DOPLAYPROGRESSANIM_B__1_OFFSET))(this);
		}
	};
}
