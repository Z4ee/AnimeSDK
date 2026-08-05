#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define OBJECTSANIMATIONBYCAMERA_VOLUMESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xE20DDF0)

inline static constexpr unsigned int ObjectsAnimationByCamera_VolumeSettings_TypeDefinitionIndex = 75783;

class ObjectsAnimationByCamera_VolumeSettings : public ::System::Object
{
public:
	::UnityEngine::Vector3 center; // 0x10
	::UnityEngine::Vector3 rotation; // 0x1C
	::UnityEngine::Vector3 size; // 0x28
	::UnityEngine::Color gizmoColor; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_VOLUMESETTINGS__CTOR_OFFSET))(this);
	}
};
