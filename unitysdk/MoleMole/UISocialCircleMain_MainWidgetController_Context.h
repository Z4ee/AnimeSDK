#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISOCIALCIRCLEMAIN_MAINWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15A2DC80)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMain_MainWidgetController_Context_TypeDefinitionIndex = 66484;

	class UISocialCircleMain_MainWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 FirstShowMainPageTabUid; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAIN_MAINWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
