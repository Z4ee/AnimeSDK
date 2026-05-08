#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SurfCameraContext_CameraSide.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigSurfVehicle; }

#define MOLEMOLE_SURFCAMERACONTEXT_RESET_OFFSET UNITYSDK_OFFSET(0x7AC4B0)

namespace MoleMole
{
	inline static constexpr unsigned int SurfCameraContext_TypeDefinitionIndex = 56807;

	struct alignas(4) SurfCameraContext
	{
		::System::Single yaw; // 0x10
		::System::Single pitch; // 0x14
		::System::Single roll; // 0x18
		::System::Single radius; // 0x1C
		::UnityEngine::Vector2 offsetXY; // 0x20
		::System::Single fov; // 0x28
		::System::Single noiseXSeed; // 0x2C
		::System::Single noiseYSeed; // 0x30
		::MoleMole::SurfCameraContext_CameraSide side; // 0x34
		::System::Single sideTransitionTime; // 0x38
		::UnityEngine::Vector2 mouseRotation; // 0x3C

		::System::Void Reset(::MoleMole::Config::ConfigSurfVehicle* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSurfVehicle*))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFCAMERACONTEXT_RESET_OFFSET))(this, config);
		}
	};
}
