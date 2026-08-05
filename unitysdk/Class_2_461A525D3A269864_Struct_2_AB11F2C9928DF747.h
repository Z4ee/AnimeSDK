#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Mathematics/float3.h"

#define CLASS_2_461A525D3A269864_STRUCT_2_AB11F2C9928DF747_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7C4B50)

inline static constexpr unsigned int Class_2_461A525D3A269864_Struct_2_AB11F2C9928DF747_TypeDefinitionIndex = 72608;

struct alignas(8) Class_2_461A525D3A269864_Struct_2_AB11F2C9928DF747
{
	::Unity::Mathematics::float3 Field_2_3; // 0x10
	::System::Single Field_2_2; // 0x1C
	::System::Single Field_2_1; // 0x20
	::Unity::Collections::NativeArray_1<::System::Byte> Field_2_0; // 0x28

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_461A525D3A269864_STRUCT_2_AB11F2C9928DF747_EXECUTE_OFFSET))(this, a1);
	}
};
