#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_627A5A7833BA1936;
class Class_1_A3C23A184CBC0016;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_A3C23A184CBC0016_STRUCT_2_8EF2452677E7FE8A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x67AA50)
#define CLASS_1_A3C23A184CBC0016_STRUCT_2_8EF2452677E7FE8A_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x3891F0)

inline static constexpr unsigned int Class_1_A3C23A184CBC0016_Struct_2_8EF2452677E7FE8A_TypeDefinitionIndex = 49486;

struct alignas(8) Class_1_A3C23A184CBC0016_Struct_2_8EF2452677E7FE8A
{
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Class_1_627A5A7833BA1936*> Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Field_2_3; // 0x28
	::Class_1_A3C23A184CBC0016* Field_2_2; // 0x30
	::System::Runtime::CompilerServices::TaskAwaiter_1<::Class_1_627A5A7833BA1936*> Field_2_4; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C23A184CBC0016_STRUCT_2_8EF2452677E7FE8A_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_A3C23A184CBC0016_STRUCT_2_8EF2452677E7FE8A_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
