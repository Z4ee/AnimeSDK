#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralShopDescWidgetController.h"

class Class_2_208CC9941471731A_986;

#define MOLEMOLE_UIARCADEDESCWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x18E28260)
#define MOLEMOLE_UIARCADEDESCWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E28420)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeDescWidgetController_TypeDefinitionIndex = 40601;

	class UIArcadeDescWidgetController : public ::MoleMole::UIGeneralShopDescWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEDESCWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetByTemplate(::Class_2_208CC9941471731A_986* template_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_986*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEDESCWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET))(this, template_);
		}
	};
}
