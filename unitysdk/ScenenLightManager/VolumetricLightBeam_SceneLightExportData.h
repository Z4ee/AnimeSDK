#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"

namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class VolumetricLightBeam_ExportData; }

#define SCENENLIGHTMANAGER_VOLUMETRICLIGHTBEAM_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET UNITYSDK_OFFSET(0xABC3850)
#define SCENENLIGHTMANAGER_VOLUMETRICLIGHTBEAM_SCENELIGHTEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xABC3860)

namespace ScenenLightManager
{
	inline static constexpr unsigned int VolumetricLightBeam_SceneLightExportData_TypeDefinitionIndex = 39743;

	class VolumetricLightBeam_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::VolumetricLightBeam_ExportData* exportData; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_VOLUMETRICLIGHTBEAM_SCENELIGHTEXPORTDATA__CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* Method_3_5E6C930E38E03A19()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_VOLUMETRICLIGHTBEAM_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET))(this);
		}
	};
}
