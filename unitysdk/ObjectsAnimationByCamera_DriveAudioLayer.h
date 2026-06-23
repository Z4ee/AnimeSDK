#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define OBJECTSANIMATIONBYCAMERA_DRIVEAUDIOLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x143821B0)

inline static constexpr unsigned int ObjectsAnimationByCamera_DriveAudioLayer_TypeDefinitionIndex = 80524;

class ObjectsAnimationByCamera_DriveAudioLayer : public ::System::Object
{
public:
	::UnityEngine::GameObject* emitter; // 0x10
	::System::String* forwardEventName; // 0x18
	::System::String* reverseEventName; // 0x20
	::System::String* forwardStopEventName; // 0x28
	::System::String* reverseStopEventName; // 0x30
	::System::UInt32 pendingIdFwd; // 0x38
	::System::UInt32 pendingIdRev; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_DRIVEAUDIOLAYER__CTOR_OFFSET))(this);
	}
};
