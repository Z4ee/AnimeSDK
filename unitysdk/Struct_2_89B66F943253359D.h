#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority.h"
#include "unitysdk/Struct_2_381AF865BCEEB63D.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_89B66F943253359D_GET_HASWINNINGPRIORITY_OFFSET UNITYSDK_OFFSET(0x2BC0BA0)
#define STRUCT_2_89B66F943253359D_GET_INTENT_OFFSET UNITYSDK_OFFSET(0x1409D0)
#define STRUCT_2_89B66F943253359D_GET_WINNINGPRIORITY_OFFSET UNITYSDK_OFFSET(0x63E0)
#define STRUCT_2_89B66F943253359D__CTOR_OFFSET UNITYSDK_OFFSET(0x2BC0B80)

inline static constexpr unsigned int Struct_2_89B66F943253359D_TypeDefinitionIndex = 58146;

struct alignas(4) Struct_2_89B66F943253359D
{
	::Struct_2_381AF865BCEEB63D _Intent_k__BackingField; // 0x10
	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority _WinningPriority_k__BackingField; // 0x28
	::System::Boolean _HasWinningPriority_k__BackingField; // 0x2C

	::System::Void _ctor(::Struct_2_381AF865BCEEB63D a1, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_381AF865BCEEB63D, ::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_89B66F943253359D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_381AF865BCEEB63D get_Intent()
	{
		return ((::Struct_2_381AF865BCEEB63D(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_89B66F943253359D_GET_INTENT_OFFSET))(this);
	}

	::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority get_WinningPriority()
	{
		return ((::Class_1_303D5A33D1401D59_RegionBlockVisibilityStatusPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_89B66F943253359D_GET_WINNINGPRIORITY_OFFSET))(this);
	}

	::System::Boolean get_HasWinningPriority()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_89B66F943253359D_GET_HASWINNINGPRIORITY_OFFSET))(this);
	}
};
