#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Chunk
{
	inline static constexpr unsigned int ReadOnlySpan2D_1_TypeDefinitionIndex = 8412;

	template <typename T>
	struct ReadOnlySpan2D_1
	{
		::System::ReadOnlySpan_1<T> _data; // 0x0
		::System::Int32 _dimension; // 0x0
		::System::Int32 _length; // 0x0
	};
}
