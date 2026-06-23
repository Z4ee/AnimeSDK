#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_AE39A46B421CC812.h"

namespace System { class Action; }

#define MOLEMOLE_UIPLAYERSKINSWITCHROLECARDWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18213570)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerSkinSwitchRoleCardWidgetControllerContext_TypeDefinitionIndex = 76751;

	class UIPlayerSkinSwitchRoleCardWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClickItemAction; // 0x28
		::System::Boolean Unlocked; // 0x30
		::System::Boolean Tried; // 0x31
		::System::Boolean Equipped; // 0x32
		::Struct_2_AE39A46B421CC812 SkinID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHROLECARDWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
