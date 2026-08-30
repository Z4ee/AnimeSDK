#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/LightInstanceID.h"
#include "unitysdk/ScenenLightManager/LightTypeID.h"
#include "unitysdk/System/Object.h"

#define SCENENLIGHTMANAGER_MINIMALLIGHTIMPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xE90B690)

namespace ScenenLightManager
{
	inline static constexpr unsigned int MinimalLightImportData_TypeDefinitionIndex = 49569;

	class MinimalLightImportData : public ::System::Object
	{
	public:
		::ScenenLightManager::LightTypeID lightTypeID; // 0x10
		::System::Int32 lightID; // 0x14
		::ScenenLightManager::LightInstanceID pvsID; // 0x18
		::System::Int32 blockDataID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_MINIMALLIGHTIMPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
