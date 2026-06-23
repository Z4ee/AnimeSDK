#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CAMERACHANGEATTRIBUTE_FOV__CTOR_OFFSET UNITYSDK_OFFSET(0x144D39A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraChangeAttribute_FOV_TypeDefinitionIndex = 54335;

	class CameraChangeAttribute_FOV : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x10
		::System::Single targetValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERACHANGEATTRIBUTE_FOV__CTOR_OFFSET))(this);
		}
	};
}
