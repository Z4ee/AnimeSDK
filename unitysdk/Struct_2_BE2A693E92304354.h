#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG { template <typename T> class PoolList_1; }

#define STRUCT_2_BE2A693E92304354_METHOD_2_A05ED7CF7BEAA31D_OFFSET UNITYSDK_OFFSET(0xCD4F0)

inline static constexpr unsigned int Struct_2_BE2A693E92304354_TypeDefinitionIndex = 51876;

struct alignas(4) Struct_2_BE2A693E92304354
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::UInt32 Field_2_2; // 0x18

	::System::Void Method_2_A05ED7CF7BEAA31D(::RPG::PoolList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + STRUCT_2_BE2A693E92304354_METHOD_2_A05ED7CF7BEAA31D_OFFSET))(this, a1);
	}
};
