#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseSceneLightExportData.h"

namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class CharacterLineLightGroup_ExportData; }

#define SCENENLIGHTMANAGER_CHARACTERLINELIGHTGROUP_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET UNITYSDK_OFFSET(0xABC0E10)
#define SCENENLIGHTMANAGER_CHARACTERLINELIGHTGROUP_SCENELIGHTEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xABC0E20)

namespace ScenenLightManager
{
	inline static constexpr unsigned int CharacterLineLightGroup_SceneLightExportData_TypeDefinitionIndex = 39747;

	class CharacterLineLightGroup_SceneLightExportData : public ::ScenenLightManager::BaseSceneLightExportData
	{
	public:
		::ScenenLightManager::CharacterLineLightGroup_ExportData* exportData; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_CHARACTERLINELIGHTGROUP_SCENELIGHTEXPORTDATA__CTOR_OFFSET))(this);
		}

		::ScenenLightManager::BaseComponentExportData* Method_3_5E6C930E38E03A19()
		{
			return ((::ScenenLightManager::BaseComponentExportData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_CHARACTERLINELIGHTGROUP_SCENELIGHTEXPORTDATA_METHOD_3_5E6C930E38E03A19_OFFSET))(this);
		}
	};
}
