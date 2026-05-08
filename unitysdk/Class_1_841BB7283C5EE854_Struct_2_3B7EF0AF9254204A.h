#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_841BB7283C5EE854_Class_1_18BFEAD82BA3C5E8;
class Class_1_A191518F735366A8;
class Class_1_A45C7A2E673C349B;
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_841BB7283C5EE854_STRUCT_2_3B7EF0AF9254204A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x74DC80)
#define CLASS_1_841BB7283C5EE854_STRUCT_2_3B7EF0AF9254204A_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_841BB7283C5EE854_Struct_2_3B7EF0AF9254204A_TypeDefinitionIndex = 46413;

struct alignas(8) Class_1_841BB7283C5EE854_Struct_2_3B7EF0AF9254204A
{
	::System::Action_1<::Class_1_A191518F735366A8*>* Field_2_4; // 0x10
	::Class_1_841BB7283C5EE854_Class_1_18BFEAD82BA3C5E8* Field_2_3; // 0x18
	::Class_1_A45C7A2E673C349B* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_1_A191518F735366A8*> Field_2_1; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x40
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_841BB7283C5EE854_STRUCT_2_3B7EF0AF9254204A_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_841BB7283C5EE854_STRUCT_2_3B7EF0AF9254204A_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
