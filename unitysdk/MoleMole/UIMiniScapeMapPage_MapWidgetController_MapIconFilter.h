#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMiniScapeMapPage_MapWidgetController; }

#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONFILTER_CANSHOW_OFFSET UNITYSDK_OFFSET(0x13FCE2D0)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONFILTER_ISCURRENTSTATEANDRES_OFFSET UNITYSDK_OFFSET(0x13FCE760)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x13FCE2C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniScapeMapPage_MapWidgetController_MapIconFilter_TypeDefinitionIndex = 80851;

	class UIMiniScapeMapPage_MapWidgetController_MapIconFilter : public ::System::Object
	{
	public:
		::MoleMole::UIMiniScapeMapPage_MapWidgetController* _owner; // 0x10

		::System::Void _ctor(::MoleMole::UIMiniScapeMapPage_MapWidgetController* owner)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMiniScapeMapPage_MapWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONFILTER__CTOR_OFFSET))(this, owner);
		}

		::System::Boolean CanShow(::System::Int32 mapIconUniqueID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONFILTER_CANSHOW_OFFSET))(this, mapIconUniqueID);
		}

		::System::Boolean IsCurrentStateAndRes(::System::Int32 mapIconUniqueID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MAPICONFILTER_ISCURRENTSTATEANDRES_OFFSET))(this, mapIconUniqueID);
		}
	};
}
