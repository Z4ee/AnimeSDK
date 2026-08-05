#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_627A5A7833BA1936_1;
class Class_1_A87FFF019D7ECE3D;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_A87FFF019D7ECE3D_STRUCT_2_8DB5A95F177A3DAD_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6CCE70)
#define CLASS_1_A87FFF019D7ECE3D_STRUCT_2_8DB5A95F177A3DAD_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x59F4E0)

inline static constexpr unsigned int Class_1_A87FFF019D7ECE3D_Struct_2_8DB5A95F177A3DAD_TypeDefinitionIndex = 49088;

struct alignas(8) Class_1_A87FFF019D7ECE3D_Struct_2_8DB5A95F177A3DAD
{
	::Class_1_A87FFF019D7ECE3D* Field_2_1; // 0x10
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Class_1_627A5A7833BA1936_1*> Field_2_2; // 0x18
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> Field_2_0; // 0x30
	::System::Int32 Field_2_3; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A87FFF019D7ECE3D_STRUCT_2_8DB5A95F177A3DAD_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_A87FFF019D7ECE3D_STRUCT_2_8DB5A95F177A3DAD_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
