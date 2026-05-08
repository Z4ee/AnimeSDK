#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_DATAORIENTATED_COMPONENTDATAHEADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9404E0)
#define PIPELINECAMERA_DATAORIENTATED_COMPONENTDATAHEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x39EDC0)

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ComponentDataHeader_TypeDefinitionIndex = 36124;

	struct alignas(8) ComponentDataHeader
	{
		::System::Int64 _typeHash; // 0x10
		::System::Int32 _offset; // 0x18

		::System::Void _ctor(::System::Int64 typeHash, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_COMPONENTDATAHEADER__CTOR_OFFSET))(this, typeHash, offset);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_DATAORIENTATED_COMPONENTDATAHEADER_DISPOSE_OFFSET))(this);
		}
	};
}
