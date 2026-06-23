#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_57F7F2BF8C55D6B6;

#define MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17632E40)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemPlayerInfoPageController_Context_TypeDefinitionIndex = 54349;

	class UIFriendSystemPlayerInfoPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_57F7F2BF8C55D6B6* selfSysInfo; // 0x28
		::System::Int32 InitTabIdx; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMPLAYERINFOPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
