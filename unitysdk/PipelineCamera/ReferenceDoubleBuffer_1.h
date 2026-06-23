#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

namespace PipelineCamera
{
	inline static constexpr unsigned int ReferenceDoubleBuffer_1_TypeDefinitionIndex = 37647;

	template <typename T>
	class ReferenceDoubleBuffer_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* _buffer; // 0x0
		::System::Int32 _frontIndex; // 0x0
	};
}
