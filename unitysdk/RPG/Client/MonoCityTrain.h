#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_004034A1FAAF468A;
class Class_1_23F67DD15593C8D6;
class Class_1_9CBC71DC5240DC00;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class EntityLodDetail; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOCITYTRAIN_ALERT_OFFSET UNITYSDK_OFFSET(0xA9165E0)
#define RPG_CLIENT_MONOCITYTRAIN_AWAKE_OFFSET UNITYSDK_OFFSET(0xA913C10)
#define RPG_CLIENT_MONOCITYTRAIN_BOOST_OFFSET UNITYSDK_OFFSET(0xA9162F0)
#define RPG_CLIENT_MONOCITYTRAIN_BRAKE_OFFSET UNITYSDK_OFFSET(0xA916490)
#define RPG_CLIENT_MONOCITYTRAIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA915C60)
#define RPG_CLIENT_MONOCITYTRAIN_GETSLIDEMAXSPEED_OFFSET UNITYSDK_OFFSET(0xA916830)
#define RPG_CLIENT_MONOCITYTRAIN_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xA913C00)
#define RPG_CLIENT_MONOCITYTRAIN_HARDBRAKE_OFFSET UNITYSDK_OFFSET(0xA9164E0)
#define RPG_CLIENT_MONOCITYTRAIN_HIDEHARDBRAKEEFFECT_OFFSET UNITYSDK_OFFSET(0xA916280)
#define RPG_CLIENT_MONOCITYTRAIN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xA9149F0)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0xA913EF0)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xA913E60)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_3B4FCCB1316C6ED8_OFFSET UNITYSDK_OFFSET(0xA914DD0)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0xA917080)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xA916DE0)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xA915D80)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0xA916A20)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0xA915050)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_6CAB718A3750A897_OFFSET UNITYSDK_OFFSET(0xA9168A0)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xA917360)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0xA917120)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_A5CFA053D190B8E6_OFFSET UNITYSDK_OFFSET(0xA916D70)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_BE68D528C0C9EE88_OFFSET UNITYSDK_OFFSET(0xA916AE0)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_C9F59B9D8CCA4DFF_OFFSET UNITYSDK_OFFSET(0xA915560)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xA9148C0)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_CC61F5A692F0C75B_OFFSET UNITYSDK_OFFSET(0xA916350)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xA9172A0)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0xA9144B0)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_EE7A41C190351096_OFFSET UNITYSDK_OFFSET(0xA916CB0)
#define RPG_CLIENT_MONOCITYTRAIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA9140C0)
#define RPG_CLIENT_MONOCITYTRAIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA913F80)
#define RPG_CLIENT_MONOCITYTRAIN_PLAYCLOSEDOOR_OFFSET UNITYSDK_OFFSET(0xA916740)
#define RPG_CLIENT_MONOCITYTRAIN_PLAYOPENDOOR_OFFSET UNITYSDK_OFFSET(0xA916630)
#define RPG_CLIENT_MONOCITYTRAIN_SETDITHERALPHA_OFFSET UNITYSDK_OFFSET(0xA917460)
#define RPG_CLIENT_MONOCITYTRAIN_SETWHEELVIEWDISTANCE_OFFSET UNITYSDK_OFFSET(0xA915F40)
#define RPG_CLIENT_MONOCITYTRAIN_SET_SPEED_OFFSET UNITYSDK_OFFSET(0xA913B60)
#define RPG_CLIENT_MONOCITYTRAIN_SHOWHARDBRAKEEFFECT_OFFSET UNITYSDK_OFFSET(0xA915FA0)
#define RPG_CLIENT_MONOCITYTRAIN_START_OFFSET UNITYSDK_OFFSET(0xA914240)
#define RPG_CLIENT_MONOCITYTRAIN_STOPLOOPSOUND_OFFSET UNITYSDK_OFFSET(0xA916590)
#define RPG_CLIENT_MONOCITYTRAIN_TRAVELTOSTATION_OFFSET UNITYSDK_OFFSET(0xA916540)
#define RPG_CLIENT_MONOCITYTRAIN_UPDATE_OFFSET UNITYSDK_OFFSET(0xA9147F0)
#define RPG_CLIENT_MONOCITYTRAIN__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9176B0)
#define RPG_CLIENT_MONOCITYTRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0xA9174D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCityTrain_TypeDefinitionIndex = 63791;

	class MonoCityTrain : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_49()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCityTrain_TypeDefinitionIndex)->GetStaticField(0xD480);
		}
		static ::System::Int32* StaticGet_Field_5_50()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCityTrain_TypeDefinitionIndex)->GetStaticField(0xD484);
		}
		// static const ::System::Int32 Field_5_23 = 0x8; // 0x0
		// static const ::System::String* Field_5_36; // 0x0
		// static const ::System::String* Field_5_37; // 0x0
		::UnityEngine::Collider* trigger; // 0x18
		::System::Single steerAngleSpeed; // 0x20
		::System::Single steerSlowDownAngle; // 0x24
		::System::Single wheelRadius; // 0x28
		::System::Single swingRatio; // 0x2C
		::System::Single maxSwing; // 0x30
		::System::String* hardBrakeEffectPath; // 0x38
		::System::String* boostSoundEvent; // 0x40
		::System::String* stopSoundEvent; // 0x48
		::System::String* hardBrakeSoundEvent; // 0x50
		::System::String* alertSoundEvent; // 0x58
		::System::String* openDoolSoundEvent; // 0x60
		::System::String* GetOffSoundEvent; // 0x68
		::System::String* GateCloseRingSoundEvent; // 0x70
		::System::String* closeDoolSoundEvent; // 0x78
		::System::String* stopDrivingLoopSoundEvent; // 0x80
		::System::String* arriveSoundEvent; // 0x88
		::System::String* speedRTPC; // 0x90
		::UnityEngine::AnimationCurve* slideCurve; // 0x98
		::System::Boolean forbidRot; // 0xA0
		::Il2CppArray<::System::String*>* LodPaths; // 0xA8
		::System::Single Field_5_21; // 0xB0
		::System::Single Field_5_22; // 0xB4
		::Il2CppArray<::UnityEngine::Quaternion>* Field_5_24; // 0xB8
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_25; // 0xC0
		::UnityEngine::Vector3 Field_5_26; // 0xC8
		::Class_1_004034A1FAAF468A* Field_5_27; // 0xD8
		::RPG::Client::MonoEffect* Field_5_28; // 0xE0
		::UnityEngine::Animator* Field_5_29; // 0xE8
		::System::Single Field_5_30; // 0xF0
		::UnityEngine::GameObject* Field_5_31; // 0xF8
		::Class_1_23F67DD15593C8D6* Field_5_32; // 0x100
		::System::Single Field_5_33; // 0x108
		::System::Single Field_5_34; // 0x10C
		::System::Single Field_5_35; // 0x110
		::UnityEngine::Transform* Field_5_38; // 0x118
		::Il2CppArray<::UnityEngine::Transform*>* Field_5_39; // 0x120
		::Il2CppArray<::System::String*>* Field_5_40; // 0x128
		::System::Boolean Field_5_41; // 0x130
		::UnityEngine::GameObject* Field_5_42; // 0x138
		::RPG::GameCore::EntityLodDetail* Field_5_43; // 0x140
		::System::Int32 Field_5_44; // 0x148
		::System::String* Field_5_45; // 0x150
		::System::Action_1<::UnityEngine::GameObject*>* Field_5_46; // 0x158
		::System::Boolean Field_5_47; // 0x160
		::Class_1_9CBC71DC5240DC00* Field_5_48; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN__CCTOR_OFFSET))();
		}

		::System::Void set_Speed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_SET_SPEED_OFFSET))(this, a1);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_GET_SPEED_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_AWAKE_OFFSET))(this);
		}

		::System::Void Method_5_078D85152011B919()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_078D85152011B919_OFFSET))(this);
		}

		::System::Void Method_5_078D85152011B919_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_078D85152011B919_1_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_ONDISABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_START_OFFSET))(this);
		}

		::System::Void Method_5_D14D1C669EDC2D6B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_D14D1C669EDC2D6B_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_DISPOSE_OFFSET))(this);
		}

		::System::Void SetWheelViewDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_SETWHEELVIEWDISTANCE_OFFSET))(this, a1);
		}

		::System::Void ShowHardBrakeEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_SHOWHARDBRAKEEFFECT_OFFSET))(this);
		}

		::System::Void HideHardBrakeEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_HIDEHARDBRAKEEFFECT_OFFSET))(this);
		}

		::System::Void Boost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_BOOST_OFFSET))(this);
		}

		::System::Void Brake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_BRAKE_OFFSET))(this);
		}

		::System::Void HardBrake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_HARDBRAKE_OFFSET))(this);
		}

		::System::Void TravelToStation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_TRAVELTOSTATION_OFFSET))(this);
		}

		::System::Void StopLoopSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_STOPLOOPSOUND_OFFSET))(this);
		}

		::System::Void Alert()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_ALERT_OFFSET))(this);
		}

		::System::Void PlayOpenDoor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_PLAYOPENDOOR_OFFSET))(this);
		}

		::System::Void PlayCloseDoor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_PLAYCLOSEDOOR_OFFSET))(this);
		}

		::System::Single GetSlideMaxSpeed(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_GETSLIDEMAXSPEED_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_3B4FCCB1316C6ED8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_3B4FCCB1316C6ED8_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::UnityEngine::Quaternion Method_5_6CAB718A3750A897(::UnityEngine::Transform* a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_6CAB718A3750A897_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_C9F59B9D8CCA4DFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_C9F59B9D8CCA4DFF_OFFSET))(this);
		}

		::System::Void Method_5_CC61F5A692F0C75B(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_CC61F5A692F0C75B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_46DF29ACE60986D7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_46DF29ACE60986D7_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Void Method_5_BE68D528C0C9EE88(::RPG::GameCore::EntityLodDetail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_BE68D528C0C9EE88_OFFSET))(this, a1);
		}

		::System::String* Method_5_EE7A41C190351096(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_EE7A41C190351096_OFFSET))(this, a1);
		}

		::System::Void Method_5_A5CFA053D190B8E6(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_A5CFA053D190B8E6_OFFSET))(this, a1);
		}

		::System::Void Method_5_3CCA0B8A31B650A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_3CCA0B8A31B650A8_OFFSET))(this);
		}

		::System::Void Method_5_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_4307B2A4B4A12C1A_OFFSET))(this);
		}

		::System::Void Method_5_9D8CB5E47C1952BD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_9D8CB5E47C1952BD_OFFSET))(this);
		}

		::System::Void Method_5_79830F666EE579C0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_79830F666EE579C0_OFFSET))(this);
		}

		::System::Void Method_5_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_D0BD1377F2594D33_OFFSET))(this);
		}

		::System::Void Method_5_3C56C1AF247AC1EC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_3C56C1AF247AC1EC_OFFSET))(this);
		}

		::System::Void SetDitherAlpha(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_SETDITHERALPHA_OFFSET))(this, a1);
		}
	};
}
