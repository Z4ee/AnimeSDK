#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/DataOrientated/BitSet128.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ArchetypeComponentBitSet_1_TypeDefinitionIndex = 38392;

	template <typename TScope>
	struct ArchetypeComponentBitSet_1
	{
		::PipelineCamera::DataOrientated::BitSet128 _bitSet; // 0x0
		// static const ::System::UInt32 Capacity = 0x80; // 0x0
		static ::PipelineCamera::DataOrientated::ArchetypeComponentBitSet_1<TScope>* StaticGet_Empty()
		{
			return (::PipelineCamera::DataOrientated::ArchetypeComponentBitSet_1<TScope>*)Il2CppClass::FromTypeDefinitionIndex(ArchetypeComponentBitSet_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
