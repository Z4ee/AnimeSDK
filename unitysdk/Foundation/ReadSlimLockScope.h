#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading { class ReaderWriterLockSlim; }

#define FOUNDATION_READSLIMLOCKSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9AA5D0)
#define FOUNDATION_READSLIMLOCKSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x9AA580)

namespace Foundation
{
	inline static constexpr unsigned int ReadSlimLockScope_TypeDefinitionIndex = 7784;

	struct alignas(8) ReadSlimLockScope
	{
		::System::Threading::ReaderWriterLockSlim* _lock; // 0x10

		::System::Void _ctor(::System::Threading::ReaderWriterLockSlim* lockSlim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ReaderWriterLockSlim*))((::PBYTE)hIl2Cpp + FOUNDATION_READSLIMLOCKSCOPE__CTOR_OFFSET))(this, lockSlim);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_READSLIMLOCKSCOPE_DISPOSE_OFFSET))(this);
		}
	};
}
