#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTSIMPLEPARTICLEEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x98AEFF0)
#define RPG_CLIENT_GRIDFIGHTSIMPLEPARTICLEEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x98AF030)
#define RPG_CLIENT_GRIDFIGHTSIMPLEPARTICLEEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x98AF090)
#define RPG_CLIENT_GRIDFIGHTSIMPLEPARTICLEEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x98AEFB0)
#define RPG_CLIENT_GRIDFIGHTSIMPLEPARTICLEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x98AF130)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSimpleParticleEffect_TypeDefinitionIndex = 52398;

	class GridFightSimpleParticleEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSIMPLEPARTICLEEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSIMPLEPARTICLEEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSIMPLEPARTICLEEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSIMPLEPARTICLEEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSIMPLEPARTICLEEFFECT_PLAY_OFFSET))(this, a1);
		}
	};
}
