#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_130;
template <typename T> class Class_0_16E4307DCC419505_164;

#define MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1148AD90)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovCollectProPointWidgetController_Context_TypeDefinitionIndex = 55226;

	class UIZenkovCollectProPointWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_130* Config; // 0x28
		::Class_0_16E4307DCC419505_164<::System::Int32>* CurrentTabCollectedCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOLLECTPROPOINTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
