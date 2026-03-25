#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"

namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class LocalFogSphereInstance_ExportData; }

#define SCENENLIGHTMANAGER_LOCALFOGSPHEREINSTANCE_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET UNITYSDK_OFFSET(0xABC2DE0)
#define SCENENLIGHTMANAGER_LOCALFOGSPHEREINSTANCE_SCENELIGHTEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xABC2DF0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LocalFogSphereInstance_SceneLightExportData_TypeDefinitionIndex = 39748;

	class LocalFogSphereInstance_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::LocalFogSphereInstance_ExportData* exportData; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LOCALFOGSPHEREINSTANCE_SCENELIGHTEXPORTDATA__CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* Method_3_5E6C930E38E03A19()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LOCALFOGSPHEREINSTANCE_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET))(this);
		}
	};
}
