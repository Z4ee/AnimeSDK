#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CONFIGSETCAMERASTATECOMMONNODE_CAMERASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FEF890)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSetCameraStateCommonNode_CameraState_TypeDefinitionIndex = 62359;

	class ConfigSetCameraStateCommonNode_CameraState : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Position; // 0x10
		::System::Single FOV; // 0x1C
		::UnityEngine::Vector3 Rotation; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSETCAMERASTATECOMMONNODE_CAMERASTATE__CTOR_OFFSET))(this);
		}
	};
}
