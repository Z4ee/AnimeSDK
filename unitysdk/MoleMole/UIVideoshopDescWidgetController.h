#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralShopDescWidgetController.h"

class Class_2_208CC9941471731A_987;

#define MOLEMOLE_UIVIDEOSHOPDESCWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x10EFC7C0)
#define MOLEMOLE_UIVIDEOSHOPDESCWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10EFC980)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopDescWidgetController_TypeDefinitionIndex = 44419;

	class UIVideoshopDescWidgetController : public ::MoleMole::UIGeneralShopDescWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPDESCWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetByTemplate(::Class_2_208CC9941471731A_987* template_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_987*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPDESCWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET))(this, template_);
		}
	};
}
