#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BCD429A58B158433.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_54070F979C337FAA_METHOD_1_A08DEEEE1A01931E_OFFSET UNITYSDK_OFFSET(0x12489610)
#define CLASS_1_54070F979C337FAA__CTOR_OFFSET UNITYSDK_OFFSET(0x12489600)

inline static constexpr unsigned int Class_1_54070F979C337FAA_TypeDefinitionIndex = 82706;

class Class_1_54070F979C337FAA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_BCD429A58B158433>* Field_1_1; // 0x10
	::Struct_2_BCD429A58B158433 Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54070F979C337FAA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A08DEEEE1A01931E(::Struct_2_BCD429A58B158433 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BCD429A58B158433))((::PBYTE)hIl2Cpp + CLASS_1_54070F979C337FAA_METHOD_1_A08DEEEE1A01931E_OFFSET))(this, a1);
	}
};
