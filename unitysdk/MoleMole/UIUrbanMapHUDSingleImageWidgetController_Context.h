#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_14BD1BAC619F45D4;
namespace MoleMole { class ConfigUIUrbanMap; }

#define MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12C83840)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapHUDSingleImageWidgetController_Context_TypeDefinitionIndex = 70866;

	class UIUrbanMapHUDSingleImageWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::ConfigUIUrbanMap* So; // 0x28
		::Class_1_14BD1BAC619F45D4* MapRadarStateItemData; // 0x30
		::System::Int32 MapAreaId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPHUDSINGLEIMAGEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
