#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_EXTERNALVALUETUPLESLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x8339C0)

namespace PipelineCamera
{
	inline static constexpr unsigned int ExternalValueTupleSlot_TypeDefinitionIndex = 38179;

	struct alignas(8) ExternalValueTupleSlot
	{
		::System::Int64 _typeHandle; // 0x10
		::System::Int32 _fieldOffset; // 0x18
		::System::Byte _isNull; // 0x1C

		::System::Void _ctor(::System::Int64 typeHash, ::System::Int32 fieldOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + PIPELINECAMERA_EXTERNALVALUETUPLESLOT__CTOR_OFFSET))(this, typeHash, fieldOffset);
		}
	};
}
