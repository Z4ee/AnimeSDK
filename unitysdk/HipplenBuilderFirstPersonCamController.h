#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Transform; }

#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x15ACF320)
#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15ACF6D0)
#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_SETCAMERALOCK_OFFSET UNITYSDK_OFFSET(0x15ACF790)
#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x15ACF270)
#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15ACF2C0)
#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15ACF7F0)

inline static constexpr unsigned int HipplenBuilderFirstPersonCamController_TypeDefinitionIndex = 47660;

class HipplenBuilderFirstPersonCamController : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single mouseSensitivity; // 0x18
	::UnityEngine::Transform* lookAtTarget; // 0x20
	::System::Single lookBackDelay; // 0x28
	::Cinemachine::CinemachineVirtualCamera* virtualCamera; // 0x30
	::System::Single CENBEIAFOFL; // 0x38
	::System::Single CIIMDFEOFJI; // 0x3C
	::System::Single CEGFOKLLCGG; // 0x40
	::System::Boolean IEPJJLLGCEM; // 0x44
	::System::Single transitionSpeed; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_UPDATE_OFFSET))(this);
	}

	::System::Void Method_5_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_5_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_METHOD_5_9681042564541CD6_OFFSET))(this);
	}

	::System::Void SetCameraLock(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_SETCAMERALOCK_OFFSET))(this, a1);
	}
};
