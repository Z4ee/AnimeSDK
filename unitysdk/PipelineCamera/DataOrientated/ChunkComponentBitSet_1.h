#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/DataOrientated/BitSet128.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ChunkComponentBitSet_1_TypeDefinitionIndex = 38391;

	template <typename TScope>
	struct ChunkComponentBitSet_1
	{
		::PipelineCamera::DataOrientated::BitSet128 _bitSet; // 0x0
		// static const ::System::UInt32 Capacity = 0x80; // 0x0
		static ::PipelineCamera::DataOrientated::ChunkComponentBitSet_1<TScope>* StaticGet_Empty()
		{
			return (::PipelineCamera::DataOrientated::ChunkComponentBitSet_1<TScope>*)Il2CppClass::FromTypeDefinitionIndex(ChunkComponentBitSet_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
