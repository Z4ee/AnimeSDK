#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CAMERAS_OVERRIDECONFIGSIDESCROLLINGCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0xE954F60)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverrideConfigSideScrollingCamera_TypeDefinitionIndex = 43196;

	class OverrideConfigSideScrollingCamera : public ::System::Object
	{
	public:
		::System::Boolean EnableOverrideFov; // 0x10
		::System::Single OverrideFov; // 0x14
		::System::Boolean EnableOverrideRadius; // 0x18
		::System::Single OverrideRadius; // 0x1C
		::System::Boolean EnableOverridePitchAngle; // 0x20
		::System::Single OverridePitchAngle; // 0x24
		::System::Boolean EnableOverrideLookAtWorldPosOffset; // 0x28
		::UnityEngine::Vector3 OverrideLookAtWorldPosOffset; // 0x2C

		::System::Void _ctor(::System::Boolean a1, ::System::Single a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5, ::System::Single a6, ::System::Boolean a7, ::UnityEngine::Vector3 a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERRIDECONFIGSIDESCROLLINGCAMERA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
