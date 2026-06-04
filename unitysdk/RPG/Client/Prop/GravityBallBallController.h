#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/GravityBallBallController_BallState.h"
#include "unitysdk/UnityEngine/ContactPoint.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class GravityBallBallController_Class_1_2C965BD9B9CA3DE5; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC55D430)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xC55D900)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_GETBLLSTATE_OFFSET UNITYSDK_OFFSET(0xC55E670)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_METHOD_5_16548462D618EA0D_OFFSET UNITYSDK_OFFSET(0xC55E990)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_METHOD_5_570C5557A774C69E_1_OFFSET UNITYSDK_OFFSET(0xC55F430)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_METHOD_5_570C5557A774C69E_OFFSET UNITYSDK_OFFSET(0xC55F360)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_METHOD_5_937F8473216A3162_OFFSET UNITYSDK_OFFSET(0xC55DD80)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_METHOD_5_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0xC55E1B0)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xC55D960)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_METHOD_5_D0EAB95EE152A65F_OFFSET UNITYSDK_OFFSET(0xC55DA00)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_METHOD_5_F95252B816F4814F_OFFSET UNITYSDK_OFFSET(0xC55EB50)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONBALLAPPEAR_OFFSET UNITYSDK_OFFSET(0xC55E2F0)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONBALLOUTOFPUZZLE_OFFSET UNITYSDK_OFFSET(0xC55E460)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0xC55E700)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONCOLLISIONEXIT_OFFSET UNITYSDK_OFFSET(0xC55EDD0)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONCOLLISIONSTAY_OFFSET UNITYSDK_OFFSET(0xC55EE80)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC55D830)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_RESETDSTTARGET_OFFSET UNITYSDK_OFFSET(0xC55E5E0)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_SETGRAVITYAFFECT_OFFSET UNITYSDK_OFFSET(0xC55E6B0)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC55D6D0)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC55F650)
#define RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER__ONEXIT_OFFSET UNITYSDK_OFFSET(0xC55F500)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int GravityBallBallController_TypeDefinitionIndex = 73106;

	class GravityBallBallController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* Field_5_0; // 0x0
		// static const ::System::String* Field_5_1; // 0x0
		// static const ::System::String* Field_5_2; // 0x0
		// static const ::System::String* Field_5_3; // 0x0
		// static const ::System::String* Field_5_4; // 0x0
		// static const ::System::String* Field_5_5; // 0x0
		// static const ::System::String* Field_5_6; // 0x0
		::UnityEngine::Rigidbody* Field_5_7; // 0x18
		::UnityEngine::Transform* Field_5_8; // 0x20
		::RPG::Client::Prop::GravityBallBallController_BallState Field_5_9; // 0x28
		::System::Single Field_5_10; // 0x2C
		::System::Single Field_5_11; // 0x30
		::UnityEngine::Vector3 G; // 0x34
		::System::Single DragAffectVelocity; // 0x40
		::System::Single DragTime; // 0x44
		::System::Single DragAcceleration; // 0x48
		::System::Single ReachDistanceEpsilon; // 0x4C
		::System::Single DragInPuzzle; // 0x50
		::System::Single DragOutOfPuzzle; // 0x54
		::System::Single AngleDragInPuzzle; // 0x58
		::System::Single AngleDragOutOfPuzzle; // 0x5C
		::System::Single EffectStayTime; // 0x60
		::System::Single BallHitAudioThresholdLowerLimit; // 0x64
		::System::Single BallHitAudioThresholdUpperLimit; // 0x68
		::System::Single BallRollAudioThresholdLowerLimit; // 0x6C
		::System::Single BallRollAudioThresholdUpperLimit; // 0x70
		::RPG::Client::Prop::GravityBallBallController_Class_1_2C965BD9B9CA3DE5* Field_5_26; // 0x78
		::System::Boolean Field_5_27; // 0x80
		::System::Boolean Field_5_28; // 0x81
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::Il2CppArray<::UnityEngine::ContactPoint>*>* Field_5_29; // 0x88
		::System::Single Field_5_30; // 0x90
		::System::Boolean Field_5_31; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_5_A1C464B05BB7A5C1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_METHOD_5_A1C464B05BB7A5C1_OFFSET))(this);
		}

		::System::Void Method_5_D0EAB95EE152A65F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_METHOD_5_D0EAB95EE152A65F_OFFSET))(this);
		}

		::System::Void OnBallAppear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONBALLAPPEAR_OFFSET))(this);
		}

		::System::Void OnBallOutofPuzzle(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONBALLOUTOFPUZZLE_OFFSET))(this, a1);
		}

		::System::Void ResetDstTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_RESETDSTTARGET_OFFSET))(this);
		}

		::RPG::Client::Prop::GravityBallBallController_BallState GetBllState()
		{
			return ((::RPG::Client::Prop::GravityBallBallController_BallState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_GETBLLSTATE_OFFSET))(this);
		}

		::System::Void SetGravityAffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_SETGRAVITYAFFECT_OFFSET))(this, a1);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONCOLLISIONENTER_OFFSET))(this, a1);
		}

		::System::Void OnCollisionExit(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONCOLLISIONEXIT_OFFSET))(this, a1);
		}

		::System::Void OnCollisionStay(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_ONCOLLISIONSTAY_OFFSET))(this, a1);
		}

		::System::Single Method_5_570C5557A774C69E(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_METHOD_5_570C5557A774C69E_OFFSET))(this, a1);
		}

		::System::Void Method_5_F95252B816F4814F(::UnityEngine::Collision* a1, ::UnityEngine::ContactPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*, ::UnityEngine::ContactPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_METHOD_5_F95252B816F4814F_OFFSET))(this, a1, a2);
		}

		::System::Single Method_5_570C5557A774C69E_1(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_METHOD_5_570C5557A774C69E_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_937F8473216A3162()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_METHOD_5_937F8473216A3162_OFFSET))(this);
		}

		::System::Void Method_5_16548462D618EA0D(::UnityEngine::Collision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER_METHOD_5_16548462D618EA0D_OFFSET))(this, a1);
		}

		::System::Void _OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_GRAVITYBALLBALLCONTROLLER__ONEXIT_OFFSET))(this);
		}
	};
}
