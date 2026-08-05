#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIPARTNERDATEREWARDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17978680)

namespace MoleMole
{
	inline static constexpr unsigned int UIPartnerDateRewardPopWindowController_Context_TypeDefinitionIndex = 70040;

	class UIPartnerDateRewardPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 PartnerID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPARTNERDATEREWARDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
