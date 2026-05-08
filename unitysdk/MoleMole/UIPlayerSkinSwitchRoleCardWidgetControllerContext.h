#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_AE39A46B421CC812_1.h"

namespace System { class Action; }

#define MOLEMOLE_UIPLAYERSKINSWITCHROLECARDWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15C90460)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerSkinSwitchRoleCardWidgetControllerContext_TypeDefinitionIndex = 79052;

	class UIPlayerSkinSwitchRoleCardWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClickItemAction; // 0x28
		::Struct_2_AE39A46B421CC812_1 SkinID; // 0x30
		::System::Boolean Tried; // 0x38
		::System::Boolean Equipped; // 0x39
		::System::Boolean Unlocked; // 0x3A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHROLECARDWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
