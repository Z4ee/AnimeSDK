#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define SIRENIX_UTILITIES_PROJECTPATHFINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2611A0)

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int ProjectPathFinder_TypeDefinitionIndex = 6509;

	class ProjectPathFinder : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_UTILITIES_PROJECTPATHFINDER__CTOR_OFFSET))(this);
		}
	};
}
