#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIGACHAOPTAPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB7080)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaOptAPanelWidgetController_Context_TypeDefinitionIndex = 40839;

	class UIGachaOptAPanelWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnDirtyChanged; // 0x28
		::System::Int32 GachaID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTAPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
