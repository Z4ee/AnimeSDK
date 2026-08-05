#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_627A5A7833BA1936_1;
class Class_1_A87FFF019D7ECE3D;
class Class_1_B9D6E7E76075C6E2_1;
class Class_2_F45B22F3BBA809FA_2;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_2_FB50CDBDDEDBBCC8_1;

#define CLASS_1_A87FFF019D7ECE3D_STRUCT_2_6623E0D4848EBFDE_3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E1AF0)
#define CLASS_1_A87FFF019D7ECE3D_STRUCT_2_6623E0D4848EBFDE_3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x52B5E0)

inline static constexpr unsigned int Class_1_A87FFF019D7ECE3D_Struct_2_6623E0D4848EBFDE_3_TypeDefinitionIndex = 49085;

struct alignas(8) Class_1_A87FFF019D7ECE3D_Struct_2_6623E0D4848EBFDE_3
{
	::Class_1_A87FFF019D7ECE3D* Field_2_0; // 0x10
	::Class_2_F45B22F3BBA809FA_2* Field_2_7; // 0x18
	::System::Runtime::CompilerServices::TaskAwaiter_1<::Class_1_627A5A7833BA1936_1*> Field_2_6; // 0x20
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Class_2_FB50CDBDDEDBBCC8_1<::Class_1_B9D6E7E76075C6E2_1*>*> Field_2_1; // 0x28
	::System::Int32 Field_2_2; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A87FFF019D7ECE3D_STRUCT_2_6623E0D4848EBFDE_3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_A87FFF019D7ECE3D_STRUCT_2_6623E0D4848EBFDE_3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
