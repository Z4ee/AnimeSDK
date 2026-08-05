#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_EB80B128A1E01405;
namespace MoleMole { class UIThreeDMapElement_ErosionAreaContext; }

#define MOLEMOLE_UIURBANMAPPOINTEROSIONAREAWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x112C1DB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointErosionAreaWidgetController_TypeDefinitionIndex = 70554;

	class UIUrbanMapPointErosionAreaWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_EB80B128A1E01405*, ::MoleMole::UIThreeDMapElement_ErosionAreaContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTEROSIONAREAWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
