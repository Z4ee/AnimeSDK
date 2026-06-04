#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"

namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class LocalAmbientVolume_ExportData; }

#define SCENENLIGHTMANAGER_LOCALAMBIENTVOLUME_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET UNITYSDK_OFFSET(0xD07D1C0)
#define SCENENLIGHTMANAGER_LOCALAMBIENTVOLUME_SCENELIGHTEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD07D1D0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LocalAmbientVolume_SceneLightExportData_TypeDefinitionIndex = 46234;

	class LocalAmbientVolume_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::LocalAmbientVolume_ExportData* exportData; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LOCALAMBIENTVOLUME_SCENELIGHTEXPORTDATA__CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* Method_3_5E6C930E38E03A19()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LOCALAMBIENTVOLUME_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET))(this);
		}
	};
}
