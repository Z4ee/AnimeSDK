#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_DATAORIENTATED_COMPONENTMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x355940)

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ComponentMetaData_TypeDefinitionIndex = 38401;

	struct alignas(8) ComponentMetaData
	{
		::System::Int64 TypeHash; // 0x10
		::System::Int32 TypeSize; // 0x18
		::System::Int32 TypeAlignment; // 0x1C

		::System::Void _ctor(::System::Int64 typeHash, ::System::Int32 typeSize, ::System::Int32 typeAlignment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_COMPONENTMETADATA__CTOR_OFFSET))(this, typeHash, typeSize, typeAlignment);
		}
	};
}
