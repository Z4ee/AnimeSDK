#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/RubikCubePuzzleDragModeState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class AxisState_IInputAxisProvider; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client::Prop { class FastDeliverPuzzleBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_CLOSEUI_OFFSET UNITYSDK_OFFSET(0xAE16860)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_DISABLECAMERA_OFFSET UNITYSDK_OFFSET(0xAE0F770)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_ENABLECAMERA_OFFSET UNITYSDK_OFFSET(0xAE0DBF0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_ENDAIM_OFFSET UNITYSDK_OFFSET(0xAE12C10)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_ENDCONTROL_OFFSET UNITYSDK_OFFSET(0xAE15810)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_FORCECAMERAPOSITIONFORWARD_OFFSET UNITYSDK_OFFSET(0xAE168A0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xAE0DF00)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_GETAXISVALUE_OFFSET UNITYSDK_OFFSET(0xAE16C00)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_GETDISTANCEBYFOVDEGREE_1_OFFSET UNITYSDK_OFFSET(0xAE16F10)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_GETDISTANCEBYFOVDEGREE_OFFSET UNITYSDK_OFFSET(0xAE12A60)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_GETW_OFFSET UNITYSDK_OFFSET(0xAE14AA0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_INITCAMERALIMIT_OFFSET UNITYSDK_OFFSET(0xAE0DE90)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xAE0EE90)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_3F41C18B18C95AA8_OFFSET UNITYSDK_OFFSET(0xAE16E40)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_56A1C36F6B66CD4A_OFFSET UNITYSDK_OFFSET(0xAE165C0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xAE15EC0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAE16810)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0xAE16CA0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_E7882E2DCB48277F_OFFSET UNITYSDK_OFFSET(0xAE16DC0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_E9A8695D8BBAA196_OFFSET UNITYSDK_OFFSET(0xAE16D60)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAE157C0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_PLAYDOLLYZOOM_OFFSET UNITYSDK_OFFSET(0xAE12330)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0xAE16C60)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_SETAIM_OFFSET UNITYSDK_OFFSET(0xAE0E280)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_SETFOV_OFFSET UNITYSDK_OFFSET(0xAE0DFA0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_STARTAIM_OFFSET UNITYSDK_OFFSET(0xAE0EE40)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_STARTCAMERAANIM_OFFSET UNITYSDK_OFFSET(0xAE12F10)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_STARTCONTROL_OFFSET UNITYSDK_OFFSET(0xAE0E010)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xAE15B20)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAE16FD0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER__REGISTERINPUT_OFFSET UNITYSDK_OFFSET(0xAE0CFE0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER__UNREGISTERINPUT_OFFSET UNITYSDK_OFFSET(0xAE10750)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int FastDeliverPuzzleCameraController_TypeDefinitionIndex = 72081;

	class FastDeliverPuzzleCameraController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::FastDeliverPuzzleBoard* Field_5_0; // 0x18
		::System::Boolean Field_5_1; // 0x20
		::System::Boolean Field_5_2; // 0x21
		::System::Boolean StartRotate; // 0x22
		::System::Single AxisXInput; // 0x24
		::Cinemachine::CinemachineVirtualCamera* _VirtualCamera; // 0x28
		::Cinemachine::AxisState_IInputAxisProvider* Field_5_6; // 0x30
		::RPG::GameCore::GameEntity* Field_5_7; // 0x38
		::RPG::Client::Prop::RubikCubePuzzleDragModeState Field_5_8; // 0x40
		::System::Boolean Field_5_9; // 0x44
		::System::Single Field_5_10; // 0x48
		::System::Single Field_5_11; // 0x4C
		::System::Single Field_5_12; // 0x50
		::UnityEngine::Vector3 Field_5_13; // 0x54
		::System::Single Field_5_14; // 0x60
		::System::Single Field_5_15; // 0x64
		::UnityEngine::Vector3 Field_5_16; // 0x68
		::System::Single Field_5_17; // 0x74
		::System::Single Field_5_18; // 0x78
		::System::Action* Field_5_19; // 0x80
		::System::Single Field_5_20; // 0x88
		::System::Boolean Field_5_21; // 0x8C
		::UnityEngine::Vector3 Field_5_22; // 0x90
		::UnityEngine::Vector3 Field_5_23; // 0x9C
		::UnityEngine::Quaternion Field_5_24; // 0xA8
		::UnityEngine::Quaternion Field_5_25; // 0xB8
		::System::Single Field_5_26; // 0xC8
		::System::Single Field_5_27; // 0xCC
		::UnityEngine::AnimationCurve* Field_5_28; // 0xD0
		::UnityEngine::AnimationCurve* Field_5_29; // 0xD8
		::UnityEngine::AnimationCurve* Field_5_30; // 0xE0
		::System::Single Field_5_31; // 0xE8
		::System::Single Field_5_32; // 0xEC
		::System::Action* Field_5_33; // 0xF0
		::System::Single Field_5_34; // 0xF8
		::System::Boolean Field_5_35; // 0xFC
		::System::Single Field_5_36; // 0x100
		::System::Single Field_5_37; // 0x104
		::System::Single Field_5_38; // 0x108
		::System::Single Field_5_39; // 0x10C
		::System::Single Field_5_40; // 0x110
		::UnityEngine::AnimationCurve* Field_5_41; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void CloseUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_CLOSEUI_OFFSET))(this);
		}

		::System::Void Init(::RPG::GameCore::GameEntity* a1, ::RPG::Client::Prop::FastDeliverPuzzleBoard* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::FastDeliverPuzzleBoard*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ForceCameraPositionForward(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_FORCECAMERAPOSITIONFORWARD_OFFSET))(this, a1);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_FORCECAMERAPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void SetFOV(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_SETFOV_OFFSET))(this, a1);
		}

		::System::Single GetAxisValue(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_GETAXISVALUE_OFFSET))(this, a1);
		}

		::System::Void ResetCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_RESETCAMERA_OFFSET))(this);
		}

		::System::Void EnableCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_ENABLECAMERA_OFFSET))(this);
		}

		::System::Void Method_5_DF7CEFC0E6C5FD0D(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_DF7CEFC0E6C5FD0D_OFFSET))(this, a1);
		}

		::System::Void DisableCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_DISABLECAMERA_OFFSET))(this);
		}

		::System::Void StartControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_STARTCONTROL_OFFSET))(this);
		}

		::System::Void EndControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_ENDCONTROL_OFFSET))(this);
		}

		::System::Void StartAim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_STARTAIM_OFFSET))(this);
		}

		::System::Void EndAim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_ENDAIM_OFFSET))(this);
		}

		::System::Void InitCameraLimit(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_INITCAMERALIMIT_OFFSET))(this, a1, a2);
		}

		::System::Void SetAim(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Action* a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_SETAIM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _RegisterInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER__REGISTERINPUT_OFFSET))(this);
		}

		::System::Void _UnRegisterInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER__UNREGISTERINPUT_OFFSET))(this);
		}

		::System::Void Method_5_E9A8695D8BBAA196(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_E9A8695D8BBAA196_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7882E2DCB48277F(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_E7882E2DCB48277F_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_3F41C18B18C95AA8(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_3F41C18B18C95AA8_OFFSET))(this, a1);
		}

		::System::Void StartCameraAnim(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::AnimationCurve* a3, ::UnityEngine::AnimationCurve* a4, ::System::Single a5, ::System::Action* a6, ::System::Single a7, ::UnityEngine::AnimationCurve* a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Action*, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_STARTCAMERAANIM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void Method_5_B387E1AED8A8F880()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_B387E1AED8A8F880_OFFSET))(this);
		}

		::System::Void PlayDollyZoom(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_PLAYDOLLYZOOM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Single GetW(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_GETW_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single GetDistanceByFOVDegree(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_GETDISTANCEBYFOVDEGREE_OFFSET))(a1, a2);
		}

		::System::Single GetDistanceByFOVDegree_1(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_GETDISTANCEBYFOVDEGREE_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_56A1C36F6B66CD4A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_56A1C36F6B66CD4A_OFFSET))(this);
		}
	};
}
