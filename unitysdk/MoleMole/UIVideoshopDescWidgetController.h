#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralShopDescWidgetController.h"

class Class_2_208CC9941471731A_263;

#define MOLEMOLE_UIVIDEOSHOPDESCWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0xE85C910)
#define MOLEMOLE_UIVIDEOSHOPDESCWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE85CAD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopDescWidgetController_TypeDefinitionIndex = 54174;

	class UIVideoshopDescWidgetController : public ::MoleMole::UIGeneralShopDescWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPDESCWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetByTemplate(::Class_2_208CC9941471731A_263* template_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_263*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPDESCWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET))(this, template_);
		}
	};
}
