#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS471_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A67A10)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS471_0__DOACTIONAFTERGENERALPOPWINDOW_B__0_OFFSET UNITYSDK_OFFSET(0x18A67A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass471_0_TypeDefinitionIndex = 76182;

	class UIBaseController___c__DisplayClass471_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10
		::MoleMole::UIBaseController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS471_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoActionAfterGeneralPopWindow_b__0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS471_0__DOACTIONAFTERGENERALPOPWINDOW_B__0_OFFSET))(this, args);
		}
	};
}
