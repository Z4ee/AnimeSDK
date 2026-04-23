#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleCameraControllerBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class AxisState_IInputAxisProvider; }
namespace Cinemachine { class CinemachineFreeLook; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEAF4F0)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_ENTERCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xAEAFF10)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_EXITCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xAEB05E0)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_GETLOOKATVECTOR_OFFSET UNITYSDK_OFFSET(0xAEAFD90)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_GETXAXISVALUE_OFFSET UNITYSDK_OFFSET(0xAEAFC50)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xAEAF560)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_LOCKCAMERACONTROL_OFFSET UNITYSDK_OFFSET(0xAEB0980)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_METHOD_6_953DD38710057F4B_OFFSET UNITYSDK_OFFSET(0xAEAFBC0)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_SETXAXISVALUE_OFFSET UNITYSDK_OFFSET(0xAEAFCB0)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_SETYAXISVALUE_OFFSET UNITYSDK_OFFSET(0xAEAFD20)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0xAEAF3C0)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_UNLOCKCAMERACONTROL_OFFSET UNITYSDK_OFFSET(0xAEB0A40)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAEB0B10)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAEB0B80)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_ENTERCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xAEB0C10)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_EXITCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xAEB0C90)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xAEB0BD0)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xAEB0B20)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PuzzleCameraController_TypeDefinitionIndex = 72390;

	class PuzzleCameraController : public ::RPG::Client::Prop::PuzzleCameraControllerBase
	{
	public:
		::System::Boolean Field_6_0; // 0x30
		::Cinemachine::AxisState_IInputAxisProvider* Field_6_1; // 0x38
		::Cinemachine::CinemachineFreeLook* Field_6_2; // 0x40
		::System::Boolean Field_6_3; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_INIT_OFFSET))(this);
		}

		::System::Single GetXAxisValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_GETXAXISVALUE_OFFSET))(this);
		}

		::System::Void SetXAxisValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_SETXAXISVALUE_OFFSET))(this, a1);
		}

		::System::Void SetYAxisValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_SETYAXISVALUE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetLookAtVector()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_GETLOOKATVECTOR_OFFSET))(this);
		}

		::System::Void EnterCameraMode(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::AnimationCurve* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_ENTERCAMERAMODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ExitCameraMode(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_EXITCAMERAMODE_OFFSET))(this, a1);
		}

		::System::Void LockCameraControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_LOCKCAMERACONTROL_OFFSET))(this);
		}

		::System::Void UnLockCameraControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_UNLOCKCAMERACONTROL_OFFSET))(this);
		}

		::System::Void Method_6_953DD38710057F4B(::Cinemachine::AxisState_IInputAxisProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::AxisState_IInputAxisProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_METHOD_6_953DD38710057F4B_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EnterCameraMode(::UnityEngine::Transform* P0, ::System::Single P1, ::System::Single P2, ::System::Single P3, ::UnityEngine::AnimationCurve* P4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_ENTERCAMERAMODE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __iFixBaseProxy_ExitCameraMode(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_EXITCAMERAMODE_OFFSET))(this, P0);
		}
	};
}
