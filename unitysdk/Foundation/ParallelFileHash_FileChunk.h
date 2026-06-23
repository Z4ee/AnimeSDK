#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { class ParallelFileHash_Task; }

#define FOUNDATION_PARALLELFILEHASH_FILECHUNK__CTOR_OFFSET UNITYSDK_OFFSET(0x871300)

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileHash_FileChunk_TypeDefinitionIndex = 74583;

	struct alignas(8) ParallelFileHash_FileChunk
	{
		::Il2CppArray<::System::Byte>* Data; // 0x10
		::Foundation::ParallelFileHash_Task* taskInfo; // 0x18
		::System::Boolean IsEnd; // 0x20
		::System::Int32 DataLength; // 0x24

		::System::Void _ctor(::System::Int32 chunkSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_FILECHUNK__CTOR_OFFSET))(this, chunkSize);
		}
	};
}
