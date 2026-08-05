#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_DATAPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F889F40)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_KMeansClustering_DataPoint_TypeDefinitionIndex = 94553;

	class MB3_KMeansClustering_DataPoint : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* gameObject; // 0x10
		::System::Int32 Cluster; // 0x18
		::UnityEngine::Vector3 center; // 0x1C

		::System::Void _ctor(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_DATAPOINT__CTOR_OFFSET))(this, go);
		}
	};
}
