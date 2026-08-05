#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OBJECTSANIMATIONBYCAMERA_DRIVEAUDIORUNTIMESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x142129B0)

inline static constexpr unsigned int ObjectsAnimationByCamera_DriveAudioRuntimeState_TypeDefinitionIndex = 75782;

class ObjectsAnimationByCamera_DriveAudioRuntimeState : public ::System::Object
{
public:
	::System::Single prevSampleTime; // 0x10
	::System::Int32 prevSign; // 0x14
	::System::Boolean prevSampleInitialized; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_DRIVEAUDIORUNTIMESTATE__CTOR_OFFSET))(this);
	}
};
