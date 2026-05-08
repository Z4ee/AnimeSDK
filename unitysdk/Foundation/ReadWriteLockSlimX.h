#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace System::Threading { class ReaderWriterLockSlim; }

#define FOUNDATION_READWRITELOCKSLIMX_PERFORMUSINGREADLOCK_OFFSET UNITYSDK_OFFSET(0x1C00F8B0)
#define FOUNDATION_READWRITELOCKSLIMX_PERFORMUSINGUPGRADEABLEREADLOCK_OFFSET UNITYSDK_OFFSET(0x1C00FAD0)
#define FOUNDATION_READWRITELOCKSLIMX_PERFORMUSINGWRITELOCK_OFFSET UNITYSDK_OFFSET(0x1C00F9C0)

namespace Foundation
{
	inline static constexpr unsigned int ReadWriteLockSlimX_TypeDefinitionIndex = 7964;

	class ReadWriteLockSlimX : public ::System::Object
	{
	public:
		static ::System::Void PerformUsingReadLock(::System::Threading::ReaderWriterLockSlim* readerWriterLockSlim, ::System::Action* action)
		{
			return ((::System::Void(*)(::System::Threading::ReaderWriterLockSlim*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_READWRITELOCKSLIMX_PERFORMUSINGREADLOCK_OFFSET))(readerWriterLockSlim, action);
		}

		static ::System::Void PerformUsingWriteLock(::System::Threading::ReaderWriterLockSlim* readerWriterLockSlim, ::System::Action* action)
		{
			return ((::System::Void(*)(::System::Threading::ReaderWriterLockSlim*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_READWRITELOCKSLIMX_PERFORMUSINGWRITELOCK_OFFSET))(readerWriterLockSlim, action);
		}

		static ::System::Void PerformUsingUpgradeableReadLock(::System::Threading::ReaderWriterLockSlim* readerWriterLockSlim, ::System::Action* action)
		{
			return ((::System::Void(*)(::System::Threading::ReaderWriterLockSlim*, ::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_READWRITELOCKSLIMX_PERFORMUSINGUPGRADEABLEREADLOCK_OFFSET))(readerWriterLockSlim, action);
		}
	};
}
