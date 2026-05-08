#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1AF58D2D7D5CC9BA_Class_0_16E7307DCC43CB2C_3;
namespace MoleMole { class UIMiniScapeMapPage_MapWidgetController; }

#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPMODEL_GET_SUBMAPDATA_OFFSET UNITYSDK_OFFSET(0x150FBDD0)
#define MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x150FBE00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniScapeMapPage_MapWidgetController_MiniMapModel_TypeDefinitionIndex = 80852;

	class UIMiniScapeMapPage_MapWidgetController_MiniMapModel : public ::System::Object
	{
	public:
		::MoleMole::UIMiniScapeMapPage_MapWidgetController* _uiController; // 0x10

		::System::Void _ctor(::MoleMole::UIMiniScapeMapPage_MapWidgetController* uiController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMiniScapeMapPage_MapWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPMODEL__CTOR_OFFSET))(this, uiController);
		}

		::Class_2_1AF58D2D7D5CC9BA_Class_0_16E7307DCC43CB2C_3* get_SubMapData()
		{
			return ((::Class_2_1AF58D2D7D5CC9BA_Class_0_16E7307DCC43CB2C_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAPPAGE_MAPWIDGETCONTROLLER_MINIMAPMODEL_GET_SUBMAPDATA_OFFSET))(this);
		}
	};
}
