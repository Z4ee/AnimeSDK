#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHOUSERHYTHMSTAGEINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F099D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmStageInfoWidgetController_Context_TypeDefinitionIndex = 64592;

	class UIHouseRhythmStageInfoWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMSTAGEINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
