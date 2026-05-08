#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTTAGWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x167FAF60)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarSpecialAwakenContrastTagWidgetControllerContext_TypeDefinitionIndex = 76817;

	class UIAvatarSpecialAwakenContrastTagWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 TagID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSPECIALAWAKENCONTRASTTAGWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
