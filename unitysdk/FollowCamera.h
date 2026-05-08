#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define FOLLOWCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C467C70)

inline static constexpr unsigned int FollowCamera_TypeDefinitionIndex = 85476;

class FollowCamera : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean syncCameraProperties; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLLOWCAMERA__CTOR_OFFSET))(this);
	}
};
