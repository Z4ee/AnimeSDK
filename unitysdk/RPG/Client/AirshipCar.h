#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AirshipCarAudio; }
namespace RPG::Client { class AirshipCarCollision; }
namespace RPG::Client { class AirshipCarDetectAccelTrigger; }
namespace RPG::Client { class AirshipCarDetectAvoidTrigger; }
namespace RPG::Client { class Airship_AirshipEffectConfig; }
namespace RPG::Client { class Stage; }
namespace RPG::Client { class TiltCommonConfig; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRSHIPCAR_AWAKE_OFFSET UNITYSDK_OFFSET(0x9CF1010)
#define RPG_CLIENT_AIRSHIPCAR_GET_ACCELTRIGGER_OFFSET UNITYSDK_OFFSET(0x9CF0FD0)
#define RPG_CLIENT_AIRSHIPCAR_GET_AUDIO_OFFSET UNITYSDK_OFFSET(0x9CF0F90)
#define RPG_CLIENT_AIRSHIPCAR_GET_AVOIDTRIGGER_OFFSET UNITYSDK_OFFSET(0x9CF0FB0)
#define RPG_CLIENT_AIRSHIPCAR_GET_COLLISION_OFFSET UNITYSDK_OFFSET(0x9CF0FF0)
#define RPG_CLIENT_AIRSHIPCAR_METHOD_5_6C3479A4B494BBB2_OFFSET UNITYSDK_OFFSET(0x9CF17A0)
#define RPG_CLIENT_AIRSHIPCAR_METHOD_5_DBB33931C8926D5D_OFFSET UNITYSDK_OFFSET(0x9CF19F0)
#define RPG_CLIENT_AIRSHIPCAR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9CF1320)
#define RPG_CLIENT_AIRSHIPCAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9CF1280)
#define RPG_CLIENT_AIRSHIPCAR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9CF11E0)
#define RPG_CLIENT_AIRSHIPCAR_RELEASEARTMODEL_OFFSET UNITYSDK_OFFSET(0x9CF1410)
#define RPG_CLIENT_AIRSHIPCAR_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x9CF1710)
#define RPG_CLIENT_AIRSHIPCAR_SETUP_OFFSET UNITYSDK_OFFSET(0x9CF14F0)
#define RPG_CLIENT_AIRSHIPCAR_SET_ACCELTRIGGER_OFFSET UNITYSDK_OFFSET(0x9CF0FE0)
#define RPG_CLIENT_AIRSHIPCAR_SET_AUDIO_OFFSET UNITYSDK_OFFSET(0x9CF0FA0)
#define RPG_CLIENT_AIRSHIPCAR_SET_AVOIDTRIGGER_OFFSET UNITYSDK_OFFSET(0x9CF0FC0)
#define RPG_CLIENT_AIRSHIPCAR_SET_COLLISION_OFFSET UNITYSDK_OFFSET(0x9CF1000)
#define RPG_CLIENT_AIRSHIPCAR__CTOR_OFFSET UNITYSDK_OFFSET(0x9CF1AB0)
#define RPG_CLIENT_AIRSHIPCAR__SETUP_B__46_0_OFFSET UNITYSDK_OFFSET(0x9CF1B00)
#define RPG_CLIENT_AIRSHIPCAR__SETUP_B__46_1_OFFSET UNITYSDK_OFFSET(0x9CF1B10)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipCar_TypeDefinitionIndex = 55174;

