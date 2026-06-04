#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class QuadricBezier; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTGOLDFLYEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xBB8EC00)
#define RPG_CLIENT_GRIDFIGHTGOLDFLYEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0xBB8E920)
#define RPG_CLIENT_GRIDFIGHTGOLDFLYEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0xBB8EC40)
#define RPG_CLIENT_GRIDFIGHTGOLDFLYEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xBB8EBC0)
#define RPG_CLIENT_GRIDFIGHTGOLDFLYEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBB8EEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGoldFlyEffect_TypeDefinitionIndex = 60283;

	class GridFightGoldFlyEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Field_5_0; // 0x18
		::UnityEngine::Transform* Field_5_1; // 0x20
		::RPG::Client::QuadricBezier* Field_5_2; // 0x28
		::UnityEngine::ParticleSystem* Field_5_3; // 0x30
		::UnityEngine::Animation* Field_5_4; // 0x38
		::System::Single Field_5_5; // 0x40
		::System::String* Field_5_6; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGOLDFLYEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGOLDFLYEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGOLDFLYEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGOLDFLYEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGOLDFLYEFFECT_PLAY_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
