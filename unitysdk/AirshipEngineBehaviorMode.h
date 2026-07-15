#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAirshipWorkingState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define AIRSHIPENGINEBEHAVIORMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x158D3AD0)

inline static constexpr unsigned int AirshipEngineBehaviorMode_TypeDefinitionIndex = 45306;

class AirshipEngineBehaviorMode : public ::System::Object
{
public:
	::EAirshipWorkingState workingState; // 0x10
	::UnityEngine::AnimationCurve* speedRatioCurve; // 0x18
	::UnityEngine::AnimationCurve* lightRatioCurve; // 0x20
	::System::Single speed; // 0x28
	::UnityEngine::Vector3 dir; // 0x2C
	::UnityEngine::Quaternion rotation; // 0x38
	::System::Boolean useShipSpeed; // 0x48
	::System::Boolean randomDir; // 0x49

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIRSHIPENGINEBEHAVIORMODE__CTOR_OFFSET))(this);
	}
};
