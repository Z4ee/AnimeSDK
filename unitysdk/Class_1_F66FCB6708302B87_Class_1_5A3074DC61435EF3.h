#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Buffers { template <typename T> class ArrayPool_1; }

#define CLASS_1_F66FCB6708302B87_CLASS_1_5A3074DC61435EF3_METHOD_1_A6EA7B899860F000_OFFSET UNITYSDK_OFFSET(0x1E3AFD20)
#define CLASS_1_F66FCB6708302B87_CLASS_1_5A3074DC61435EF3__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3AFCC0)

inline static constexpr unsigned int Class_1_F66FCB6708302B87_Class_1_5A3074DC61435EF3_TypeDefinitionIndex = 34513;

class Class_1_F66FCB6708302B87_Class_1_5A3074DC61435EF3 : public ::System::Object
{
public:
	::System::Buffers::ArrayPool_1<::System::Byte>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F66FCB6708302B87_CLASS_1_5A3074DC61435EF3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A6EA7B899860F000(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_F66FCB6708302B87_CLASS_1_5A3074DC61435EF3_METHOD_1_A6EA7B899860F000_OFFSET))(this, a1);
	}
};
