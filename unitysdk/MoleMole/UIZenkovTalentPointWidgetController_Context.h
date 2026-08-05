#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839;
template <typename T> class Class_0_16E4307DCC419505_164;

#define MOLEMOLE_UIZENKOVTALENTPOINTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1165EDD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovTalentPointWidgetController_Context_TypeDefinitionIndex = 43259;

	class UIZenkovTalentPointWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839* Node; // 0x28
		::Class_0_16E4307DCC419505_164<::Class_2_AF5BA1C65F12F4B1_Class_2_35FBCE11E39E6839*>* CurrentSelectedNode; // 0x30
		::System::Boolean ShowInfoOnly; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVTALENTPOINTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
