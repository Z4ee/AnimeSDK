#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"

namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class IrradianceCache_ExportData; }

#define SCENENLIGHTMANAGER_IRRADIANCECACHE_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET UNITYSDK_OFFSET(0xB936950)
#define SCENENLIGHTMANAGER_IRRADIANCECACHE_SCENELIGHTEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB936960)

namespace ScenenLightManager
{
	inline static constexpr unsigned int IrradianceCache_SceneLightExportData_TypeDefinitionIndex = 45661;

	class IrradianceCache_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::IrradianceCache_ExportData* exportData; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_IRRADIANCECACHE_SCENELIGHTEXPORTDATA__CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* Method_3_5E6C930E38E03A19()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_IRRADIANCECACHE_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET))(this);
		}
	};
}
