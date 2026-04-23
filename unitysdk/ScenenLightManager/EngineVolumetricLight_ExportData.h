#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define SCENENLIGHTMANAGER_ENGINEVOLUMETRICLIGHT_EXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB936910)

namespace ScenenLightManager
{
	inline static constexpr unsigned int EngineVolumetricLight_ExportData_TypeDefinitionIndex = 45699;

	class EngineVolumetricLight_ExportData : public ::System::Object
	{
	public:
		::System::Single maxTraceDistance; // 0x10
		::System::Single intensity; // 0x14
		::System::Single angularAtten; // 0x18
		::System::Boolean overrideColor; // 0x1C
		::System::Boolean reverseAttenuation; // 0x1D
		::System::Boolean useLegacyFalloff; // 0x1E
		::System::Boolean useNoise; // 0x1F
		::UnityEngine::Color color; // 0x20
		::System::Single nearFade; // 0x30
		::System::Single farFade; // 0x34
		::System::Single legacyFalloff; // 0x38
		::System::String* noiseTex; // 0x40
		::System::Single noiseIntensity; // 0x48
		::System::Single noiseTiling; // 0x4C
		::System::Single noisePow; // 0x50
		::UnityEngine::Vector3 windDirection; // 0x54
		::System::Single windSpeed; // 0x60
		::System::Int32 customLightQualityFilter; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_ENGINEVOLUMETRICLIGHT_EXPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
