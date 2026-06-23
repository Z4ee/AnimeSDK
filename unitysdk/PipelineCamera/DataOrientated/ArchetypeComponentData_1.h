#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/DataOrientated/ArchetypeComponentBitSet_1.h"
#include "unitysdk/PipelineCamera/DataOrientated/ArchetypeComponentData_1___componentOffset_e__FixedBuffer.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ArchetypeComponentData_1_TypeDefinitionIndex = 37737;

	template <typename TScope>
	struct ArchetypeComponentData_1
	{
		// static const ::System::Int32 Capacity = 0x80; // 0x0
		::System::Void* m_Buffer; // 0x0
		::Unity::Collections::Allocator m_AllocatorLabel; // 0x0
		::PipelineCamera::DataOrientated::ArchetypeComponentBitSet_1<TScope> _bitSet; // 0x0
		::System::Int32 _bufferSize; // 0x0
		::PipelineCamera::DataOrientated::ArchetypeComponentData_1___componentOffset_e__FixedBuffer<TScope> _componentOffset; // 0x0
	};
}
