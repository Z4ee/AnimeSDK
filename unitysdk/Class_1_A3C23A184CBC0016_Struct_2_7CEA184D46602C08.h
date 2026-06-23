#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_A3C23A184CBC0016;
class Class_1_B9D6E7E76075C6E2_2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
template <typename T> class Class_2_FB50CDBDDEDBBCC8_1;

#define CLASS_1_A3C23A184CBC0016_STRUCT_2_7CEA184D46602C08_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x623CC0)
#define CLASS_1_A3C23A184CBC0016_STRUCT_2_7CEA184D46602C08_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5B0AE0)

inline static constexpr unsigned int Class_1_A3C23A184CBC0016_Struct_2_7CEA184D46602C08_TypeDefinitionIndex = 49487;

struct alignas(8) Class_1_A3C23A184CBC0016_Struct_2_7CEA184D46602C08
{
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_3; // 0x10
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Class_2_FB50CDBDDEDBBCC8_1<::Class_1_B9D6E7E76075C6E2_2*>*> Field_2_1; // 0x18
	::System::Runtime::CompilerServices::TaskAwaiter_1<::Class_2_FB50CDBDDEDBBCC8_1<::Class_1_B9D6E7E76075C6E2_2*>*> Field_2_4; // 0x30
	::Class_1_A3C23A184CBC0016* Field_2_2; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A3C23A184CBC0016_STRUCT_2_7CEA184D46602C08_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_A3C23A184CBC0016_STRUCT_2_7CEA184D46602C08_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
