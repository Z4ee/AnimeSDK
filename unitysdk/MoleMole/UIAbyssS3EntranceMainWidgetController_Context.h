#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1610EE50)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS3EntranceMainWidgetController_Context_TypeDefinitionIndex = 59904;

	class UIAbyssS3EntranceMainWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
