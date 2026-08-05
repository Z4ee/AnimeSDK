#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x189CA4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMapZenkovCountDownWidgetController_Context_TypeDefinitionIndex = 80939;

	class UIMapZenkovCountDownWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean ShowBlink; // 0x28
		::System::Boolean ShowIcon; // 0x29
		::System::Boolean ShowLock; // 0x2A
		::System::Boolean HideText; // 0x2B
		::System::UInt32 TargetTimeMs; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAPZENKOVCOUNTDOWNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
