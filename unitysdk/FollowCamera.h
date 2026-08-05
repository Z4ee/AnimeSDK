#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define FOLLOWCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB7BD90)

inline static constexpr unsigned int FollowCamera_TypeDefinitionIndex = 94989;

class FollowCamera : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean syncCameraProperties; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLLOWCAMERA__CTOR_OFFSET))(this);
	}
};
