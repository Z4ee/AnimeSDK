#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15112CE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerSkinSwitchTabWidgetControllerContext_TypeDefinitionIndex = 79111;

	class UIPlayerSkinSwitchTabWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 AvatarID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
