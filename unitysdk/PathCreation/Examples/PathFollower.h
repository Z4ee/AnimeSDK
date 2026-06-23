#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PathCreation/EndOfPathInstruction.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace PathCreation { class PathCreator; }

#define PATHCREATION_EXAMPLES_PATHFOLLOWER_ONPATHCHANGED_OFFSET UNITYSDK_OFFSET(0x1DABBDA0)
#define PATHCREATION_EXAMPLES_PATHFOLLOWER_START_OFFSET UNITYSDK_OFFSET(0x1DABB7B0)
#define PATHCREATION_EXAMPLES_PATHFOLLOWER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DABBA00)
#define PATHCREATION_EXAMPLES_PATHFOLLOWER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DABBEF0)

namespace PathCreation::Examples
{
	inline static constexpr unsigned int PathFollower_TypeDefinitionIndex = 37459;

	class PathFollower : public ::UnityEngine::MonoBehaviour
	{
	public:
		::PathCreation::PathCreator* pathCreator; // 0x18
		::PathCreation::EndOfPathInstruction endOfPathInstruction; // 0x20
		::System::Single speed; // 0x24
		::System::Single distanceTravelled; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_PATHFOLLOWER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_PATHFOLLOWER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_PATHFOLLOWER_UPDATE_OFFSET))(this);
		}

		::System::Void OnPathChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_PATHFOLLOWER_ONPATHCHANGED_OFFSET))(this);
		}
	};
}
