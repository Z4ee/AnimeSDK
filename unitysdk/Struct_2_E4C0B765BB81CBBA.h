#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5C05B865B0E3235A_2.h"
#include "unitysdk/Struct_2_984AA94FB23486F9_2.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STRUCT_2_E4C0B765BB81CBBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AE7140)
#define STRUCT_2_E4C0B765BB81CBBA_EXECUTE_OFFSET UNITYSDK_OFFSET(0x3AE7150)
#define STRUCT_2_E4C0B765BB81CBBA_METHOD_2_86B7446F35DAA9F7_OFFSET UNITYSDK_OFFSET(0x3AE7130)

inline static constexpr unsigned int Struct_2_E4C0B765BB81CBBA_TypeDefinitionIndex = 71047;

struct alignas(8) Struct_2_E4C0B765BB81CBBA
{
	// static const ::System::Int32 IGCLEBENFLJ = 0x10; // 0x0
	::Unity::Collections::NativeArray_1<::Struct_2_984AA94FB23486F9_2> CFKLAGBPLHC; // 0x10
	::Unity::Collections::NativeArray_1<::Struct_2_5C05B865B0E3235A_2> NMLLPDBFLHN; // 0x20
	::System::Int32 MHBLAKKMAFK; // 0x30

	::System::Void Method_2_86B7446F35DAA9F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E4C0B765BB81CBBA_METHOD_2_86B7446F35DAA9F7_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E4C0B765BB81CBBA_DISPOSE_OFFSET))(this);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_E4C0B765BB81CBBA_EXECUTE_OFFSET))(this, a1);
	}
};
