#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_A3C23A184CBC0016;
class Class_1_B37365D9009BA07B;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_2_FB50CDBDDEDBBCC8_1;

#define CLASS_1_A3C23A184CBC0016_STRUCT_2_6623E0D4848EBFDE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82D290)
#define CLASS_1_A3C23A184CBC0016_STRUCT_2_6623E0D4848EBFDE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x61A480)

inline static constexpr unsigned int Class_1_A3C23A184CBC0016_Struct_2_6623E0D4848EBFDE_TypeDefinitionIndex = 49489;

struct alignas(8) Class_1_A3C23A184CBC0016_Struct_2_6623E0D4848EBFDE
{
	::Class_1_A3C23A184CBC0016* Field_2_2; // 0x10
	::System::Runtime::CompilerServices::TaskAwaiter_1<::Class_2_FB50CDBDDEDBBCC8_1<::Class_1_B37365D9009BA07B*>*> Field_2_3; // 0x18
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Class_2_FB50CDBDDEDBBCC8_1<::Class_1_B37365D9009BA07B*>*> Field_2_1; // 0x20
	::System::Int32 Field_2_0; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C23A184CBC0016_STRUCT_2_6623E0D4848EBFDE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_A3C23A184CBC0016_STRUCT_2_6623E0D4848EBFDE_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
