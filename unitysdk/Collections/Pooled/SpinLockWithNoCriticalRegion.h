#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define COLLECTIONS_POOLED_SPINLOCKWITHNOCRITICALREGION_ENTER_OFFSET UNITYSDK_OFFSET(0x3B72330)
#define COLLECTIONS_POOLED_SPINLOCKWITHNOCRITICALREGION_EXIT_OFFSET UNITYSDK_OFFSET(0x3B72400)

namespace Collections::Pooled
{
	inline static constexpr unsigned int SpinLockWithNoCriticalRegion_TypeDefinitionIndex = 5125;

	struct alignas(4) SpinLockWithNoCriticalRegion
	{
		// static const ::System::Int32 MaxSpinTime = 0x3E8; // 0x0
		// static const ::System::Int32 MaxYieldTime = 0x3E8; // 0x0
		::System::Int32 _isRunning; // 0x10

		::System::Void Enter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_SPINLOCKWITHNOCRITICALREGION_ENTER_OFFSET))(this);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLLECTIONS_POOLED_SPINLOCKWITHNOCRITICALREGION_EXIT_OFFSET))(this);
		}
	};
}
