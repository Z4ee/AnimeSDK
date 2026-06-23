#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESFILTER_REMOVECONFLICTPROBES_OFFSET UNITYSDK_OFFSET(0x1E890390)
#define LIGHTINGTOOLS_LIGHTPROBESVOLUMES_LIGHTPROBESFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8903A0)

namespace LightingTools::LightProbesVolumes
{
	inline static constexpr unsigned int LightProbesFilter_TypeDefinitionIndex = 90511;

	class LightProbesFilter : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* probePositions; // 0x10
		::UnityEngine::Vector3 filterStep; // 0x18
		::UnityEngine::Bounds bounds; // 0x24
		::UnityEngine::Vector3 conflicedRange; // 0x3C

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
