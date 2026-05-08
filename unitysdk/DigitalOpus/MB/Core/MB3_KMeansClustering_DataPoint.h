#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_DATAPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C11DEC0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_KMeansClustering_DataPoint_TypeDefinitionIndex = 85046;

	class MB3_KMeansClustering_DataPoint : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* gameObject; // 0x10
		::UnityEngine::Vector3 center; // 0x18
		::System::Int32 Cluster; // 0x24

		::System::Void _ctor(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_DATAPOINT__CTOR_OFFSET))(this, go);
		}
	};
}
