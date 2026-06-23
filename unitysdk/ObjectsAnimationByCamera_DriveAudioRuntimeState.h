#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define OBJECTSANIMATIONBYCAMERA_DRIVEAUDIORUNTIMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xFE29610)

inline static constexpr unsigned int ObjectsAnimationByCamera_DriveAudioRuntimeState_TypeDefinitionIndex = 80527;

class ObjectsAnimationByCamera_DriveAudioRuntimeState : public ::System::Object
{
public:
	::UnityEngine::GameObject* emitter; // 0x10
	::System::Int32 prevSign; // 0x18
	::System::Single prevSampleTime; // 0x1C
	::System::Boolean prevSampleInitialized; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_DRIVEAUDIORUNTIMESTATE__CTOR_OFFSET))(this);
	}
};
