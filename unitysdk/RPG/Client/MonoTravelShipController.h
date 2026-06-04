#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Octree/Agent/AgentCurveNavigationParams.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_ED7576A0A144501C;
class Class_2_6E72FA7907D46962;
class Class_3_95AF281BFBCF5094;
namespace RPG::Client { class CharacterMonoAvatar; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC152A20)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xC152AD0)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_GET_DEFAULTROTATEPITCH_OFFSET UNITYSDK_OFFSET(0xC153560)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_GET_DEFAULTROTATEROLLFLAG_OFFSET UNITYSDK_OFFSET(0xC153580)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_GET_ENABLEFORCE_OFFSET UNITYSDK_OFFSET(0xC1534A0)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_GET_MAXRIGIDBODYROTPITCH_OFFSET UNITYSDK_OFFSET(0xC153470)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_GET_MONOAVATAR_OFFSET UNITYSDK_OFFSET(0xC153480)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_GET_MOVEPROXY_OFFSET UNITYSDK_OFFSET(0xC1534E0)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_GET_PROXY_OFFSET UNITYSDK_OFFSET(0xC1534C0)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xC1533C0)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_ONBIND_OFFSET UNITYSDK_OFFSET(0xC152DF0)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_ONUNBIND_OFFSET UNITYSDK_OFFSET(0xC152F70)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC1530D0)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_SET_DEFAULTROTATEPITCH_OFFSET UNITYSDK_OFFSET(0xC153570)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_SET_DEFAULTROTATEROLLFLAG_OFFSET UNITYSDK_OFFSET(0xC153590)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_SET_ENABLEFORCE_OFFSET UNITYSDK_OFFSET(0xC1534B0)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_SET_MONOAVATAR_OFFSET UNITYSDK_OFFSET(0xC153490)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_SET_PROXY_OFFSET UNITYSDK_OFFSET(0xC1534D0)
#define RPG_CLIENT_MONOTRAVELSHIPCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC1535A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTravelShipController_TypeDefinitionIndex = 64342;

	class MonoTravelShipController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Enable8Direction; // 0x18
		::System::Single VerticalInputLimit; // 0x1C
		::System::Single HorizontalInputLimit; // 0x20
		::RPGTools::Octree::Agent::AgentCurveNavigationParams NavigationParams; // 0x24
		::System::Single NavigationPreSteerAngle; // 0x2C
		::System::Single NavigationPreSteerSpeedRatio; // 0x30
		::System::Single NavigationPreSteerBeginWaitTime; // 0x34
		::System::Single NavigationPreSteerEndWaitTime; // 0x38
		::System::Single NavigationRotateRollLimitAngle; // 0x3C
		::System::String* NavigationEventName; // 0x40
		::System::String* arriveAttachPoint; // 0x48
		::System::Single force; // 0x50
		::System::Single drag; // 0x54
		::System::Single rigidbodyMaxRotPitch; // 0x58
		::System::Single rigidbodyMoveSpeed; // 0x5C
		::System::Single rigidbodyRotateSpeed; // 0x60
		::UnityEngine::AnimationCurve* rotateRollCurve; // 0x68
		::UnityEngine::AnimationCurve* recoverRollCurve; // 0x70
		::System::Single maxRotateRollAngle; // 0x78
		::System::Single rotateRollSpeed; // 0x7C
		::System::Single recoverRollSpeed; // 0x80
		::UnityEngine::AnimationCurve* inputRollMapCurve; // 0x88
		::UnityEngine::AnimationCurve* inputPitchMapCurve; // 0x90
		::System::String* DefaultEventName; // 0x98
		::System::Single DefaultIdleRotYawSpeed; // 0xA0
		::System::Single DefaultMoveRotYawSpeed; // 0xA4
		::System::Single DefaultMaxRotPitch; // 0xA8
		::System::Single DefaultMaxRotPitchSpeed; // 0xAC
		::System::Single DefaultMaxRotPitchRecoverSpeed; // 0xB0
		::System::Single DefaultMaxRotPitchAccel; // 0xB4
		::System::Single DefaultMaxRotPitchDecel; // 0xB8
		::System::Single DefaultIdleMaxRotPitch; // 0xBC
		::System::Single DefaultIdleMaxRotPitchSpeed; // 0xC0
		::System::Single DefaultIdleMaxRotPitchRecoverSpeed; // 0xC4
		::System::Single DefaultIdleMaxRotPitchAccel; // 0xC8
		::System::Single DefaultIdleMaxRotPitchDecel; // 0xCC
		::System::Single DefaultMoveAcceleration; // 0xD0
		::System::Single DefaultMoveDeceleration; // 0xD4
		::System::Single DefaultMoveMaxSpeed; // 0xD8
		::System::Single SprintRotYawSpeed; // 0xDC
		::System::Single SprintMaxRotPitch; // 0xE0
		::System::Single SprintMaxRotPitchSpeed; // 0xE4
		::System::Single SprintMaxRotPitchRecoverSpeed; // 0xE8
		::System::Single SprintMaxRotPitchAccel; // 0xEC
		::System::Single SprintMaxRotPitchDecel; // 0xF0
		::System::Single SprintMoveAcceleration; // 0xF4
		::System::Single SprintMoveDeceleration; // 0xF8
		::System::Single SprintMoveMaxSpeed; // 0xFC
		::System::Single SprintDuration; // 0x100
		::System::Single SprintCooldownTime; // 0x104
		::System::String* SprintEventName; // 0x108
		::System::Single PowerSprintMaxRotPitch; // 0x110
		::System::Single PowerSprintMaxRotPitchSpeed; // 0x114
		::System::Single PowerSprintMaxRotPitchRecoverSpeed; // 0x118
		::System::Single PowerSprintMaxRotPitchAccel; // 0x11C
		::System::Single PowerSprintMaxRotPitchDecel; // 0x120
		::System::Single PowerSprintMoveAcceleration; // 0x124
		::System::Single PowerSprintMoveDeceleration; // 0x128
		::System::Single PowerSprintMoveMaxSpeed; // 0x12C
		::System::String* PowerSprintEventName; // 0x130
		::System::Single NavigateMaxRotPitch; // 0x138
		::System::Single NavigateMaxRotPitchSpeed; // 0x13C
		::System::Single NavigateMaxRotPitchRecoverSpeed; // 0x140
		::System::Single NavigateMaxRotPitchAccel; // 0x144
		::System::Single NavigateMaxRotPitchDecel; // 0x148
		::System::String* NavigateFailEventName; // 0x150
		::RPG::Client::CharacterMonoAvatar* _MonoAvatar_k__BackingField; // 0x158
		::System::Boolean _EnableForce_k__BackingField; // 0x160
		::Class_2_6E72FA7907D46962* _Proxy_k__BackingField; // 0x168
		::System::Single _DefaultRotatePitch_k__BackingField; // 0x170
		::System::Single _DefaultRotateRollFlag_k__BackingField; // 0x174
		::Class_1_ED7576A0A144501C* Field_5_71; // 0x178

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_ONBIND_OFFSET))(this);
		}

		::System::Void OnUnbind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_ONUNBIND_OFFSET))(this);
		}

		::System::Void OnUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Void Method_5_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Single get_MaxRigidbodyRotPitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_GET_MAXRIGIDBODYROTPITCH_OFFSET))(this);
		}

		::RPG::Client::CharacterMonoAvatar* get_MonoAvatar()
		{
			return ((::RPG::Client::CharacterMonoAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_GET_MONOAVATAR_OFFSET))(this);
		}

		::System::Void set_MonoAvatar(::RPG::Client::CharacterMonoAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterMonoAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_SET_MONOAVATAR_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableForce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_GET_ENABLEFORCE_OFFSET))(this);
		}

		::System::Void set_EnableForce(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_SET_ENABLEFORCE_OFFSET))(this, a1);
		}

		::Class_2_6E72FA7907D46962* get_Proxy()
		{
			return ((::Class_2_6E72FA7907D46962*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_GET_PROXY_OFFSET))(this);
		}

		::System::Void set_Proxy(::Class_2_6E72FA7907D46962* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6E72FA7907D46962*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_SET_PROXY_OFFSET))(this, a1);
		}

		::Class_3_95AF281BFBCF5094* get_MoveProxy()
		{
			return ((::Class_3_95AF281BFBCF5094*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_GET_MOVEPROXY_OFFSET))(this);
		}

		::System::Single get_DefaultRotatePitch()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_GET_DEFAULTROTATEPITCH_OFFSET))(this);
		}

		::System::Void set_DefaultRotatePitch(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_SET_DEFAULTROTATEPITCH_OFFSET))(this, a1);
		}

		::System::Single get_DefaultRotateRollFlag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_GET_DEFAULTROTATEROLLFLAG_OFFSET))(this);
		}

		::System::Void set_DefaultRotateRollFlag(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCONTROLLER_SET_DEFAULTROTATEROLLFLAG_OFFSET))(this, a1);
		}
	};
}
