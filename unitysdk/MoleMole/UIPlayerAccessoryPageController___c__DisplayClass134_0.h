#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PlayerAccessoryType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPlayerAccessoryItemWidgetControllerContext; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS134_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13015470)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS134_0__RESETCONTEXTS_B__0_OFFSET UNITYSDK_OFFSET(0x13015480)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController___c__DisplayClass134_0_TypeDefinitionIndex = 65522;

	class UIPlayerAccessoryPageController___c__DisplayClass134_0 : public ::System::Object
	{
	public:
		::MoleMole::PlayerAccessoryType idx; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS134_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ResetContexts_b__0(::MoleMole::UIPlayerAccessoryItemWidgetControllerContext* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIPlayerAccessoryItemWidgetControllerContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER___C__DISPLAYCLASS134_0__RESETCONTEXTS_B__0_OFFSET))(this, x);
		}
	};
}
