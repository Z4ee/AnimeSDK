#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LocalFogSphereInstance_FogBlendMode.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/BaseComponentExportData.h"
#include "unitysdk/UnityEngine/Color.h"

class LocalFogSphereInstance_ExtraExportData;
namespace UnityEngine { class Texture; }

#define SCENENLIGHTMANAGER_LOCALFOGSPHEREINSTANCE_EXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F6DF10)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LocalFogSphereInstance_ExportData_TypeDefinitionIndex = 47253;

	class LocalFogSphereInstance_ExportData : public ::ScenenLightManager::BaseComponentExportData
	{
	public:
		::RPG::CustomRP::CustomLightQualityFilter lightQualityFilter; // 0x10
		::System::Boolean overrideRenderQueue; // 0x14
		::System::Int32 renderQueue; // 0x18
		::LocalFogSphereInstance_FogBlendMode blendMode; // 0x1C
		::System::Boolean enableGradient; // 0x20
		::UnityEngine::Color color; // 0x24
		::UnityEngine::Texture* scatterFadaRamp; // 0x38
		::System::Single lower; // 0x40
		::System::Single upper; // 0x44
		::System::Single fadePointNear; // 0x48
		::System::Single nearDensity; // 0x4C
		::System::Single fadePointFar; // 0x50
		::System::Single farDensity; // 0x54
		::System::Boolean blenderFogOn; // 0x58
		::System::Boolean volumeFogOn; // 0x59
		::LocalFogSphereInstance_ExtraExportData* extraExportData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LOCALFOGSPHEREINSTANCE_EXPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
