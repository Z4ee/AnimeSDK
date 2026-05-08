#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIAVATARFORMSWITCHDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x167FAF20)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarFormSwitchDialogPopWindowControllerContext_TypeDefinitionIndex = 79082;

	class UIAvatarFormSwitchDialogPopWindowControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 FormID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARFORMSWITCHDIALOGPOPWINDOWCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
