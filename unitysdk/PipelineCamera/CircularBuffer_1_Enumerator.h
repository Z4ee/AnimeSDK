#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera { template <typename T> class CircularBuffer_1; }
namespace System { class Object; }

namespace PipelineCamera
{
	inline static constexpr unsigned int CircularBuffer_1_Enumerator_TypeDefinitionIndex = 37639;

	template <typename T>
	struct CircularBuffer_1_Enumerator
	{
		::PipelineCamera::CircularBuffer_1<T>* _buffer; // 0x0
		::System::Int32 _nextIndex; // 0x0
		T _current; // 0x0
		::System::Int32 _version; // 0x0
	};
}
