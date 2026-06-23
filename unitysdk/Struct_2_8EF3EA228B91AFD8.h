#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_3_C6F395B609880F65;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define STRUCT_2_8EF3EA228B91AFD8_METHOD_2_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0x90E8B0)
#define STRUCT_2_8EF3EA228B91AFD8_METHOD_2_28141171CE1C76E0_OFFSET UNITYSDK_OFFSET(0x90E8C0)
#define STRUCT_2_8EF3EA228B91AFD8_METHOD_2_2FBE412A27FDF837_OFFSET UNITYSDK_OFFSET(0x90E970)

inline static constexpr unsigned int Struct_2_8EF3EA228B91AFD8_TypeDefinitionIndex = 28663;

struct alignas(8) Struct_2_8EF3EA228B91AFD8
{
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_C6F395B609880F65*>* Field_2_0; // 0x10

	::System::Void Method_2_0C44FB644D25C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8EF3EA228B91AFD8_METHOD_2_0C44FB644D25C1C2_OFFSET))(this);
	}

	::System::Boolean Method_2_28141171CE1C76E0(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_8EF3EA228B91AFD8_METHOD_2_28141171CE1C76E0_OFFSET))(this, a1);
	}

	::System::Void Method_2_2FBE412A27FDF837(::Class_3_C6F395B609880F65* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C6F395B609880F65*))((::PBYTE)hIl2Cpp + STRUCT_2_8EF3EA228B91AFD8_METHOD_2_2FBE412A27FDF837_OFFSET))(this, a1);
	}
};
