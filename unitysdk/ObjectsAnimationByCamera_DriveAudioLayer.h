#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define OBJECTSANIMATIONBYCAMERA_DRIVEAUDIOLAYER_CAPTUREEMITTERWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x18B13790)
#define OBJECTSANIMATIONBYCAMERA_DRIVEAUDIOLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x18B13980)

inline static constexpr unsigned int ObjectsAnimationByCamera_DriveAudioLayer_TypeDefinitionIndex = 75785;

class ObjectsAnimationByCamera_DriveAudioLayer : public ::System::Object
{
public:
	::UnityEngine::GameObject* emitter; // 0x10
	::UnityEngine::Vector3 emitterWorldPosition; // 0x18
	::System::String* forwardEventName; // 0x28
	::System::String* reverseEventName; // 0x30
	::System::String* forwardStopEventName; // 0x38
	::System::String* reverseStopEventName; // 0x40
	::System::UInt32 pendingIdFwd; // 0x48
	::System::UInt32 pendingIdRev; // 0x4C
	::UnityEngine::GameObject* runtimeEmitter; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_DRIVEAUDIOLAYER__CTOR_OFFSET))(this);
	}

	::System::Boolean CaptureEmitterWorldPosition()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_DRIVEAUDIOLAYER_CAPTUREEMITTERWORLDPOSITION_OFFSET))(this);
	}
};
