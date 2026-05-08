#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1D6B384C0B7DC7C3;
class Class_2_1B9E82423379AC42_Class_1_3008768648A5355A;
namespace MoleMole { class UIActivityNewplayerInfoV2WidgetController; }

#define MOLEMOLE_UIACTIVITYNEWPLAYERINFOV2WIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16444AE0)
#define MOLEMOLE_UIACTIVITYNEWPLAYERINFOV2WIDGETCONTROLLER___C__DISPLAYCLASS20_0__UPDATEMISSIONTASKITEM_B__0_OFFSET UNITYSDK_OFFSET(0x16444AF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityNewplayerInfoV2WidgetController___c__DisplayClass20_0_TypeDefinitionIndex = 65470;

	class UIActivityNewplayerInfoV2WidgetController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::Class_2_1B9E82423379AC42_Class_1_3008768648A5355A* _view; // 0x10
		::MoleMole::UIActivityNewplayerInfoV2WidgetController* __4__this; // 0x18
		::Class_1_1D6B384C0B7DC7C3* missionTask; // 0x20
		::System::Int32 displayIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNEWPLAYERINFOV2WIDGETCONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateMissionTaskItem_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYNEWPLAYERINFOV2WIDGETCONTROLLER___C__DISPLAYCLASS20_0__UPDATEMISSIONTASKITEM_B__0_OFFSET))(this);
		}
	};
}
