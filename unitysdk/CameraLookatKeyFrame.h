#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CAMERALOOKATKEYFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0xACF0350)

inline static constexpr unsigned int CameraLookatKeyFrame_TypeDefinitionIndex = 44073;

class CameraLookatKeyFrame : public ::System::Object
{
public:
	::System::Single Position; // 0x10
	::UnityEngine::Vector3 direction; // 0x14
	::UnityEngine::Quaternion dir; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMERALOOKATKEYFRAME__CTOR_OFFSET))(this);
	}
};
