#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Chunk
{
	inline static constexpr unsigned int Span2D_1_TypeDefinitionIndex = 8664;

	template <typename T>
	struct Span2D_1
	{
		::System::Span_1<T> _data; // 0x0
		::System::Int32 _dimension; // 0x0
		::System::Int32 _length; // 0x0
	};
}
