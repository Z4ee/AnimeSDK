#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"

namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class LineGlow_ExportData; }

#define SCENENLIGHTMANAGER_LINEGLOW_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET UNITYSDK_OFFSET(0xD07CFF0)
#define SCENENLIGHTMANAGER_LINEGLOW_SCENELIGHTEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD07D000)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LineGlow_SceneLightExportData_TypeDefinitionIndex = 46241;

	class LineGlow_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::LineGlow_ExportData* exportData; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LINEGLOW_SCENELIGHTEXPORTDATA__CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* Method_3_5E6C930E38E03A19()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LINEGLOW_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET))(this);
		}
	};
}
