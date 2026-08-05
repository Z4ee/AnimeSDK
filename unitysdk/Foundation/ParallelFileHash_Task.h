#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ParallelFileHash_FileChunk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class IFileHashTask; }
namespace Foundation { class IHashUpdater; }
namespace System { class Exception; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }

#define FOUNDATION_PARALLELFILEHASH_TASK__CTOR_OFFSET UNITYSDK_OFFSET(0x113ED850)

namespace Foundation
{
	inline static constexpr unsigned int ParallelFileHash_Task_TypeDefinitionIndex = 87356;

	class ParallelFileHash_Task : public ::System::Object
	{
	public:
		::System::Collections::Concurrent::ConcurrentQueue_1<::Foundation::ParallelFileHash_FileChunk>* chunksQueue; // 0x10
		::Foundation::IHashUpdater* Hasher; // 0x18
		::Foundation::IFileHashTask* File; // 0x20
		::System::Exception* exception; // 0x28
		::System::Boolean isDone; // 0x30
		::System::Boolean isSuccess; // 0x31
		::System::UInt64 Hash; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_PARALLELFILEHASH_TASK__CTOR_OFFSET))(this);
		}
	};
}
