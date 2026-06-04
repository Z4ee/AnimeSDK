#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI2/ClusterMeshLodInfo.h"
#include "unitysdk/IRIClusterBuilder/IRIMeshClusterItem.h"

#define IRICLUSTERBUILDER_IRIMESHCLUSTERITEMRUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x142365E0)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRIMeshClusterItemRuntime_TypeDefinitionIndex = 45067;

	class IRIMeshClusterItemRuntime : public ::IRIClusterBuilder::IRIMeshClusterItem
	{
	public:
		::IRI2::ClusterMeshLodInfo Mesh; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERITEMRUNTIME__CTOR_OFFSET))(this);
		}
	};
}
