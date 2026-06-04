#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AB59325E10A9B5C4_Struct_2_87E5E80057022BD4.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define STRUCT_2_AB59325E10A9B5C4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7ED50)
#define STRUCT_2_AB59325E10A9B5C4_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7ED60)
#define STRUCT_2_AB59325E10A9B5C4_METHOD_2_0DEA6219CF6E8304_OFFSET UNITYSDK_OFFSET(0x7EDC0)
#define STRUCT_2_AB59325E10A9B5C4_METHOD_2_49FD0D58B65DE375_OFFSET UNITYSDK_OFFSET(0x7EDB0)
#define STRUCT_2_AB59325E10A9B5C4_METHOD_2_85E059D0485AE5A4_OFFSET UNITYSDK_OFFSET(0x7EDA0)
#define STRUCT_2_AB59325E10A9B5C4_METHOD_2_AD36E378507B7451_OFFSET UNITYSDK_OFFSET(0x7ED40)
#define STRUCT_2_AB59325E10A9B5C4_METHOD_2_D8863F66DAA24590_OFFSET UNITYSDK_OFFSET(0x7ED70)

inline static constexpr unsigned int Struct_2_AB59325E10A9B5C4_TypeDefinitionIndex = 66432;

struct alignas(8) Struct_2_AB59325E10A9B5C4
{
	::Unity::Collections::NativeArray_1<::Struct_2_AB59325E10A9B5C4_Struct_2_87E5E80057022BD4> Field_2_0; // 0x10

	::System::Void Method_2_AD36E378507B7451()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AB59325E10A9B5C4_METHOD_2_AD36E378507B7451_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AB59325E10A9B5C4_DISPOSE_OFFSET))(this);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_AB59325E10A9B5C4_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8863F66DAA24590(::Struct_2_AB59325E10A9B5C4_Struct_2_87E5E80057022BD4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_AB59325E10A9B5C4_Struct_2_87E5E80057022BD4))((::PBYTE)hIl2Cpp + STRUCT_2_AB59325E10A9B5C4_METHOD_2_D8863F66DAA24590_OFFSET))(this, a1);
	}

	::System::Void Method_2_85E059D0485AE5A4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_AB59325E10A9B5C4_METHOD_2_85E059D0485AE5A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_49FD0D58B65DE375(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_AB59325E10A9B5C4_METHOD_2_49FD0D58B65DE375_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_0DEA6219CF6E8304(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_AB59325E10A9B5C4_METHOD_2_0DEA6219CF6E8304_OFFSET))(this, a1);
	}
};
