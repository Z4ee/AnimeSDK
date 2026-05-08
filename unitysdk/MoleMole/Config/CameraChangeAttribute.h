#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraTargetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_CAMERACHANGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x11023800)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraChangeAttribute_TypeDefinitionIndex = 53725;

	class CameraChangeAttribute : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x10
		::UnityEngine::GameObject* target_go; // 0x18
		::MoleMole::Config::CameraTargetType TargetType; // 0x20
		::UnityEngine::Vector3 target_pos; // 0x24
		::UnityEngine::Vector3 offset; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERACHANGEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
