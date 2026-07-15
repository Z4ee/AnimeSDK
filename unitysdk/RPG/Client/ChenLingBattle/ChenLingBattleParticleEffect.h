#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPARTICLEEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1964F060)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPARTICLEEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1964F0D0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPARTICLEEFFECT_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1963AE70)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPARTICLEEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1964F3D0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPARTICLEEFFECT_SETCAMERA_OFFSET UNITYSDK_OFFSET(0x1964F2F0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPARTICLEEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1964F020)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPARTICLEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1964F540)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleParticleEffect_TypeDefinitionIndex = 72491;

	class ChenLingBattleParticleEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Field_5_0; // 0x18
		::Il2CppArray<::UnityEngine::ParticleSystemRenderer*>* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPARTICLEEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPARTICLEEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPARTICLEEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPARTICLEEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void SetCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPARTICLEEFFECT_SETCAMERA_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::System::Action* a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPARTICLEEFFECT_PLAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Play_1(::UnityEngine::Transform* a1, ::System::Action* a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Action*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEPARTICLEEFFECT_PLAY_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
