#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CAMERAMODULEUPDOWNDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDB87200)

namespace MoleMole
{
	inline static constexpr unsigned int CameraModuleUpDownData_TypeDefinitionIndex = 68797;

	class CameraModuleUpDownData : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 RATIO_CAMERA_GROUND; // 0x10
		::UnityEngine::Vector2 RATIO_CAMERA_UP_MIDDLE; // 0x18
		::UnityEngine::Vector2 RATIO_CAMERA_UP_TOP; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAMODULEUPDOWNDATA__CTOR_OFFSET))(this);
		}
	};
}
