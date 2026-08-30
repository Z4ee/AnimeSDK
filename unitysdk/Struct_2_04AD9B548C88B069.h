#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_04AD9B548C88B069__CTOR_OFFSET UNITYSDK_OFFSET(0x2E50B00)

inline static constexpr unsigned int Struct_2_04AD9B548C88B069_TypeDefinitionIndex = 36202;

struct alignas(8) Struct_2_04AD9B548C88B069
{
	::System::ReadOnlyMemory_1<::System::Byte> DKEJNELHLKI; // 0x10

	::System::Void _ctor(::System::ReadOnlyMemory_1<::System::Byte> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ReadOnlyMemory_1<::System::Byte>))((::PBYTE)hIl2Cpp + STRUCT_2_04AD9B548C88B069__CTOR_OFFSET))(this, a1);
	}
};
