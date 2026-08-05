#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_STATEMACHINE_LAYERMETADATA_GET_ANYTRANSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x41E970)
#define FOUNDATION_STATEMACHINE_LAYERMETADATA_GET_ANYTRANSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x3F8490)

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int LayerMetadata_TypeDefinitionIndex = 8710;

	struct alignas(2) LayerMetadata
	{
		::System::UInt16 _anyTransitionIndex; // 0x10
		::System::Byte _anyTransitionCount; // 0x12

		::System::UInt16 get_AnyTransitionIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_LAYERMETADATA_GET_ANYTRANSITIONINDEX_OFFSET))(this);
		}

		::System::Byte get_AnyTransitionCount()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STATEMACHINE_LAYERMETADATA_GET_ANYTRANSITIONCOUNT_OFFSET))(this);
		}
	};
}
