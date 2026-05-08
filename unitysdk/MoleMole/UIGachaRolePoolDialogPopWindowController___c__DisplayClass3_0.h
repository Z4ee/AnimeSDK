#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaRolePoolDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIGACHAROLEPOOLDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162BD850)
#define MOLEMOLE_UIGACHAROLEPOOLDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_0__ONUIINIT_B__2_OFFSET UNITYSDK_OFFSET(0x162BD860)
#define MOLEMOLE_UIGACHAROLEPOOLDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_0__ONUIINIT_B__3_OFFSET UNITYSDK_OFFSET(0x162BDA40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaRolePoolDialogPopWindowController___c__DisplayClass3_0_TypeDefinitionIndex = 49822;

	class UIGachaRolePoolDialogPopWindowController___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action* __9__3; // 0x10
		::MoleMole::UIGachaRolePoolDialogPopWindowController* __4__this; // 0x18
		::System::Single fadeDuration; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_0__ONUIINIT_B__2_OFFSET))(this, _);
		}

		::System::Void _OnUIInit_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAROLEPOOLDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_0__ONUIINIT_B__3_OFFSET))(this);
		}
	};
}
