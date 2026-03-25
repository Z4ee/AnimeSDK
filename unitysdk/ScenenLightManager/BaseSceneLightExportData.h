#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/MinimalLightImportData.h"

namespace ScenenLightManager { class BaseComponentExportData; }
namespace ScenenLightManager { class TransformExportData; }
namespace System { class String; }

#define SCENENLIGHTMANAGER_BASESCENELIGHTEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xABBE130)

namespace ScenenLightManager
{
	inline static constexpr unsigned int BaseSceneLightExportData_TypeDefinitionIndex = 39833;

	class BaseSceneLightExportData : public ::ScenenLightManager::MinimalLightImportData
	{
	public:
		::System::String* ObjName; // 0x28
		::System::String* envName; // 0x30
		::System::String* blockName; // 0x38
		::ScenenLightManager::TransformExportData* treanformData; // 0x40
		::RPG::CustomRP::CustomLightQualityFilter qualityForBlockLoadingV38; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_BASESCENELIGHTEXPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
