#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_C31B4BE00E4491D6;
namespace MoleMole { class UIThreeDMapElement_StableCarrotChipContext; }

#define MOLEMOLE_UIURBANMAPPOINTSTABLECARROTCHIPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC35B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointStableCarrotChipWidgetController_TypeDefinitionIndex = 70486;

	class UIUrbanMapPointStableCarrotChipWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_C31B4BE00E4491D6*, ::MoleMole::UIThreeDMapElement_StableCarrotChipContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTSTABLECARROTCHIPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
