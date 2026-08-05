#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class MeshRenderer; }

#define MOLEMOLE_MONODRONEGRIDEFFECT_SYNCCHARACTERPOS_OFFSET UNITYSDK_OFFSET(0x149FD320)
#define MOLEMOLE_MONODRONEGRIDEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x149FD420)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDroneGridEffect_TypeDefinitionIndex = 82609;

	class MonoDroneGridEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 Field_5_1; // 0x18
		::UnityEngine::MeshRenderer* MeshRenderer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRONEGRIDEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void SyncCharacterPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODRONEGRIDEFFECT_SYNCCHARACTERPOS_OFFSET))(this, a1);
		}
	};
}
