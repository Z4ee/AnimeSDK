#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTGRIDPUTDOWNEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x194FF890)
#define RPG_CLIENT_GRIDFIGHTGRIDPUTDOWNEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x194FF6F0)
#define RPG_CLIENT_GRIDFIGHTGRIDPUTDOWNEFFECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x194FF8D0)
#define RPG_CLIENT_GRIDFIGHTGRIDPUTDOWNEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x194FF910)
#define RPG_CLIENT_GRIDFIGHTGRIDPUTDOWNEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x194FF850)
#define RPG_CLIENT_GRIDFIGHTGRIDPUTDOWNEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x194FFB40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridPutDownEffect_TypeDefinitionIndex = 61574;

	class GridFightGridPutDownEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::ParticleSystemRenderer*>* Field_5_0; // 0x18
		::UnityEngine::Animation* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDPUTDOWNEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDPUTDOWNEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDPUTDOWNEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDPUTDOWNEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDPUTDOWNEFFECT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Play(::UnityEngine::Transform* a1, ::System::Action* a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Action*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDPUTDOWNEFFECT_PLAY_OFFSET))(this, a1, a2, a3);
		}
	};
}
