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

#define RPG_CLIENT_GRIDFIGHTGOLDFLYEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1BA40940)
#define RPG_CLIENT_GRIDFIGHTGOLDFLYEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1BA40660)
#define RPG_CLIENT_GRIDFIGHTGOLDFLYEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1BA40980)
#define RPG_CLIENT_GRIDFIGHTGOLDFLYEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1BA40900)
#define RPG_CLIENT_GRIDFIGHTGOLDFLYEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA40C00)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGoldFlyEffect_TypeDefinitionIndex = 64557;

	class GridFightGoldFlyEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* KNGEKPKBIDK; // 0x18
		::UnityEngine::Transform* GNPBGAKIAHM; // 0x20
		::RPG::Client::QuadricBezier* BKHMEKLPNHJ; // 0x28
		::UnityEngine::ParticleSystem* HDNJKMJLOOG; // 0x30
		::UnityEngine::Animation* KCOAILOHDND; // 0x38
		::System::Single HBDJCFFDGDD; // 0x40
		::System::String* JHEOPCPGBDF; // 0x48

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
