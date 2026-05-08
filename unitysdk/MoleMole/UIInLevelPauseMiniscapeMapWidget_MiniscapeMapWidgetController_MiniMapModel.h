#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1AF58D2D7D5CC9BA_Class_0_16E7307DCC43CB2C_3;
namespace MoleMole { class UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController; }

#define MOLEMOLE_UIINLEVELPAUSEMINISCAPEMAPWIDGET_MINISCAPEMAPWIDGETCONTROLLER_MINIMAPMODEL_GET_SUBMAPDATA_OFFSET UNITYSDK_OFFSET(0x15D92950)
#define MOLEMOLE_UIINLEVELPAUSEMINISCAPEMAPWIDGET_MINISCAPEMAPWIDGETCONTROLLER_MINIMAPMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x15D92980)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController_MiniMapModel_TypeDefinitionIndex = 38761;

	class UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController_MiniMapModel : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController* _uiController; // 0x10

		::System::Void _ctor(::MoleMole::UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController* uiController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEMINISCAPEMAPWIDGET_MINISCAPEMAPWIDGETCONTROLLER_MINIMAPMODEL__CTOR_OFFSET))(this, uiController);
		}

		::Class_2_1AF58D2D7D5CC9BA_Class_0_16E7307DCC43CB2C_3* get_SubMapData()
		{
			return ((::Class_2_1AF58D2D7D5CC9BA_Class_0_16E7307DCC43CB2C_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEMINISCAPEMAPWIDGET_MINISCAPEMAPWIDGETCONTROLLER_MINIMAPMODEL_GET_SUBMAPDATA_OFFSET))(this);
		}
	};
}
