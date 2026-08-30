#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleCameraControllerBase.h"
#include "unitysdk/Struct_2_CE0F7493A677433B.h"
#include "unitysdk/Struct_2_FDCF3277E5F31006.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16626960)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_ENTERCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x16626C40)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_EXITCAMERAMODE_OFFSET UNITYSDK_OFFSET(0x16627080)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x166272A0)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x16626A20)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_METHOD_6_791B304BAE2CAAFF_OFFSET UNITYSDK_OFFSET(0x166261C0)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_SETFOLLOWINFO_OFFSET UNITYSDK_OFFSET(0x16626B80)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x16625F90)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16627360)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PinballCameraController_TypeDefinitionIndex = 78423;

	class PinballCameraController : public ::RPG::Client::Prop::PuzzleCameraControllerBase
	{
	public:
		::System::Boolean DIOEAJEHHND; // 0x30
		::Cinemachine::CinemachineVirtualCamera* EAJFHBDCFFO; // 0x38
		::System::Boolean MHEAIOMEGCA; // 0x40
		::UnityEngine::Vector3 KKHNIJICIKM; // 0x44
		::UnityEngine::Vector3 CCAKCMKFFAP; // 0x50
		::UnityEngine::Transform* EJCIMGEICHG; // 0x60
		::System::Single HFJJFMBPDFD; // 0x68
		::UnityEngine::Transform* OPJNNDIALDC; // 0x70
		::Struct_2_CE0F7493A677433B JGINFKIPDLM; // 0x78
		::Struct_2_FDCF3277E5F31006 MJFBAFFNAHE; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void SetFollowInfo(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Transform* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_SETFOLLOWINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EnterCameraMode(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::AnimationCurve* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_ENTERCAMERAMODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ExitCameraMode(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_EXITCAMERAMODE_OFFSET))(this, a1);
		}

		::System::Void ForceCameraPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_FORCECAMERAPOSITION_OFFSET))(this);
		}

		::System::Void Method_6_791B304BAE2CAAFF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_METHOD_6_791B304BAE2CAAFF_OFFSET))(this, a1);
		}
	};
}
