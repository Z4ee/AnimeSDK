#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIGrandMarcelAdventurePageContext_RoomType.h"

class Class_1_BE6BF7909AD9D940;

#define MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19011010)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelFriendCardRowWidgetController_Context_TypeDefinitionIndex = 53359;

	class UIMarcelFriendCardRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_BE6BF7909AD9D940* briefInfo; // 0x28
		::MoleMole::UIGrandMarcelAdventurePageContext_RoomType CurRoomType; // 0x30
		::System::Boolean isFriendInRoom; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELFRIENDCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
