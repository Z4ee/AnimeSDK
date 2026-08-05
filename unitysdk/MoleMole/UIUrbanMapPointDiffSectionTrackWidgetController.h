#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_0B9DD3B9A8F92F66;
namespace MoleMole { class UIThreeDMapElement_DiffSectionTrackContext; }

#define MOLEMOLE_UIURBANMAPPOINTDIFFSECTIONTRACKWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x140D9B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointDiffSectionTrackWidgetController_TypeDefinitionIndex = 81647;

	class UIUrbanMapPointDiffSectionTrackWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_0B9DD3B9A8F92F66*, ::MoleMole::UIThreeDMapElement_DiffSectionTrackContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTDIFFSECTIONTRACKWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
