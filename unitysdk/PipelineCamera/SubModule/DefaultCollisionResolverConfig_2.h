#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace PipelineCamera::SubModule
{
	inline static constexpr unsigned int DefaultCollisionResolverConfig_2_TypeDefinitionIndex = 38682;

	template <typename T1, typename T2>
	struct DefaultCollisionResolverConfig_2
	{
		::System::Int32 _Priority_k__BackingField; // 0x0
		::System::String* _DebugName_k__BackingField; // 0x0
		T1 _SightResolverTemplate_k__BackingField; // 0x0
		T2 _VolumeResolverTemplate_k__BackingField; // 0x0
	};
}
