#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraExternalValueType.h"
#include "unitysdk/PipelineCamera/ExternalValueTupleSlot.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define PIPELINECAMERA_CAMERAEXTERNALVALUECOLLECTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x970CB0)
#define PIPELINECAMERA_CAMERAEXTERNALVALUECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x970D30)

namespace PipelineCamera
{
	inline static constexpr unsigned int CameraExternalValueCollection_TypeDefinitionIndex = 35911;

	struct alignas(8) CameraExternalValueCollection
	{
		::Unity::Collections::NativeArray_1<::PipelineCamera::ExternalValueTupleSlot> _metaData; // 0x10
		::System::Byte* _buffer; // 0x20
		::Unity::Collections::Allocator _allocator; // 0x28

		::System::Void _ctor(::Il2CppArray<::PipelineCamera::ExternalValueTupleSlot>* metaData, ::System::Int32 alignment, ::System::Int32 length, ::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::PipelineCamera::ExternalValueTupleSlot>*, ::System::Int32, ::System::Int32, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERAEXTERNALVALUECOLLECTION__CTOR_OFFSET))(this, metaData, alignment, length, allocator);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERAEXTERNALVALUECOLLECTION_DISPOSE_OFFSET))(this);
		}
	};
}
