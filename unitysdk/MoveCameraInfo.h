#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineDollyCart; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class AnimationCurve; }

#define MOVECAMERAINFO_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x88BF320)
#define MOVECAMERAINFO_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x88BF250)
#define MOVECAMERAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x88BF330)

inline static constexpr unsigned int MoveCameraInfo_TypeDefinitionIndex = 38176;

class MoveCameraInfo : public ::System::Object
{
public:
	::Cinemachine::CinemachineDollyCart* Cart; // 0x10
	::Cinemachine::CinemachineVirtualCamera* Camera; // 0x18
	::UnityEngine::AnimationCurve* SpeedCurve; // 0x20
	::System::Single FinishTime; // 0x28
	::System::Single m_initSpeed; // 0x2C
	::System::Boolean NeedKeep; // 0x30
	::System::Boolean m_isFinish; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVECAMERAINFO__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVECAMERAINFO_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Boolean get_IsFinish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVECAMERAINFO_GET_ISFINISH_OFFSET))(this);
	}
};
