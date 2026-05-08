#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading { class ReaderWriterLock; }

#define PIPELINECAMERA_SCOPEDREADLOCK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7E7910)
#define PIPELINECAMERA_SCOPEDREADLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x7E7840)

namespace PipelineCamera
{
	inline static constexpr unsigned int ScopedReadLock_TypeDefinitionIndex = 36086;

	struct alignas(8) ScopedReadLock
	{
		::System::Threading::ReaderWriterLock* _lock; // 0x10

		/*
		::System::Void _ctor(::System::Threading::ReaderWriterLock* rwLock, ::System::TimeSpan timeSpan)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ReaderWriterLock*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SCOPEDREADLOCK__CTOR_OFFSET))(this, rwLock, timeSpan);
		}
		*/

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SCOPEDREADLOCK_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}
	};
}
