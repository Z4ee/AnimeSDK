#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_C4B3DE2B51336325;
namespace MoleMole { class ConfigUIUrbanMap; }

#define MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16786E20)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapHUDSingleImageWidgetController_Context_TypeDefinitionIndex = 79862;

	class UIUrbanMapHUDSingleImageWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_C4B3DE2B51336325* MapRadarStateItemData; // 0x28
		::MoleMole::ConfigUIUrbanMap* So; // 0x30
		::System::Int32 MapAreaId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
