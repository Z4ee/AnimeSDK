#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleCameraControllerBase.h"
#include "unitysdk/Struct_2_CE0F7493A677433B.h"
#include "unitysdk/Struct_2_FDCF3277E5F31006.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA117860)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_ENTERCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xA117B40)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_EXITCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xA117F90)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xA1181B0)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xA117920)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_METHOD_6_F6D71BB9DFA2BE91_OFFSET UNITYSDK_OFFSET(0xA117040)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_SETFOLLOWINFO_OFFSET UNITYSDK_OFFSET(0xA117A80)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0xA116E10)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA118270)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA118350)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER___IFIXBASEPROXY_ENTERCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xA1183E0)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER___IFIXBASEPROXY_EXITCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xA1184E0)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER___IFIXBASEPROXY_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xA1185A0)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xA1183A0)
#define RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA118290)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PinballCameraController_TypeDefinitionIndex = 64344;

	class PinballCameraController : public ::RPG::Client::Prop::PuzzleCameraControllerBase
	{
	public:
		::System::Boolean Field_6_0; // 0x30
		::Cinemachine::CinemachineVirtualCamera* Field_6_1; // 0x38
		::System::Boolean Field_6_2; // 0x40
		::UnityEngine::Vector3 Field_6_3; // 0x44
		::UnityEngine::Vector3 Field_6_4; // 0x50
		::UnityEngine::Transform* Field_6_5; // 0x60
		::System::Single Field_6_6; // 0x68
		::UnityEngine::Transform* Field_6_7; // 0x70
		::Struct_2_CE0F7493A677433B Field_6_8; // 0x78
		::Struct_2_FDCF3277E5F31006 Field_6_9; // 0x98

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

		::System::Void Method_6_F6D71BB9DFA2BE91(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER_METHOD_6_F6D71BB9DFA2BE91_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EnterCameraMode(::UnityEngine::Transform* P0, ::System::Single P1, ::System::Single P2, ::System::Single P3, ::UnityEngine::AnimationCurve* P4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER___IFIXBASEPROXY_ENTERCAMERAMODE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __iFixBaseProxy_ExitCameraMode(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER___IFIXBASEPROXY_EXITCAMERAMODE_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_ForceCameraPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLCAMERACONTROLLER___IFIXBASEPROXY_FORCECAMERAPOSITION_OFFSET))(this);
		}
	};
}
