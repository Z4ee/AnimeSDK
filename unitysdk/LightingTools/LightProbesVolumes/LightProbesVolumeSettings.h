#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LightingTools/LightProbesVolumes/DiscardMode.h"
#include "unitysdk/LightingTools/LightProbesVolumes/PlacementPriority.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESVOLUMESETTINGS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C560560)
#define LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESVOLUMESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C560670)

namespace LightingTools::LightProbesVolumes
{
	inline static constexpr unsigned int LightProbesVolumeSettings_TypeDefinitionIndex = 84941;

	class LightProbesVolumeSettings : public ::UnityEngine::MonoBehaviour
	{
	public:
		::LightingTools::LightProbesVolumes::PlacementPriority priority; // 0x18
		::System::Single horizontalSpacing; // 0x1C
		::System::Single verticalSpacing; // 0x20
		::System::Single offsetFromFloor; // 0x24
		::System::Single offsetFromWall; // 0x28
		::System::Int32 numberOfLayers; // 0x2C
		::System::Boolean fillVolume; // 0x30
		::System::Boolean followFloor; // 0x31
		::System::Boolean discardInsideGeometry; // 0x32
		::LightingTools::LightProbesVolumes::DiscardMode discardMode; // 0x34
		::System::Int32 discardConstraint; // 0x38
		::System::Boolean drawDebug; // 0x3C
		::System::Boolean traceTopViewOnly; // 0x3D
		::System::Boolean ignoreUpDirection; // 0x3E
		::System::Boolean discardConfilictProbes; // 0x3F
		::System::Boolean _LastBlocker; // 0x40
		::UnityEngine::Vector3 _LastCenter; // 0x44
		::UnityEngine::Vector3 _LastSize; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESVOLUMESETTINGS__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESVOLUMESETTINGS_ONENABLE_OFFSET))(this);
		}
	};
}
