#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/LockRecursionPolicy.h"
#include "unitysdk/System/TimeSpan.h"

namespace System::Threading { class ReaderWriterLockSlim; }

#define FOUNDATION_SYSTEMREADERWRITERLOCKSLIM_FOUNDATION_IREADERLOCK_ACQUIREREADERLOCK_1_OFFSET UNITYSDK_OFFSET(0x1E05AE30)
#define FOUNDATION_SYSTEMREADERWRITERLOCKSLIM_FOUNDATION_IREADERLOCK_ACQUIREREADERLOCK_OFFSET UNITYSDK_OFFSET(0x1E05ADF0)
#define FOUNDATION_SYSTEMREADERWRITERLOCKSLIM_FOUNDATION_IREADERLOCK_ISREADERLOCKHELD_OFFSET UNITYSDK_OFFSET(0x1E05AEA0)
#define FOUNDATION_SYSTEMREADERWRITERLOCKSLIM_FOUNDATION_IREADERLOCK_RELEASEREADERLOCK_OFFSET UNITYSDK_OFFSET(0x1E05AE80)
#define FOUNDATION_SYSTEMREADERWRITERLOCKSLIM_FOUNDATION_IWRITERLOCK_ACQUIREWRITERLOCK_1_OFFSET UNITYSDK_OFFSET(0x1E05AF80)
#define FOUNDATION_SYSTEMREADERWRITERLOCKSLIM_FOUNDATION_IWRITERLOCK_ACQUIREWRITERLOCK_OFFSET UNITYSDK_OFFSET(0x1E05AF40)
#define FOUNDATION_SYSTEMREADERWRITERLOCKSLIM_FOUNDATION_IWRITERLOCK_ISWRITERLOCKHELD_OFFSET UNITYSDK_OFFSET(0x1E05AFF0)
#define FOUNDATION_SYSTEMREADERWRITERLOCKSLIM_FOUNDATION_IWRITERLOCK_RELEASEWRITERLOCK_OFFSET UNITYSDK_OFFSET(0x1E05AFD0)
#define FOUNDATION_SYSTEMREADERWRITERLOCKSLIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E05AD50)

namespace Foundation
{
	inline static constexpr unsigned int SystemReaderWriterLockSlim_TypeDefinitionIndex = 8653;

	class SystemReaderWriterLockSlim : public ::System::Object
	{
	public:
		::System::Threading::ReaderWriterLockSlim* _lock; // 0x10

		::System::Void _ctor(::System::Threading::LockRecursionPolicy recursionPolicy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::LockRecursionPolicy))((::PBYTE)hIl2Cpp + FOUNDATION_SYSTEMREADERWRITERLOCKSLIM__CTOR_OFFSET))(this, recursionPolicy);
		}

		::System::Boolean Foundation_IReaderLock_AcquireReaderLock(::System::TimeSpan timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + FOUNDATION_SYSTEMREADERWRITERLOCKSLIM_FOUNDATION_IREADERLOCK_ACQUIREREADERLOCK_OFFSET))(this, timeout);
		}

		::System::Void Foundation_IReaderLock_AcquireReaderLock_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SYSTEMREADERWRITERLOCKSLIM_FOUNDATION_IREADERLOCK_ACQUIREREADERLOCK_1_OFFSET))(this);
		}

		::System::Void Foundation_IReaderLock_ReleaseReaderLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SYSTEMREADERWRITERLOCKSLIM_FOUNDATION_IREADERLOCK_RELEASEREADERLOCK_OFFSET))(this);
		}

		::System::Boolean Foundation_IReaderLock_IsReaderLockHeld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SYSTEMREADERWRITERLOCKSLIM_FOUNDATION_IREADERLOCK_ISREADERLOCKHELD_OFFSET))(this);
		}

		::System::Boolean Foundation_IWriterLock_AcquireWriterLock(::System::TimeSpan timeout)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + FOUNDATION_SYSTEMREADERWRITERLOCKSLIM_FOUNDATION_IWRITERLOCK_ACQUIREWRITERLOCK_OFFSET))(this, timeout);
		}

		::System::Void Foundation_IWriterLock_AcquireWriterLock_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SYSTEMREADERWRITERLOCKSLIM_FOUNDATION_IWRITERLOCK_ACQUIREWRITERLOCK_1_OFFSET))(this);
		}

		::System::Void Foundation_IWriterLock_ReleaseWriterLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SYSTEMREADERWRITERLOCKSLIM_FOUNDATION_IWRITERLOCK_RELEASEWRITERLOCK_OFFSET))(this);
		}

		::System::Boolean Foundation_IWriterLock_IsWriterLockHeld()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SYSTEMREADERWRITERLOCKSLIM_FOUNDATION_IWRITERLOCK_ISWRITERLOCKHELD_OFFSET))(this);
		}
	};
}
