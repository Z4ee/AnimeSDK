#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace PathCreation { class PathCreator; }
namespace PathCreation::Examples { class PathFollower; }
namespace UnityEngine { class Transform; }

#define PATHCREATION_EXAMPLES_PATHSPAWNER_START_OFFSET UNITYSDK_OFFSET(0x1B6B91B0)
#define PATHCREATION_EXAMPLES_PATHSPAWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6B9370)

namespace PathCreation::Examples
{
	inline static constexpr unsigned int PathSpawner_TypeDefinitionIndex = 35858;

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
