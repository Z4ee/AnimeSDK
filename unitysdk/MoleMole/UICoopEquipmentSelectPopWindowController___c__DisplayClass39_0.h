#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleSelectPageContext; }

#define MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET UNITYSDK_OFFSET(0x164835B0)
#define MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS39_0__ONJUMPBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x164835C0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopEquipmentSelectPopWindowController___c__DisplayClass39_0_TypeDefinitionIndex = 80526;

	class UICoopEquipmentSelectPopWindowController___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageContext* context; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS39_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnJumpBtnClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPEQUIPMENTSELECTPOPWINDOWCONTROLLER___C__DISPLAYCLASS39_0__ONJUMPBTNCLICK_B__0_OFFSET))(this);
		}
	};
}
