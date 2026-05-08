#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICoopEquipmentSelectPopWindowController; }
namespace MoleMole { class UIGeneralRoleCardRowWidgetController_Context; }

#define MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EE6DE0)
#define MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS65_0__SETROLELIST_B__0_OFFSET UNITYSDK_OFFSET(0x16EE6DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopEquipmentSelectPopWindowController___c__DisplayClass65_0_TypeDefinitionIndex = 80528;

	class UICoopEquipmentSelectPopWindowController___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::MoleMole::UICoopEquipmentSelectPopWindowController* __4__this; // 0x10
		::System::Int32 defaultAvatarID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _SetRoleList_b__0(::MoleMole::UIGeneralRoleCardRowWidgetController_Context* a, ::MoleMole::UIGeneralRoleCardRowWidgetController_Context* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIGeneralRoleCardRowWidgetController_Context*, ::MoleMole::UIGeneralRoleCardRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS65_0__SETROLELIST_B__0_OFFSET))(this, a, b);
		}
	};
}
