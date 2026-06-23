#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define OBJECTSANIMATIONBYCAMERA_TRANSFORMAUDIOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xD36F530)

inline static constexpr unsigned int ObjectsAnimationByCamera_TransformAudioConfig_TypeDefinitionIndex = 80526;

class ObjectsAnimationByCamera_TransformAudioConfig : public ::System::Object
{
public:
	::System::String* startEvent; // 0x10
	::System::String* endEvent; // 0x18
	::System::String* forwardLoopEvent; // 0x20
	::System::String* forwardLoopStopEvent; // 0x28
	::System::String* reverseLoopEvent; // 0x30
	::System::String* reverseLoopStopEvent; // 0x38
	::System::String* speedRtpcName; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_TRANSFORMAUDIOCONFIG__CTOR_OFFSET))(this);
	}
};
