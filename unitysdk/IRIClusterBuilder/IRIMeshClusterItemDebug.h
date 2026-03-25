#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRIClusterBuilder/IRIMeshClusterItem.h"

namespace IRIClusterBuilder { class IRIMeshClusterItemDebug_MeshletBounds; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define IRICLUSTERBUILDER_IRIMESHCLUSTERITEMDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x111D4DE0)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRIMeshClusterItemDebug_TypeDefinitionIndex = 38626;

	class IRIMeshClusterItemDebug : public ::IRIClusterBuilder::IRIMeshClusterItem
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* meshClusters; // 0x18
		::System::Collections::Generic::List_1<::IRIClusterBuilder::IRIMeshClusterItemDebug_MeshletBounds*>* boundsList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERITEMDEBUG__CTOR_OFFSET))(this);
		}
	};
}
