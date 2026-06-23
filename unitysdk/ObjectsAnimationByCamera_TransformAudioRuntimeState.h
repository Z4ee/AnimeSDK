#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define OBJECTSANIMATIONBYCAMERA_TRANSFORMAUDIORUNTIMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0xD36F540)

inline static constexpr unsigned int ObjectsAnimationByCamera_TransformAudioRuntimeState_TypeDefinitionIndex = 80528;

class ObjectsAnimationByCamera_TransformAudioRuntimeState : public ::System::Object
{
public:
	::UnityEngine::GameObject* emitter; // 0x10
	::System::Single tPrev; // 0x18
	::System::UInt32 pendingForwardLoop; // 0x1C
	::System::Boolean hasPlayedStartThisPass; // 0x20
	::System::Boolean outsidePoseInitialized; // 0x21
	::System::Boolean wasAtEnd; // 0x22
	::System::Boolean wasActiveLastFrame; // 0x23
	::System::UInt32 pendingReverseLoop; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_TRANSFORMAUDIORUNTIMESTATE__CTOR_OFFSET))(this);
	}
};