	class AirshipCar : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* prefabPath; // 0x18
		::UnityEngine::Vector3 prefabPositionOffset; // 0x20
		::UnityEngine::Vector3 prefabRotationOffset; // 0x2C
		::Il2CppArray<::RPG::Client::Airship_AirshipEffectConfig*>* residentEffectConfigs; // 0x38
		::System::Single maxMoveSpeed; // 0x40
		::System::Single moveAccelSpeed; // 0x44
		::System::Single moveDecelSpeed; // 0x48
		::System::Single startupLimitSpeed; // 0x4C
		::System::Single shutdownLimitSpeed; // 0x50
		::System::Single maxAccelRotateAngle; // 0x54
		::System::Single maxDecelRotateAngle; // 0x58
		::System::Single maxAccelRotationSpeed; // 0x5C
		::System::Single maxDecelRotationSpeed; // 0x60
		::System::Single maxRotationSpeed; // 0x64
		::System::Single transitionDuration; // 0x68
		::System::Single transitionCDTime; // 0x6C
		::UnityEngine::AnimationCurve* transitionPosCurve; // 0x70
		::UnityEngine::AnimationCurve* transitionYawCurve; // 0x78
		::RPG::Client::TiltCommonConfig* tiltConfig; // 0x80
		::System::Single avoidLength; // 0x88
		::System::Single avoidWidth; // 0x8C
		::RPG::Client::AirshipCarAudio* _Audio_k__BackingField; // 0x90
		::RPG::Client::AirshipCarDetectAvoidTrigger* _AvoidTrigger_k__BackingField; // 0x98
		::RPG::Client::AirshipCarDetectAccelTrigger* _AccelTrigger_k__BackingField; // 0xA0
		::RPG::Client::AirshipCarCollision* _Collision_k__BackingField; // 0xA8
		::UnityEngine::Transform* Transform; // 0xB0
		::RPG::Client::OpenWorld::StreamingItemData* Field_5_26; // 0xB8
		::RPG::Client::Stage* Field_5_27; // 0xC0
		::System::Single Field_5_28; // 0xC8
		::UnityEngine::Animator* Field_5_29; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR__CTOR_OFFSET))(this);
		}

		::RPG::Client::AirshipCarAudio* get_Audio()
		{
			return ((::RPG::Client::AirshipCarAudio*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_GET_AUDIO_OFFSET))(this);
		}

		::System::Void set_Audio(::RPG::Client::AirshipCarAudio* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirshipCarAudio*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_SET_AUDIO_OFFSET))(this, value);
		}

		::RPG::Client::AirshipCarDetectAvoidTrigger* get_AvoidTrigger()
		{
			return ((::RPG::Client::AirshipCarDetectAvoidTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_GET_AVOIDTRIGGER_OFFSET))(this);
		}

		::System::Void set_AvoidTrigger(::RPG::Client::AirshipCarDetectAvoidTrigger* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirshipCarDetectAvoidTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_SET_AVOIDTRIGGER_OFFSET))(this, value);
		}

		::RPG::Client::AirshipCarDetectAccelTrigger* get_AccelTrigger()
		{
			return ((::RPG::Client::AirshipCarDetectAccelTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_GET_ACCELTRIGGER_OFFSET))(this);
		}

		::System::Void set_AccelTrigger(::RPG::Client::AirshipCarDetectAccelTrigger* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirshipCarDetectAccelTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_SET_ACCELTRIGGER_OFFSET))(this, value);
		}

		::RPG::Client::AirshipCarCollision* get_Collision()
		{
			return ((::RPG::Client::AirshipCarCollision*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_GET_COLLISION_OFFSET))(this);
		}

		::System::Void set_Collision(::RPG::Client::AirshipCarCollision* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirshipCarCollision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_SET_COLLISION_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_SETUP_OFFSET))(this);
		}

		::System::Void ReleaseArtModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_RELEASEARTMODEL_OFFSET))(this);
		}

		::System::Void SetTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_SETTIMESCALE_OFFSET))(this, a1);
		}

		::System::Void Method_5_6C3479A4B494BBB2(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_METHOD_5_6C3479A4B494BBB2_OFFSET))(this, a1);
		}

		::System::Void Method_5_DBB33931C8926D5D(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_METHOD_5_DBB33931C8926D5D_OFFSET))(this, a1, a2);
		}

		::System::Void _Setup_b__46_0(::UnityEngine::GameObject* go, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR__SETUP_B__46_0_OFFSET))(this, go, data);
		}

		::System::Void _Setup_b__46_1(::UnityEngine::GameObject* last, ::UnityEngine::GameObject* now, ::RPG::Client::OpenWorld::StreamingItemData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR__SETUP_B__46_1_OFFSET))(this, last, now, data);
		}
	};
}
