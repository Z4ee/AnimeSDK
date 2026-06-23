#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1AF58D2D7D5CC9BA_Class_0_16E7307DCC43CB2C_5;
namespace MoleMole { class UIMiniScapeMapPage_MapWidgetController; }

#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPMODEL_GET_SUBMAPDATA_OFFSET UNITYSDK_OFFSET(0x16D9D990)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x16D9D9C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniScapeMapPage_MapWidgetController_MiniMapModel_TypeDefinitionIndex = 47346;

	class UIMiniScapeMapPage_MapWidgetController_MiniMapModel : public ::System::Object
	{
	public:
		::MoleMole::UIMiniScapeMapPage_MapWidgetController* _uiController; // 0x10

		::System::Void _ctor(::MoleMole::UIMiniScapeMapPage_MapWidgetController* uiController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMiniScapeMapPage_MapWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPMODEL__CTOR_OFFSET))(this, uiController);
		}

		::Class_2_1AF58D2D7D5CC9BA_Class_0_16E7307DCC43CB2C_5* get_SubMapData()
		{
			return ((::Class_2_1AF58D2D7D5CC9BA_Class_0_16E7307DCC43CB2C_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPMODEL_GET_SUBMAPDATA_OFFSET))(this);
		}
	};
}
