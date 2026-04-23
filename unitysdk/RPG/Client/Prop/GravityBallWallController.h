#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/GravityBallWallControllerMovement.h"
#include "unitysdk/RPG/Client/Prop/GravityBallWallController_GravityBallWallRotateMode.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_100ED75C115B764C;
namespace RPG::Client::Prop { class GravityBallObstacle; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xAE1C090)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xAE1CC20)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_GETROTATEPROGRESS_OFFSET UNITYSDK_OFFSET(0xAE1BAB0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_GETROTATION_OFFSET UNITYSDK_OFFSET(0xAE1C040)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_GET_ENABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0xAE1BAA0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_HIDEOBSTACLEITEMS_OFFSET UNITYSDK_OFFSET(0xAE1DB90)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_HIDE_OFFSET UNITYSDK_OFFSET(0xAE1D450)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ISENABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0xAE1BB50)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_0A0A8830B02C5A4B_OFFSET UNITYSDK_OFFSET(0xAE1C920)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xAE1C6F0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_1DDD10252C795DC3_OFFSET UNITYSDK_OFFSET(0xAE1C550)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_41146E620D694011_OFFSET UNITYSDK_OFFSET(0xAE1CBC0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_479759059E440327_OFFSET UNITYSDK_OFFSET(0xAE1D4A0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xAE1BC70)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAE1D250)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_A66B981E1EA3E23D_OFFSET UNITYSDK_OFFSET(0xAE1D300)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_DCC0ED6DB927104B_OFFSET UNITYSDK_OFFSET(0xAE1D570)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_E3DE31A03057E055_1_OFFSET UNITYSDK_OFFSET(0xAE1D0C0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xAE1CF80)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xAE1C640)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_E85348E7EC6529C1_OFFSET UNITYSDK_OFFSET(0xAE1BF70)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ONBALLOUTOFPUZZLE_OFFSET UNITYSDK_OFFSET(0xAE1BE80)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xAE1D730)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ONPUZZLERESET_OFFSET UNITYSDK_OFFSET(0xAE1D7C0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_RESETOBSTACLEITEMS_OFFSET UNITYSDK_OFFSET(0xAE1DA40)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_RESETTOINITROTATION_OFFSET UNITYSDK_OFFSET(0xAE1BBE0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETEFFVISIBLE_OFFSET UNITYSDK_OFFSET(0xAE1CDD0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETENABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0xAE1BB90)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETMOVEMENT_OFFSET UNITYSDK_OFFSET(0xAE1BB00)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETWALLBG_OFFSET UNITYSDK_OFFSET(0xAE1D200)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_STARTSHOW_OFFSET UNITYSDK_OFFSET(0xAE1D6E0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_STARTUPOBSTACLEITEMS_OFFSET UNITYSDK_OFFSET(0xAE1D8C0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_STOPOBSTACLEITEMS_OFFSET UNITYSDK_OFFSET(0xAE1DCE0)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xAE1C470)
#define RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAE1DE60)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int GravityBallWallController_TypeDefinitionIndex = 72095;

	class GravityBallWallController : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		// static const ::System::Single Field_6_15; // 0x0
		// static const ::System::String* Field_6_23; // 0x0
		// static const ::System::String* Field_6_24; // 0x0
		// static const ::System::String* Field_6_25; // 0x0
		::UnityEngine::Rigidbody* Field_6_0; // 0x48
		::RPG::Client::Prop::GravityBallWallControllerMovement Field_6_1; // 0x50
		::System::Boolean Field_6_2; // 0x54
		::System::Single AngleSpeed; // 0x58
		::System::Single ForwardAngleAcceleration; // 0x5C
		::System::Single BackwardAngleAcceleration; // 0x60
		::System::Single SlowdownAngleAcceleration; // 0x64
		::System::Single WallAnimWidth; // 0x68
		::System::Single ShowTime; // 0x6C
		::UnityEngine::AnimationCurve* ShowCurve; // 0x70
		::UnityEngine::GameObject* Wall; // 0x78
		::System::Single Field_6_11; // 0x80
		::RPG::Client::Prop::GravityBallWallController_GravityBallWallRotateMode RotateMode; // 0x84
		::UnityEngine::Quaternion Field_6_13; // 0x88
		::System::Single Field_6_14; // 0x98
		::System::Boolean Field_6_16; // 0x9C
		::System::Boolean Field_6_17; // 0x9D
		::System::Single Field_6_18; // 0xA0
		::RPG::GameCore::GameEntity* Field_6_19; // 0xA8
		::UnityEngine::Transform* Field_6_20; // 0xB0
		::Class_1_100ED75C115B764C* Field_6_21; // 0xB8
		::System::Collections::Generic::List_1<::RPG::Client::Prop::GravityBallObstacle*>* Field_6_22; // 0xC0
		::UnityEngine::GameObject* Field_6_26; // 0xC8
		::UnityEngine::GameObject* Field_6_27; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_EnableController()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_GET_ENABLECONTROLLER_OFFSET))(this);
		}

		::System::Single GetRotateProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_GETROTATEPROGRESS_OFFSET))(this);
		}

		::System::Void SetMovement(::RPG::Client::Prop::GravityBallWallControllerMovement a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::GravityBallWallControllerMovement))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETMOVEMENT_OFFSET))(this, a1);
		}

		::System::Boolean IsEnableController()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ISENABLECONTROLLER_OFFSET))(this);
		}

		::System::Void SetEnableController(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETENABLECONTROLLER_OFFSET))(this, a1);
		}

		::System::Void ResetToInitRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_RESETTOINITROTATION_OFFSET))(this);
		}

		::System::Void OnBallOutofPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ONBALLOUTOFPUZZLE_OFFSET))(this);
		}

		::System::Single GetRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_GETROTATION_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void Method_6_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_6_0A0A8830B02C5A4B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_0A0A8830B02C5A4B_OFFSET))(this);
		}

		::System::Void Method_6_41146E620D694011()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_41146E620D694011_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Method_6_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_6_E85348E7EC6529C1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_E85348E7EC6529C1_OFFSET))(this, a1, a2);
		}

		::System::Void SetWallBG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETWALLBG_OFFSET))(this, a1);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_6_A66B981E1EA3E23D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_A66B981E1EA3E23D_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_HIDE_OFFSET))(this);
		}

		::System::Void Method_6_479759059E440327(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_479759059E440327_OFFSET))(this, a1);
		}

		::System::Void Method_6_DCC0ED6DB927104B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_DCC0ED6DB927104B_OFFSET))(this, a1);
		}

		::System::Void Method_6_1DDD10252C795DC3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_1DDD10252C795DC3_OFFSET))(this);
		}

		::System::Void StartShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_STARTSHOW_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_6_E41B6A823556FEEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_E41B6A823556FEEA_OFFSET))(this);
		}

		::System::Void OnPuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_ONPUZZLERESET_OFFSET))(this);
		}

		::System::Void StartupObstacleItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_STARTUPOBSTACLEITEMS_OFFSET))(this);
		}

		::System::Void ResetObstacleItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_RESETOBSTACLEITEMS_OFFSET))(this);
		}

		::System::Void HideObstacleItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_HIDEOBSTACLEITEMS_OFFSET))(this);
		}

		::System::Void StopObstacleItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_STOPOBSTACLEITEMS_OFFSET))(this);
		}

		::System::Void SetEffVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_SETEFFVISIBLE_OFFSET))(this, a1);
		}

		::System::Void Method_6_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_6_E3DE31A03057E055_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLWALLCONTROLLER_METHOD_6_E3DE31A03057E055_1_OFFSET))(this);
		}
	};
}
