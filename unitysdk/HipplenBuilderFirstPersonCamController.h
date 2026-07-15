#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Transform; }

#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x17A5C090)
#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x17A5C440)
#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_SETCAMERALOCK_OFFSET UNITYSDK_OFFSET(0x17A5C500)
#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x17A5BFE0)
#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17A5C030)
#define HIPPLENBUILDERFIRSTPERSONCAMCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5C560)

inline static constexpr unsigned int HipplenBuilderFirstPersonCamController_TypeDefinitionIndex = 45410;

class HipplenBuilderFirstPersonCamController : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single mouseSensitivity; // 0x18
	::UnityEngine::Transform* lookAtTarget; // 0x20
	::System::Single lookBackDelay; // 0x28
	::Cinemachine::CinemachineVirtualCamera* virtualCamera; // 0x30
	::System::Single Field_5_4; // 0x38
	::System::Single Field_5_5; // 0x3C
	::System::Single Field_5_6; // 0x40
	::System::Boolean Field_5_7; // 0x44
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
