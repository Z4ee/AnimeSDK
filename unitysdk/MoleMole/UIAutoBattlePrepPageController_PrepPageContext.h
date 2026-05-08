#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_PREPPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x167FAE70)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePrepPageController_PrepPageContext_TypeDefinitionIndex = 52810;

	class UIAutoBattlePrepPageController_PrepPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnUIOpen; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER_PREPPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
