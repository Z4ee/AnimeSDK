#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"

namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class BillboardController_ExportData; }

#define SCENENLIGHTMANAGER_BILLBOARDCONTROLLER_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET UNITYSDK_OFFSET(0x19F69200)
#define SCENENLIGHTMANAGER_BILLBOARDCONTROLLER_SCENELIGHTEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F69210)

namespace ScenenLightManager
{
	inline static constexpr unsigned int BillboardController_SceneLightExportData_TypeDefinitionIndex = 47201;

	class BillboardController_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::BillboardController_ExportData* exportData; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_BILLBOARDCONTROLLER_SCENELIGHTEXPORTDATA__CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* Method_3_5E6C930E38E03A19()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_BILLBOARDCONTROLLER_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET))(this);
		}
	};
}
