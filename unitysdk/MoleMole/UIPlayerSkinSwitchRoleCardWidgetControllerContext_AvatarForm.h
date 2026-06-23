#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_BD9D83395C3D28CB.h"

namespace System { class Action; }

#define MOLEMOLE_UIPLAYERSKINSWITCHROLECARDWIDGETCONTROLLERCONTEXT_AVATARFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x182135C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerSkinSwitchRoleCardWidgetControllerContext_AvatarForm_TypeDefinitionIndex = 66036;

	class UIPlayerSkinSwitchRoleCardWidgetControllerContext_AvatarForm : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnClickItemAction; // 0x28
		::Struct_2_BD9D83395C3D28CB FormConfigData; // 0x30
		::System::Boolean Unlocked; // 0x48
		::System::Boolean Equipped; // 0x49

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHROLECARDWIDGETCONTROLLERCONTEXT_AVATARFORM__CTOR_OFFSET))(this);
		}
	};
}
