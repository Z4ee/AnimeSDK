#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/BaseComponentExportData.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define SCENENLIGHTMANAGER_LINEGLOW_EXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19F6DD10)

namespace ScenenLightManager
{
	inline static constexpr unsigned int LineGlow_ExportData_TypeDefinitionIndex = 47254;

	class LineGlow_ExportData : public ::ScenenLightManager::BaseComponentExportData
	{
	public:
		::UnityEngine::Color Color; // 0x10
		::System::Single AlphaScale; // 0x20
		::System::Single BaseFadeOut; // 0x24
		::System::Single NoiseFrequence; // 0x28
		::System::Single NoiseSpeed; // 0x2C
		::System::Single HeadFade; // 0x30
		::System::Single Deform; // 0x34
		::System::Int32 Channle; // 0x38
		::System::Int32 QualityFilter; // 0x3C
		::System::Int32 BlendingMode; // 0x40
		::System::Int32 FarDistanceFade; // 0x44
		::System::String* CustomMaterialPath; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_LINEGLOW_EXPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
