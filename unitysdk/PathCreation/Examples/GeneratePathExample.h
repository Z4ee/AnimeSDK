#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define PATHCREATION_EXAMPLES_GENERATEPATHEXAMPLE_START_OFFSET UNITYSDK_OFFSET(0x1B6B8570)
#define PATHCREATION_EXAMPLES_GENERATEPATHEXAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6B86E0)

namespace PathCreation::Examples
{
	inline static constexpr unsigned int GeneratePathExample_TypeDefinitionIndex = 35850;

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
