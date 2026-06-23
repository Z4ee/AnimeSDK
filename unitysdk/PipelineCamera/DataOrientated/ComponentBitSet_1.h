#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/DataOrientated/BitSet256.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ComponentBitSet_1_TypeDefinitionIndex = 37728;

	template <typename TScope>
	struct ComponentBitSet_1
	{
		::PipelineCamera::DataOrientated::BitSet256 _bitSet; // 0x0
		// static const ::System::UInt32 Capacity = 0x100; // 0x0
		static ::PipelineCamera::DataOrientated::ComponentBitSet_1<TScope>* StaticGet_Empty()
		{
			return (::PipelineCamera::DataOrientated::ComponentBitSet_1<TScope>*)Il2CppClass::FromTypeDefinitionIndex(ComponentBitSet_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
