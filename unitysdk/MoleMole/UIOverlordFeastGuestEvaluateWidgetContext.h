#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18206300)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastGuestEvaluateWidgetContext_TypeDefinitionIndex = 63850;

	class UIOverlordFeastGuestEvaluateWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 guestID; // 0x28
		::System::Int32 reward; // 0x2C
		::System::Int32 score; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTGUESTEVALUATEWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
