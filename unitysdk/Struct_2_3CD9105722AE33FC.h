#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG { template <typename T> class PoolList_1; }

#define STRUCT_2_3CD9105722AE33FC_METHOD_2_FBD073B27945E0E4_OFFSET UNITYSDK_OFFSET(0x2BCD2E0)

inline static constexpr unsigned int Struct_2_3CD9105722AE33FC_TypeDefinitionIndex = 52550;

struct alignas(4) Struct_2_3CD9105722AE33FC
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::UInt32 Field_2_2; // 0x18

	::System::Void Method_2_FBD073B27945E0E4(::RPG::PoolList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + STRUCT_2_3CD9105722AE33FC_METHOD_2_FBD073B27945E0E4_OFFSET))(this, a1);
	}
};
