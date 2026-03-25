#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define IRICLUSTERBUILDER_IRIMESHCLUSTERITEMDEBUG_MESHLETBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x111D4E60)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRIMeshClusterItemDebug_MeshletBounds_TypeDefinitionIndex = 38627;

	class IRIMeshClusterItemDebug_MeshletBounds : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 center; // 0x10
		::System::Single radius; // 0x1C
		::UnityEngine::Vector3 cone_apex; // 0x20
		::UnityEngine::Vector3 cone_axis; // 0x2C
		::System::Single cone_cutoff; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERITEMDEBUG_MESHLETBOUNDS__CTOR_OFFSET))(this);
		}
	};
}
