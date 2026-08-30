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

#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_CLOSEUI_OFFSET UNITYSDK_OFFSET(0xDC669E0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_DISABLECAMERA_OFFSET UNITYSDK_OFFSET(0xDC5F920)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_ENABLECAMERA_OFFSET UNITYSDK_OFFSET(0xDC5DB20)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_ENDAIM_OFFSET UNITYSDK_OFFSET(0xDC62F10)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_ENDCONTROL_OFFSET UNITYSDK_OFFSET(0xDC65970)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_FORCECAMERAPOSITIONFORWARD_OFFSET UNITYSDK_OFFSET(0xDC66A20)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xDC5DE50)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_GETAXISVALUE_OFFSET UNITYSDK_OFFSET(0xDC66D80)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_GETDISTANCEBYFOVDEGREE_1_OFFSET UNITYSDK_OFFSET(0xDC670A0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_GETDISTANCEBYFOVDEGREE_OFFSET UNITYSDK_OFFSET(0xDC62D60)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_GETW_OFFSET UNITYSDK_OFFSET(0xDC64DB0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_INITCAMERALIMIT_OFFSET UNITYSDK_OFFSET(0xDC5DDE0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xDC5EDD0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_3F41C18B18C95AA8_OFFSET UNITYSDK_OFFSET(0xDC66FC0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xDC66740)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xDC66020)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDC66990)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_DF7CEFC0E6C5FD0D_OFFSET UNITYSDK_OFFSET(0xDC66E20)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_E7882E2DCB48277F_OFFSET UNITYSDK_OFFSET(0xDC66F40)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_E9A8695D8BBAA196_OFFSET UNITYSDK_OFFSET(0xDC66EE0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDC65920)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_PLAYDOLLYZOOM_OFFSET UNITYSDK_OFFSET(0xDC62630)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0xDC66DE0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_SETAIM_OFFSET UNITYSDK_OFFSET(0xDC5E1D0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_SETFOV_OFFSET UNITYSDK_OFFSET(0xDC5DEF0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_STARTAIM_OFFSET UNITYSDK_OFFSET(0xDC5ED80)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_STARTCAMERAANIM_OFFSET UNITYSDK_OFFSET(0xDC63220)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_STARTCONTROL_OFFSET UNITYSDK_OFFSET(0xDC5DF60)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC65C80)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDC67160)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER__REGISTERINPUT_OFFSET UNITYSDK_OFFSET(0xDC5CEC0)
#define RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER__UNREGISTERINPUT_OFFSET UNITYSDK_OFFSET(0xDC60930)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int FastDeliverPuzzleCameraController_TypeDefinitionIndex = 78114;

	class FastDeliverPuzzleCameraController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::FastDeliverPuzzleBoard* BNADLAAMBFB; // 0x18
		::System::Boolean PEHBHMKJCLG; // 0x20
		::System::Boolean OLFIIIOOGPN; // 0x21
		::System::Boolean StartRotate; // 0x22
		::System::Single AxisXInput; // 0x24
		::Cinemachine::CinemachineVirtualCamera* _VirtualCamera; // 0x28
		::Cinemachine::AxisState_IInputAxisProvider* OIPKCMLACIA; // 0x30
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x38
		::RPG::Client::Prop::RubikCubePuzzleDragModeState OBBODDBKMCE; // 0x40
		::System::Boolean HHDMHKPNBCH; // 0x44
		::System::Single ALAPDBHDABF; // 0x48
		::System::Single GNAKDOGCKGO; // 0x4C
		::System::Single CGOMPHNHNBJ; // 0x50
		::UnityEngine::Vector3 JAOIJIDOACK; // 0x54
		::System::Single PBDPMAPIJDC; // 0x60
		::System::Single BGLEFKEAHII; // 0x64
		::UnityEngine::Vector3 PHOAODILALN; // 0x68
		::System::Single NGDIOIIBGOF; // 0x74
		::System::Single JAPPPLANAMD; // 0x78
		::System::Action* HDEJLOJHPKI; // 0x80
		::System::Single EDGINGFDFPM; // 0x88
		::System::Boolean NNGPPKDBEKP; // 0x8C
		::UnityEngine::Vector3 CBLEMIJBNBD; // 0x90
		::UnityEngine::Vector3 OJHELCKJKHH; // 0x9C
		::UnityEngine::Quaternion KIPBPKGCKML; // 0xA8
		::UnityEngine::Quaternion AAGJHMDMEIH; // 0xB8
		::System::Single EJFILKDJALL; // 0xC8
		::System::Single INPDNHOPPJD; // 0xCC
		::UnityEngine::AnimationCurve* MMGOGFABCOG; // 0xD0
		::UnityEngine::AnimationCurve* PPGEFIHBIAL; // 0xD8
		::UnityEngine::AnimationCurve* HAMJNHDOAIK; // 0xE0
		::System::Single GDCCCPEEDDM; // 0xE8
		::System::Single LGIMJCIPFOJ; // 0xEC
		::System::Action* ONHFOPOHPAP; // 0xF0
		::System::Single OMOPHPCHEME; // 0xF8
		::System::Boolean JJACBGFDLAC; // 0xFC
		::System::Single BIEEPNPFMDH; // 0x100
		::System::Single JHAOFNFFHHM; // 0x104
		::System::Single EBJFNKKIGBJ; // 0x108
		::System::Single EFHAFJGNELD; // 0x10C
		::System::Single HDPJAGGKJJE; // 0x110
		::UnityEngine::AnimationCurve* JEKJGEDFMKF; // 0x118

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

		::System::Void Method_5_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_FASTDELIVERPUZZLECAMERACONTROLLER_METHOD_5_A1ADC999CFACEB89_OFFSET))(this);
		}
	};
}
