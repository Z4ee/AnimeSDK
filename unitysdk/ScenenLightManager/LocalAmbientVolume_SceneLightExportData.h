#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"

namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class LocalAmbientVolume_ExportData; }

#define SCENENLIGHTMANAGER_LOCALAMBIENTVOLUME_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET UNITYSDK_OFFSET(0x19F6DEF0)
#define SCENENLIGHTMANAGER_LOCALAMBIENTVOLUME_SCENELIGHTEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F6DF00)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LocalAmbientVolume_SceneLightExportData_TypeDefinitionIndex = 47199;

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
