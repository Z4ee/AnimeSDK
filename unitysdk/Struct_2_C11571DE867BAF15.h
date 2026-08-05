#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_115F5D066814FA71.h"
#include "unitysdk/Struct_2_115F5D066814FA71_1.h"
#include "unitysdk/Struct_2_3C5D54311FBE5AAF.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STRUCT_2_C11571DE867BAF15_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7C1740)
#define STRUCT_2_C11571DE867BAF15_METHOD_2_7CEB85D998FE3D88_OFFSET UNITYSDK_OFFSET(0x12DA06B0)

inline static constexpr unsigned int Struct_2_C11571DE867BAF15_TypeDefinitionIndex = 83283;

struct alignas(8) Struct_2_C11571DE867BAF15
{
	::Unity::Collections::NativeArray_1<::Struct_2_115F5D066814FA71_1> Field_2_1; // 0x10
	::Unity::Collections::NativeArray_1<::Struct_2_3C5D54311FBE5AAF> Field_2_0; // 0x20
	::Unity::Collections::NativeArray_1<::Struct_2_115F5D066814FA71> Field_2_7; // 0x30
	::System::Single Field_2_6; // 0x40

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_C11571DE867BAF15_EXECUTE_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_7CEB85D998FE3D88(::Struct_2_115F5D066814FA71& a1, ::Struct_2_115F5D066814FA71& a2)
	{
		return ((::System::Boolean(*)(::Struct_2_115F5D066814FA71&, ::Struct_2_115F5D066814FA71&))((::PBYTE)hIl2Cpp + STRUCT_2_C11571DE867BAF15_METHOD_2_7CEB85D998FE3D88_OFFSET))(a1, a2);
	}
};
