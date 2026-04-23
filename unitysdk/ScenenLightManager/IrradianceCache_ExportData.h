#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/BaseComponentExportData.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define SCENENLIGHTMANAGER_IRRADIANCECACHE_EXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB936930)

namespace ScenenLightManager
{
	inline static constexpr unsigned int IrradianceCache_ExportData_TypeDefinitionIndex = 45709;

	class IrradianceCache_ExportData : public ::ScenenLightManager::BaseComponentExportData
	{
	public:
		::RPG::CustomRP::CustomLightQualityFilter LightQuality; // 0x10
		::System::String* VICDataPath; // 0x18
		::System::String* ProxyMeshPath; // 0x20
		::UnityEngine::Vector3 CubeSize; // 0x28
		::System::Int32 VICProxyMode; // 0x34
		::System::Single BorderFade; // 0x38
		::System::Single RoughnessBias; // 0x3C
		::System::Boolean ApplyAO; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_IRRADIANCECACHE_EXPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
