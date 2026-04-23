#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_PROP_DRONESPUZZLEMESHAREA_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xAE05250)
#define RPG_CLIENT_PROP_DRONESPUZZLEMESHAREA_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xAE052E0)
#define RPG_CLIENT_PROP_DRONESPUZZLEMESHAREA__CTOR_OFFSET UNITYSDK_OFFSET(0xAE05370)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DronesPuzzleMeshArea_TypeDefinitionIndex = 72070;

	class DronesPuzzleMeshArea : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* targetCollider; // 0x18
		::System::Action* OnEnter; // 0x20
		::System::Action* OnExit; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEMESHAREA__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEMESHAREA_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DRONESPUZZLEMESHAREA_ONTRIGGEREXIT_OFFSET))(this, a1);
		}
	};
}
