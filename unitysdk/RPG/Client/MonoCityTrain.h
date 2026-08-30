#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_004034A1FAAF468A;
class Class_1_1342B57709FD7AC5;
class Class_1_23F67DD15593C8D6;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class EntityLodDetail; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOCITYTRAIN_ALERT_OFFSET UNITYSDK_OFFSET(0xD7378E0)
#define RPG_CLIENT_MONOCITYTRAIN_AWAKE_OFFSET UNITYSDK_OFFSET(0xD734F40)
#define RPG_CLIENT_MONOCITYTRAIN_BOOST_OFFSET UNITYSDK_OFFSET(0xD7375F0)
#define RPG_CLIENT_MONOCITYTRAIN_BRAKE_OFFSET UNITYSDK_OFFSET(0xD737790)
#define RPG_CLIENT_MONOCITYTRAIN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD736F70)
#define RPG_CLIENT_MONOCITYTRAIN_GETSLIDEMAXSPEED_OFFSET UNITYSDK_OFFSET(0xD737B30)
#define RPG_CLIENT_MONOCITYTRAIN_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xD734F30)
#define RPG_CLIENT_MONOCITYTRAIN_HARDBRAKE_OFFSET UNITYSDK_OFFSET(0xD7377E0)
#define RPG_CLIENT_MONOCITYTRAIN_HIDEHARDBRAKEEFFECT_OFFSET UNITYSDK_OFFSET(0xD737580)
#define RPG_CLIENT_MONOCITYTRAIN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD735D90)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_078D85152011B919_1_OFFSET UNITYSDK_OFFSET(0xD735250)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xD7351C0)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_3B4FCCB1316C6ED8_OFFSET UNITYSDK_OFFSET(0xD736150)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0xD738360)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xD7380C0)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xD737090)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_46DF29ACE60986D7_OFFSET UNITYSDK_OFFSET(0xD737D20)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0xD7363D0)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_6CAB718A3750A897_OFFSET UNITYSDK_OFFSET(0xD737BA0)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xD738640)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_9D8CB5E47C1952BD_OFFSET UNITYSDK_OFFSET(0xD738400)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_A5CFA053D190B8E6_OFFSET UNITYSDK_OFFSET(0xD738050)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_BE68D528C0C9EE88_OFFSET UNITYSDK_OFFSET(0xD737DE0)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_C8D6B29192F288ED_OFFSET UNITYSDK_OFFSET(0xD735830)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_C9F59B9D8CCA4DFF_OFFSET UNITYSDK_OFFSET(0xD7368C0)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xD735C60)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_CC61F5A692F0C75B_OFFSET UNITYSDK_OFFSET(0xD737650)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xD738580)
#define RPG_CLIENT_MONOCITYTRAIN_METHOD_5_EE7A41C190351096_OFFSET UNITYSDK_OFFSET(0xD737FB0)
#define RPG_CLIENT_MONOCITYTRAIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD735430)
#define RPG_CLIENT_MONOCITYTRAIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD7352E0)
#define RPG_CLIENT_MONOCITYTRAIN_PLAYCLOSEDOOR_OFFSET UNITYSDK_OFFSET(0xD737A40)
#define RPG_CLIENT_MONOCITYTRAIN_PLAYOPENDOOR_OFFSET UNITYSDK_OFFSET(0xD737930)
#define RPG_CLIENT_MONOCITYTRAIN_SETDITHERALPHA_OFFSET UNITYSDK_OFFSET(0xD738740)
#define RPG_CLIENT_MONOCITYTRAIN_SETWHEELVIEWDISTANCE_OFFSET UNITYSDK_OFFSET(0xD737250)
#define RPG_CLIENT_MONOCITYTRAIN_SET_SPEED_OFFSET UNITYSDK_OFFSET(0xD734E90)
#define RPG_CLIENT_MONOCITYTRAIN_SHOWHARDBRAKEEFFECT_OFFSET UNITYSDK_OFFSET(0xD7372B0)
#define RPG_CLIENT_MONOCITYTRAIN_START_OFFSET UNITYSDK_OFFSET(0xD7355B0)
#define RPG_CLIENT_MONOCITYTRAIN_STOPLOOPSOUND_OFFSET UNITYSDK_OFFSET(0xD737890)
#define RPG_CLIENT_MONOCITYTRAIN_TRAVELTOSTATION_OFFSET UNITYSDK_OFFSET(0xD737840)
#define RPG_CLIENT_MONOCITYTRAIN_UPDATE_OFFSET UNITYSDK_OFFSET(0xD735B00)
#define RPG_CLIENT_MONOCITYTRAIN__CCTOR_OFFSET UNITYSDK_OFFSET(0xD738900)
#define RPG_CLIENT_MONOCITYTRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0xD7387B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCityTrain_TypeDefinitionIndex = 69153;

	class MonoCityTrain : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_AOAKPDEIPIP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCityTrain_TypeDefinitionIndex)->GetStaticField(0x1B30);
		}
		static ::System::Int32* StaticGet_CCIPBKALLCN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoCityTrain_TypeDefinitionIndex)->GetStaticField(0x1B34);
		}
		// static const ::System::Int32 GJKAOBFIOPA = 0x8; // 0x0
		// static const ::System::String* GGFFMJIKBPG; // 0x0
		// static const ::System::String* PCAGGOKMFOD; // 0x0
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
		::System::Single FKCIBFBHGIL; // 0xB0
		::System::Single ELDHKFAFDCB; // 0xB4
		::Il2CppArray<::UnityEngine::Quaternion>* EFJPNCMEHPJ; // 0xB8
		::Il2CppArray<::UnityEngine::Vector3>* KDEOJOGDKPC; // 0xC0
		::UnityEngine::Vector3 CPGIPHLCAFI; // 0xC8
		::Class_1_004034A1FAAF468A* KNNAAPGAOBO; // 0xD8
		::RPG::Client::MonoEffect* ADDBPKLJEDL; // 0xE0
		::UnityEngine::Animator* NAHOHKAHBPK; // 0xE8
		::System::Single CJLEMCKMPCM; // 0xF0
		::UnityEngine::GameObject* JAGAJHEMINH; // 0xF8
		::Class_1_23F67DD15593C8D6* PEMJLBKDJHE; // 0x100
		::System::Single HILOIBFHCKN; // 0x108
		::System::Single PMNIOEMJIDP; // 0x10C
		::System::Single GGBAJJJLDPO; // 0x110
		::UnityEngine::Transform* NOOFDJFLGDL; // 0x118
		::Il2CppArray<::UnityEngine::Transform*>* KGKMNFNKHBC; // 0x120
		::Il2CppArray<::System::String*>* NOPJPNIOPCL; // 0x128
		::System::Boolean BAHMCCNHHKF; // 0x130
		::UnityEngine::GameObject* IIIEBGLMPIF; // 0x138
		::RPG::GameCore::EntityLodDetail* PAEMLLPLDPB; // 0x140
		::System::Int32 LKECAKOHCKP; // 0x148
		::System::String* CEOKAGCAFHK; // 0x150
		::System::Action_1<::UnityEngine::GameObject*>* IPCAFEGMEGK; // 0x158
		::System::Boolean PCHELMOJKOO; // 0x160
		::Class_1_1342B57709FD7AC5* OIDAGBPPNBJ; // 0x168

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

		::System::Void Method_5_C8D6B29192F288ED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCITYTRAIN_METHOD_5_C8D6B29192F288ED_OFFSET))(this);
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
