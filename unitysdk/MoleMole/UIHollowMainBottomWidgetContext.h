#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15263E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetContext_TypeDefinitionIndex = 70343;

	class UIHollowMainBottomWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Single PunishOverloadFadeOutTime; // 0x28
		::System::Single StanimaValue; // 0x2C
		::System::Boolean TopUI; // 0x30
		::System::Boolean DontPlaySound; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
