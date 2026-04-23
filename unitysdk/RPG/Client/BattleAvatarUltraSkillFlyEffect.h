#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_9A122A5F063AF6FF;
namespace RPG::Client { class QuadricBezier; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9DFAC10)
#define RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_METHOD_5_005A196F2DA2B034_OFFSET UNITYSDK_OFFSET(0x9DFAFC0)
#define RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x9DFA910)
#define RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x9DFAC50)
#define RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9DFABD0)
#define RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x9DFB370)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAvatarUltraSkillFlyEffect_TypeDefinitionIndex = 65876;

	class BattleAvatarUltraSkillFlyEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Field_5_0; // 0x18
		::UnityEngine::Transform* Field_5_1; // 0x20
		::UnityEngine::Transform* Field_5_2; // 0x28
		::RPG::Client::QuadricBezier* Field_5_3; // 0x30
		::UnityEngine::ParticleSystem* Field_5_4; // 0x38
		::UnityEngine::Animation* Field_5_5; // 0x40
		::System::Single Field_5_6; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void Play(::Class_1_9A122A5F063AF6FF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9A122A5F063AF6FF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_PLAY_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_5_005A196F2DA2B034(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARULTRASKILLFLYEFFECT_METHOD_5_005A196F2DA2B034_OFFSET))(this, a1, a2, a3);
		}
	};
}
