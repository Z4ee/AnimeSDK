#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightParticleEffect.h"

namespace System { class Action; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1A67D250)
#define RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_METHOD_6_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1A67D120)
#define RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x1A67D2E0)
#define RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A67D0D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A67D410)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipActiveEffect_TypeDefinitionIndex = 61547;

	class GridFightEquipActiveEffect : public ::RPG::Client::GridFightParticleEffect
	{
	public:
		::UnityEngine::Transform* Field_6_0; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_UPDATE_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void Play(::UnityEngine::Transform* a1, ::System::Action* a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Action*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_PLAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPACTIVEEFFECT_METHOD_6_1290EA767C459179_OFFSET))(this);
		}
	};
}
