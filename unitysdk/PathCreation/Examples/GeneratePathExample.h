#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define PATHCREATION_EXAMPLES_GENERATEPATHEXAMPLE_START_OFFSET UNITYSDK_OFFSET(0x1EEB0680)
#define PATHCREATION_EXAMPLES_GENERATEPATHEXAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEB07F0)

namespace PathCreation::Examples
{
	inline static constexpr unsigned int GeneratePathExample_TypeDefinitionIndex = 38119;

	class GeneratePathExample : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean closedLoop; // 0x18
		::Il2CppArray<::UnityEngine::Transform*>* waypoints; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_GENERATEPATHEXAMPLE__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PATHCREATION_EXAMPLES_GENERATEPATHEXAMPLE_START_OFFSET))(this);
		}
	};
}
