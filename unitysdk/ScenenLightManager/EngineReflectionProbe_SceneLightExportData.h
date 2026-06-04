#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"

namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class EngineReflectionProbe_ExportData; }

#define SCENENLIGHTMANAGER_ENGINEREFLECTIONPROBE_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET UNITYSDK_OFFSET(0xD07B0E0)
#define SCENENLIGHTMANAGER_ENGINEREFLECTIONPROBE_SCENELIGHTEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD07B0F0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int EngineReflectionProbe_SceneLightExportData_TypeDefinitionIndex = 46238;

	class EngineReflectionProbe_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::EngineReflectionProbe_ExportData* exportData; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_ENGINEREFLECTIONPROBE_SCENELIGHTEXPORTDATA__CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* Method_3_5E6C930E38E03A19()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_ENGINEREFLECTIONPROBE_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET))(this);
		}
	};
}
