#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraExternalValueType.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections { class BitArray; }

#define PIPELINECAMERA_DETAIL_EXTERNALVALUECOUNTER_DECREMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9D1BC0)
#define PIPELINECAMERA_DETAIL_EXTERNALVALUECOUNTER_GET_COUNTER_OFFSET UNITYSDK_OFFSET(0x9D1BD0)
#define PIPELINECAMERA_DETAIL_EXTERNALVALUECOUNTER_GET_MASK_OFFSET UNITYSDK_OFFSET(0x9D1CB0)
#define PIPELINECAMERA_DETAIL_EXTERNALVALUECOUNTER_INCREMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9D1BB0)

namespace PipelineCamera::Detail
{
	inline static constexpr unsigned int ExternalValueCounter_TypeDefinitionIndex = 38695;

	struct alignas(8) ExternalValueCounter
	{
		::Il2CppArray<::System::Int32>* _counter; // 0x10
		::System::Collections::BitArray* _mask; // 0x18

		::System::Void IncrementCount(::PipelineCamera::CameraExternalValueType valueType)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraExternalValueType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DETAIL_EXTERNALVALUECOUNTER_INCREMENTCOUNT_OFFSET))(this, valueType);
		}

		::System::Void DecrementCount(::PipelineCamera::CameraExternalValueType valueType)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraExternalValueType))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DETAIL_EXTERNALVALUECOUNTER_DECREMENTCOUNT_OFFSET))(this, valueType);
		}

		::Il2CppArray<::System::Int32>* get_Counter()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DETAIL_EXTERNALVALUECOUNTER_GET_COUNTER_OFFSET))(this);
		}

		::System::Collections::BitArray* get_Mask()
		{
			return ((::System::Collections::BitArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DETAIL_EXTERNALVALUECOUNTER_GET_MASK_OFFSET))(this);
		}
	};
}
