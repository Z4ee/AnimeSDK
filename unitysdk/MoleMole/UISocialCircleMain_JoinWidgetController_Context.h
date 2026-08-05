#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISOCIALCIRCLEMAIN_JOINWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x130112D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMain_JoinWidgetController_Context_TypeDefinitionIndex = 73127;

	class UISocialCircleMain_JoinWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAIN_JOINWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
