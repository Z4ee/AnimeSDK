#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISOCIALCIRCLEMAIN_FINDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15A2DC30)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMain_FindWidgetController_Context_TypeDefinitionIndex = 55183;

	class UISocialCircleMain_FindWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAIN_FINDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
