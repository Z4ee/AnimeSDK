#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_MoveReason.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MONOUITABLESCROLLV2_MOVECONTEXT_GETCOPYWITHMODIFIEDDELTA_OFFSET UNITYSDK_OFFSET(0x67DCE0)
#define MONOUITABLESCROLLV2_MOVECONTEXT_GET_NEEDUPDATESCROLL_OFFSET UNITYSDK_OFFSET(0x67DC70)
#define MONOUITABLESCROLLV2_MOVECONTEXT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x67DD70)
#define MONOUITABLESCROLLV2_MOVECONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x67DCD0)
#define MONOUITABLESCROLLV2_MOVECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x67DCC0)
#define MONOUITABLESCROLLV2_MOVECONTEXT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x67DD80)

inline static constexpr unsigned int MonoUITableScrollV2_MoveContext_TypeDefinitionIndex = 69887;

struct alignas(4) MonoUITableScrollV2_MoveContext
{
	::MonoUITableScrollV2_MoveReason moveReason; // 0x10
	::System::Single delta; // 0x14
	::System::Boolean forLoop; // 0x18

	::System::Void _ctor(::System::Single delta, ::MonoUITableScrollV2_MoveReason moveReason)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MonoUITableScrollV2_MoveReason))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_MOVECONTEXT__CTOR_OFFSET))(this, delta, moveReason);
	}

	::System::Void _ctor_1(::System::Single delta, ::MonoUITableScrollV2_MoveReason moveReason, ::System::Boolean forLoop)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MonoUITableScrollV2_MoveReason, ::System::Boolean))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_MOVECONTEXT__CTOR_1_OFFSET))(this, delta, moveReason, forLoop);
	}

	::System::Boolean get_needUpdateScroll()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_MOVECONTEXT_GET_NEEDUPDATESCROLL_OFFSET))(this);
	}

	::MonoUITableScrollV2_MoveContext GetCopyWithModifiedDelta(::System::Single delta)
	{
		return ((::MonoUITableScrollV2_MoveContext(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_MOVECONTEXT_GETCOPYWITHMODIFIEDDELTA_OFFSET))(this, delta);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_MOVECONTEXT_TOSTRING_OFFSET))(this);
	}

	::System::String* __base_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_MOVECONTEXT___BASE_TOSTRING_OFFSET))(this);
	}
};
