#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIPARTNERDATEMAPLISTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A0CAC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDateMapListPopWindowController_Context_TypeDefinitionIndex = 58776;

	class UIPartnerDateMapListPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 PartnerID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEMAPLISTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
