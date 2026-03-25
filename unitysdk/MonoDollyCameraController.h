#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineTrackedDolly; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class AnimationCurve; }

#define MONODOLLYCAMERACONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x88BCBB0)
#define MONODOLLYCAMERACONTROLLER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x88BCE60)
#define MONODOLLYCAMERACONTROLLER_SETCONTROLFOV_OFFSET UNITYSDK_OFFSET(0x88BD0A0)
#define MONODOLLYCAMERACONTROLLER_STARTDOLLYPOINTANIM_OFFSET UNITYSDK_OFFSET(0x88BCEB0)
#define MONODOLLYCAMERACONTROLLER_UPDATEBYTIMERATIO_OFFSET UNITYSDK_OFFSET(0x88BCCF0)
#define MONODOLLYCAMERACONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x88BCC70)
#define MONODOLLYCAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x88BD180)

inline static constexpr unsigned int MonoDollyCameraController_TypeDefinitionIndex = 38169;

class MonoDollyCameraController : public ::UnityEngine::MonoBehaviour
{
public:
	::Cinemachine::CinemachineVirtualCamera* Field_5_0; // 0x18
	::Cinemachine::CinemachineTrackedDolly* Field_5_1; // 0x20
	::System::Boolean Field_5_2; // 0x28
	::System::Single Field_5_3; // 0x2C
	::System::Single Field_5_4; // 0x30
	::UnityEngine::AnimationCurve* Field_5_5; // 0x38
	::System::Single Field_5_6; // 0x40
	::System::Single Field_5_7; // 0x44
	::System::Boolean Field_5_8; // 0x48
	::System::Boolean Field_5_9; // 0x49
	::System::Single Field_5_10; // 0x4C
	::System::Single Field_5_11; // 0x50
	::UnityEngine::AnimationCurve* Field_5_12; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODOLLYCAMERACONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODOLLYCAMERACONTROLLER_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODOLLYCAMERACONTROLLER_UPDATE_OFFSET))(this);
	}

	::System::Void UpdateByTimeRatio(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONODOLLYCAMERACONTROLLER_UPDATEBYTIMERATIO_OFFSET))(this, a1);
	}

	::System::Void StartDollyPointAnim(::System::Single a1, ::System::Single a2, ::UnityEngine::AnimationCurve* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MONODOLLYCAMERACONTROLLER_STARTDOLLYPOINTANIM_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void SetControlFov(::System::Boolean a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + MONODOLLYCAMERACONTROLLER_SETCONTROLFOV_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODOLLYCAMERACONTROLLER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};
