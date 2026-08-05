#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_288;

#define MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER_SCENETIMECOUNTDOWNCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15E8BE00)

namespace MoleMole
{
	inline static constexpr unsigned int UISceneTimeCountDownChildWindowController_SceneTimeCountDownContext_TypeDefinitionIndex = 57797;

	class UISceneTimeCountDownChildWindowController_SceneTimeCountDownContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_288* Support; // 0x28
		::System::UInt32 StartTime; // 0x30
		::System::UInt32 EndTime; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCENETIMECOUNTDOWNCHILDWINDOWCONTROLLER_SCENETIMECOUNTDOWNCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
