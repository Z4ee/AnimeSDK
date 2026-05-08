#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_6740168B11ECBECF;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_6740168B11ECBECF_STRUCT_2_D3DC67B7E785B4A4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7137C0)
#define CLASS_1_6740168B11ECBECF_STRUCT_2_D3DC67B7E785B4A4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6069D0)

inline static constexpr unsigned int Class_1_6740168B11ECBECF_Struct_2_D3DC67B7E785B4A4_TypeDefinitionIndex = 42976;

struct alignas(8) Class_1_6740168B11ECBECF_Struct_2_D3DC67B7E785B4A4
{
	::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Field_2_1; // 0x10
	::Class_1_6740168B11ECBECF* Field_2_2; // 0x30
	::System::Int32 Field_2_0; // 0x38
	::System::Boolean Field_2_3; // 0x3C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6740168B11ECBECF_STRUCT_2_D3DC67B7E785B4A4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_6740168B11ECBECF_STRUCT_2_D3DC67B7E785B4A4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
