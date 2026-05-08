#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class MonoUITableScrollV2;

#define MONOUITABLESCROLLV2_TEMPRECYCLESCOPE_ALLOCATE_OFFSET UNITYSDK_OFFSET(0xF810980)
#define MONOUITABLESCROLLV2_TEMPRECYCLESCOPE_GET_HASPUSH_OFFSET UNITYSDK_OFFSET(0x3AB220)
#define MONOUITABLESCROLLV2_TEMPRECYCLESCOPE_SET_HASPUSH_OFFSET UNITYSDK_OFFSET(0x5783A0)
#define MONOUITABLESCROLLV2_TEMPRECYCLESCOPE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x696230)
#define MONOUITABLESCROLLV2_TEMPRECYCLESCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x696220)

inline static constexpr unsigned int MonoUITableScrollV2_TempRecycleScope_TypeDefinitionIndex = 54119;

struct alignas(8) MonoUITableScrollV2_TempRecycleScope
{
	::MonoUITableScrollV2* _owner; // 0x10
	::System::Boolean _HasPush_k__BackingField; // 0x18

	::System::Void _ctor(::MonoUITableScrollV2* owner)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPRECYCLESCOPE__CTOR_OFFSET))(this, owner);
	}

	::System::Boolean get_HasPush()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPRECYCLESCOPE_GET_HASPUSH_OFFSET))(this);
	}

	::System::Void set_HasPush(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPRECYCLESCOPE_SET_HASPUSH_OFFSET))(this, value);
	}

	static ::MonoUITableScrollV2_TempRecycleScope Allocate(::MonoUITableScrollV2* owner)
	{
		return ((::MonoUITableScrollV2_TempRecycleScope(*)(::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPRECYCLESCOPE_ALLOCATE_OFFSET))(owner);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TEMPRECYCLESCOPE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}
};
