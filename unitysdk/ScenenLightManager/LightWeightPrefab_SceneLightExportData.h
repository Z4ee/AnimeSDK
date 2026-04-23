#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"

namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class LightWeightPrefab_ExportData; }

#define SCENENLIGHTMANAGER_LIGHTWEIGHTPREFAB_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET UNITYSDK_OFFSET(0xB9385F0)
#define SCENENLIGHTMANAGER_LIGHTWEIGHTPREFAB_SCENELIGHTEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB938600)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LightWeightPrefab_SceneLightExportData_TypeDefinitionIndex = 45660;

	class LightWeightPrefab_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::LightWeightPrefab_ExportData* exportData; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTWEIGHTPREFAB_SCENELIGHTEXPORTDATA__CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* Method_3_5E6C930E38E03A19()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LIGHTWEIGHTPREFAB_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET))(this);
		}
	};
}
