#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI2/MeshClusterInfo.h"
#include "unitysdk/System/ValueType.h"

namespace IRI2
{
	inline static constexpr unsigned int ClusterMeshLodInfo_TypeDefinitionIndex = 47808;

	struct alignas(8) ClusterMeshLodInfo
	{
		::System::UInt64 MeshHash; // 0x10
		::Il2CppArray<::IRI2::MeshClusterInfo>* ClustersInfo; // 0x18
		::System::Single MaxDistance; // 0x20
	};
}
