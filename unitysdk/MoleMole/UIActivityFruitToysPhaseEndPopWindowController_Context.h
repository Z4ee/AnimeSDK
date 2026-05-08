#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIACTIVITYFRUITTOYSPHASEENDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x163294B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFruitToysPhaseEndPopWindowController_Context_TypeDefinitionIndex = 45885;

	class UIActivityFruitToysPhaseEndPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* OverrideFadeOutAnim; // 0x28
		::System::String* OverrideFadeInAnim; // 0x30
		::System::Int32 PopConfigID; // 0x38
		::System::Boolean PlayCompleteAnim; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFRUITTOYSPHASEENDPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
