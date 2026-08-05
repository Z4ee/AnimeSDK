#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UICinemaInvitePageController; }

#define MOLEMOLE_UICINEMAINVITEWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19A9D880)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaInviteWidgetContext_TypeDefinitionIndex = 40832;

	class UICinemaInviteWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UICinemaInvitePageController* pageController; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAINVITEWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
