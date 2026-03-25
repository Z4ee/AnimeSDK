#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTANIMEFFECT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x97CA150)
#define RPG_CLIENT_GRIDFIGHTANIMEFFECT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x97CA190)
#define RPG_CLIENT_GRIDFIGHTANIMEFFECT_PLAY_OFFSET UNITYSDK_OFFSET(0x97CA220)
#define RPG_CLIENT_GRIDFIGHTANIMEFFECT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x97CA110)
#define RPG_CLIENT_GRIDFIGHTANIMEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x97CA380)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAnimEffect_TypeDefinitionIndex = 52371;

	class GridFightAnimEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTANIMEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTANIMEFFECT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTANIMEFFECT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTANIMEFFECT_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void Play(::UnityEngine::Vector3 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTANIMEFFECT_PLAY_OFFSET))(this, a1, a2);
		}
	};
}
