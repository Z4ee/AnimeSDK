#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController; }

#define MOLEMOLE_UIINLEVELPAUSEMINISCAPEMAPWIDGET_MINISCAPEMAPWIDGETCONTROLLER_MAPICONFILTER_CANSHOW_OFFSET UNITYSDK_OFFSET(0x186F0B50)
#define MOLEMOLE_UIINLEVELPAUSEMINISCAPEMAPWIDGET_MINISCAPEMAPWIDGETCONTROLLER_MAPICONFILTER_ISCURRENTSTATEANDRES_OFFSET UNITYSDK_OFFSET(0x186F0DA0)
#define MOLEMOLE_UIINLEVELPAUSEMINISCAPEMAPWIDGET_MINISCAPEMAPWIDGETCONTROLLER_MAPICONFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x186F0B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController_MapIconFilter_TypeDefinitionIndex = 55955;

	class UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController_MapIconFilter : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController* _owner; // 0x10

		::System::Void _ctor(::MoleMole::UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController* owner)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEMINISCAPEMAPWIDGET_MINISCAPEMAPWIDGETCONTROLLER_MAPICONFILTER__CTOR_OFFSET))(this, owner);
		}

		::System::Boolean CanShow(::System::Int32 mapIconUniqueID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEMINISCAPEMAPWIDGET_MINISCAPEMAPWIDGETCONTROLLER_MAPICONFILTER_CANSHOW_OFFSET))(this, mapIconUniqueID);
		}

		::System::Boolean IsCurrentStateAndRes(::System::Int32 mapIconUniqueID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEMINISCAPEMAPWIDGET_MINISCAPEMAPWIDGETCONTROLLER_MAPICONFILTER_ISCURRENTSTATEANDRES_OFFSET))(this, mapIconUniqueID);
		}
	};
}
