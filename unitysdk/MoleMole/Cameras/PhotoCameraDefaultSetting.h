#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CAMERAS_PHOTOCAMERADEFAULTSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x816A50)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int PhotoCameraDefaultSetting_TypeDefinitionIndex = 44532;

	struct alignas(4) PhotoCameraDefaultSetting
	{
		::System::Single radius; // 0x10
		::System::Single fieldOfView; // 0x14
		::UnityEngine::Vector3 followOffset; // 0x18
		::UnityEngine::Vector2 screenOffset; // 0x24
		::System::Single pitch; // 0x2C

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector2 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_PHOTOCAMERADEFAULTSETTING__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
