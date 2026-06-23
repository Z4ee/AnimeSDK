#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace PathCreation { class PathCreator; }
namespace PathCreation::Examples { class PathFollower; }
namespace UnityEngine { class Transform; }

#define PATHCREATION_EXAMPLES_PATHSPAWNER_START_OFFSET UNITYSDK_OFFSET(0x1DABC230)
#define PATHCREATION_EXAMPLES_PATHSPAWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DABC3F0)

namespace PathCreation::Examples
{
	inline static constexpr unsigned int PathSpawner_TypeDefinitionIndex = 37466;

	class PathSpawner : public ::UnityEngine::MonoBehaviour
	{
	public:
		::PathCreation::PathCreator* pathPrefab; // 0x18
		::PathCreation::Examples::PathFollower* followerPrefab; // 0x20
		::Il2CppArray<::UnityEngine::Transform*>* spawnPoints; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_PATHSPAWNER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_PATHSPAWNER_START_OFFSET))(this);
		}
	};
}
