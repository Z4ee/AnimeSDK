#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESFILTER_REMOVECONFLICTPROBES_OFFSET UNITYSDK_OFFSET(0x1C560540)
#define LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C560550)

namespace LightingTools::LightProbesVolumes
{
	inline static constexpr unsigned int LightProbesFilter_TypeDefinitionIndex = 84937;

	class LightProbesFilter : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* probePositions; // 0x10
		::UnityEngine::Bounds bounds; // 0x18
		::UnityEngine::Vector3 conflicedRange; // 0x30
		::UnityEngine::Vector3 filterStep; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESFILTER__CTOR_OFFSET))(this);
		}

		::System::Void RemoveConflictProbes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESFILTER_REMOVECONFLICTPROBES_OFFSET))(this);
		}
	};
}
