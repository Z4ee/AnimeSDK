#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleCameraControllerBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class AxisState_IInputAxisProvider; }
namespace Cinemachine { class CinemachineFreeLook; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5F5810)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_ENTERCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xC5F6080)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_EXITCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xC5F6750)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_GETLOOKATVECTOR_OFFSET UNITYSDK_OFFSET(0xC5F5F10)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_GETXAXISVALUE_OFFSET UNITYSDK_OFFSET(0xC5F5DD0)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xC5F5880)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_LOCKCAMERACONTROL_OFFSET UNITYSDK_OFFSET(0xC5F6AF0)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_METHOD_6_953DD38710057F4B_OFFSET UNITYSDK_OFFSET(0xC5F5D40)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_SETXAXISVALUE_OFFSET UNITYSDK_OFFSET(0xC5F5E30)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_SETYAXISVALUE_OFFSET UNITYSDK_OFFSET(0xC5F5EA0)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0xC5F56E0)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER_UNLOCKCAMERACONTROL_OFFSET UNITYSDK_OFFSET(0xC5F6BB0)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC5F6C80)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC5F6CF0)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_ENTERCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xC5F6D80)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_EXITCAMERAMODE_OFFSET UNITYSDK_OFFSET(0xC5F6E00)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xC5F6D40)
#define RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xC5F6C90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PuzzleCameraController_TypeDefinitionIndex = 73412;

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

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EnterCameraMode(::UnityEngine::Transform* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::AnimationCurve* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_ENTERCAMERAMODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void __iFixBaseProxy_ExitCameraMode(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PUZZLECAMERACONTROLLER___IFIXBASEPROXY_EXITCAMERAMODE_OFFSET))(this, a1);
		}
	};
}
