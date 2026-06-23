#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading { class ReaderWriterLockSlim; }

#define FOUNDATION_WRITESLIMLOCKSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4CE50)
#define FOUNDATION_WRITESLIMLOCKSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0xA4CE00)

namespace Foundation
{
	inline static constexpr unsigned int WriteSlimLockScope_TypeDefinitionIndex = 8134;

	struct alignas(8) WriteSlimLockScope
	{
		::System::Threading::ReaderWriterLockSlim* _lock; // 0x10

		::System::Void _ctor(::System::Threading::ReaderWriterLockSlim* lockSlim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ReaderWriterLockSlim*))((::PBYTE)hIl2Cpp + FOUNDATION_WRITESLIMLOCKSCOPE__CTOR_OFFSET))(this, lockSlim);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_WRITESLIMLOCKSCOPE_DISPOSE_OFFSET))(this);
		}
	};
}
