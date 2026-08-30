#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineTrackedDolly; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class AnimationCurve; }

#define MONODOLLYCAMERACONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x19C94950)
#define MONODOLLYCAMERACONTROLLER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19C94D80)
#define MONODOLLYCAMERACONTROLLER_METHOD_5_D4D400F3063B9422_OFFSET UNITYSDK_OFFSET(0x19C94C20)
#define MONODOLLYCAMERACONTROLLER_SETCONTROLFOV_OFFSET UNITYSDK_OFFSET(0x19C94F00)
#define MONODOLLYCAMERACONTROLLER_STARTDOLLYPOINTANIM_OFFSET UNITYSDK_OFFSET(0x19C94DD0)
#define MONODOLLYCAMERACONTROLLER_UPDATEBYTIMERATIO_OFFSET UNITYSDK_OFFSET(0x19C94AB0)
#define MONODOLLYCAMERACONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19C94A10)
#define MONODOLLYCAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19C94FC0)

inline static constexpr unsigned int MonoDollyCameraController_TypeDefinitionIndex = 47721;

class MonoDollyCameraController : public ::UnityEngine::MonoBehaviour
{
public:
	::Cinemachine::CinemachineVirtualCamera* EDHDOCKJIDG; // 0x18
	::Cinemachine::CinemachineTrackedDolly* OMDPCAHPFEK; // 0x20
	::System::Boolean PPBOGAMGGKF; // 0x28
	::System::Single KNGEKPKBIDK; // 0x2C
	::System::Single GNPBGAKIAHM; // 0x30
	::UnityEngine::AnimationCurve* IPIIFMNENMN; // 0x38
	::System::Single OJJEGDAFKHJ; // 0x40
	::System::Single DHBHEMEDJCE; // 0x44
	::System::Boolean PIGLIEHLOKF; // 0x48
	::System::Boolean OOFKHCLCBOO; // 0x49
	::System::Single GOFIENGOGFC; // 0x4C
	::System::Single HDLIKHFHGDM; // 0x50
	::UnityEngine::AnimationCurve* DLICLKABBOH; // 0x58

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

	::System::Single Method_5_D4D400F3063B9422()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MONODOLLYCAMERACONTROLLER_METHOD_5_D4D400F3063B9422_OFFSET))(this);
	}
};
