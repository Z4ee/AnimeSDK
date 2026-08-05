#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBAAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetContext_TypeDefinitionIndex = 78736;

	class UIHollowMainBottomWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Single StanimaValue; // 0x28
		::System::Boolean TopUI; // 0x2C
		::System::Boolean DontPlaySound; // 0x2D
		::System::Single PunishOverloadFadeOutTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
