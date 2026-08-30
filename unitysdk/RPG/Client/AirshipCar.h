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

#define RPG_CLIENT_AIRSHIPCAR_AWAKE_OFFSET UNITYSDK_OFFSET(0x19C5BD30)
#define RPG_CLIENT_AIRSHIPCAR_GET_ACCELTRIGGER_OFFSET UNITYSDK_OFFSET(0x19C5BCF0)
#define RPG_CLIENT_AIRSHIPCAR_GET_AUDIO_OFFSET UNITYSDK_OFFSET(0x19C5BCB0)
#define RPG_CLIENT_AIRSHIPCAR_GET_AVOIDTRIGGER_OFFSET UNITYSDK_OFFSET(0x19C5BCD0)
#define RPG_CLIENT_AIRSHIPCAR_GET_COLLISION_OFFSET UNITYSDK_OFFSET(0x19C5BD10)
#define RPG_CLIENT_AIRSHIPCAR_METHOD_5_72B900547A7C8BB8_OFFSET UNITYSDK_OFFSET(0x19C5C720)
#define RPG_CLIENT_AIRSHIPCAR_METHOD_5_AA8FCAC1710D8628_OFFSET UNITYSDK_OFFSET(0x19C5CA00)
#define RPG_CLIENT_AIRSHIPCAR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19C5C100)
#define RPG_CLIENT_AIRSHIPCAR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19C5C000)
#define RPG_CLIENT_AIRSHIPCAR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19C5BEE0)
#define RPG_CLIENT_AIRSHIPCAR_RELEASEARTMODEL_OFFSET UNITYSDK_OFFSET(0x19C5C210)
#define RPG_CLIENT_AIRSHIPCAR_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x19C5C690)
#define RPG_CLIENT_AIRSHIPCAR_SETUP_OFFSET UNITYSDK_OFFSET(0x19C5C3D0)
#define RPG_CLIENT_AIRSHIPCAR_SET_ACCELTRIGGER_OFFSET UNITYSDK_OFFSET(0x19C5BD00)
#define RPG_CLIENT_AIRSHIPCAR_SET_AUDIO_OFFSET UNITYSDK_OFFSET(0x19C5BCC0)
#define RPG_CLIENT_AIRSHIPCAR_SET_AVOIDTRIGGER_OFFSET UNITYSDK_OFFSET(0x19C5BCE0)
#define RPG_CLIENT_AIRSHIPCAR_SET_COLLISION_OFFSET UNITYSDK_OFFSET(0x19C5BD20)
#define RPG_CLIENT_AIRSHIPCAR__CTOR_OFFSET UNITYSDK_OFFSET(0x19C5CB50)
#define RPG_CLIENT_AIRSHIPCAR__SETUP_B__46_0_OFFSET UNITYSDK_OFFSET(0x19C5CBA0)
#define RPG_CLIENT_AIRSHIPCAR__SETUP_B__46_1_OFFSET UNITYSDK_OFFSET(0x19C5CBB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipCar_TypeDefinitionIndex = 59945;

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
		::RPG::Client::OpenWorld::StreamingItemData* MMCJCMGNOFG; // 0xB8
		::RPG::Client::Stage* PKLNPNKEJOO; // 0xC0
		::System::Single ALLMMMCIHNO; // 0xC8
		::UnityEngine::Animator* APPGGMLEPLN; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR__CTOR_OFFSET))(this);
		}

		::RPG::Client::AirshipCarAudio* get_Audio()
		{
			return ((::RPG::Client::AirshipCarAudio*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_GET_AUDIO_OFFSET))(this);
		}

		::System::Void set_Audio(::RPG::Client::AirshipCarAudio* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirshipCarAudio*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_SET_AUDIO_OFFSET))(this, a1);
		}

		::RPG::Client::AirshipCarDetectAvoidTrigger* get_AvoidTrigger()
		{
			return ((::RPG::Client::AirshipCarDetectAvoidTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_GET_AVOIDTRIGGER_OFFSET))(this);
		}

		::System::Void set_AvoidTrigger(::RPG::Client::AirshipCarDetectAvoidTrigger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirshipCarDetectAvoidTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_SET_AVOIDTRIGGER_OFFSET))(this, a1);
		}

		::RPG::Client::AirshipCarDetectAccelTrigger* get_AccelTrigger()
		{
			return ((::RPG::Client::AirshipCarDetectAccelTrigger*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_GET_ACCELTRIGGER_OFFSET))(this);
		}

		::System::Void set_AccelTrigger(::RPG::Client::AirshipCarDetectAccelTrigger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirshipCarDetectAccelTrigger*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_SET_ACCELTRIGGER_OFFSET))(this, a1);
		}

		::RPG::Client::AirshipCarCollision* get_Collision()
		{
			return ((::RPG::Client::AirshipCarCollision*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_GET_COLLISION_OFFSET))(this);
		}

		::System::Void set_Collision(::RPG::Client::AirshipCarCollision* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirshipCarCollision*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_SET_COLLISION_OFFSET))(this, a1);
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

		::System::Void Method_5_72B900547A7C8BB8(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_METHOD_5_72B900547A7C8BB8_OFFSET))(this, a1);
		}

		::System::Void Method_5_AA8FCAC1710D8628(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR_METHOD_5_AA8FCAC1710D8628_OFFSET))(this, a1, a2);
		}

		::System::Void _Setup_b__46_0(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR__SETUP_B__46_0_OFFSET))(this, a1, a2);
		}

		::System::Void _Setup_b__46_1(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPCAR__SETUP_B__46_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
