#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_A80307EC4085433D;
namespace MoleMole { class UIThreeDMapElement_ViewPointContext; }

#define MOLEMOLE_UIURBANMAPPOINTVIEWPOINTWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16104030)
#define MOLEMOLE_UIURBANMAPPOINTVIEWPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x161040E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointViewPointWidgetController_TypeDefinitionIndex = 72176;

	class UIUrbanMapPointViewPointWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_A80307EC4085433D*, ::MoleMole::UIThreeDMapElement_ViewPointContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTVIEWPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTVIEWPOINTWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}
	};
}
