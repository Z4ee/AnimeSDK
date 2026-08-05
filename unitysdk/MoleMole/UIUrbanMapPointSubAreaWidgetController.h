#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_83D5CA116D5B69FD;
namespace MoleMole { class UIThreeDMapElement_SubAreaContext; }

#define MOLEMOLE_UIURBANMAPPOINTSUBAREAWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x162AD2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointSubAreaWidgetController_TypeDefinitionIndex = 59490;

	class UIUrbanMapPointSubAreaWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_83D5CA116D5B69FD*, ::MoleMole::UIThreeDMapElement_SubAreaContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTSUBAREAWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
