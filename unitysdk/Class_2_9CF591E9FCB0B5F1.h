#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_48F4A404A08692BE_107.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_799.h"

class Class_0_16E4307DCC419505_7;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_9CF591E9FCB0B5F1_METHOD_2_53FE892627AC684D_OFFSET UNITYSDK_OFFSET(0x17CB25B0)
#define CLASS_2_9CF591E9FCB0B5F1_METHOD_2_B316DB231BD15E48_OFFSET UNITYSDK_OFFSET(0x17CB2560)
#define CLASS_2_9CF591E9FCB0B5F1__CTOR_OFFSET UNITYSDK_OFFSET(0x17CB2150)

inline static constexpr unsigned int Class_2_9CF591E9FCB0B5F1_TypeDefinitionIndex = 11924;

class Class_2_9CF591E9FCB0B5F1 : public ::Class_1_48F4A404A08692BE_107
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_1; // 0x38
	::Il2CppArray<::System::UInt64>* Field_2_2; // 0x40
	::System::Single Field_2_0; // 0x48
	::System::Single Field_2_6; // 0x4C
	::System::Single Field_2_7; // 0x50

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_799 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_799, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_9CF591E9FCB0B5F1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_53FE892627AC684D(::Il2CppArray<::System::UInt64>* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::UInt64>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9CF591E9FCB0B5F1_METHOD_2_53FE892627AC684D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B316DB231BD15E48(::Il2CppArray<::System::UInt64>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt64>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9CF591E9FCB0B5F1_METHOD_2_B316DB231BD15E48_OFFSET))(this, a1, a2);
	}
};
