#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class Node; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define CLASS_1_345A456E01F0BD3E_STRUCT_2_1F4B2F200017B7EA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x71E780)
#define CLASS_1_345A456E01F0BD3E_STRUCT_2_1F4B2F200017B7EA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x55E040)

inline static constexpr unsigned int Class_1_345A456E01F0BD3E_Struct_2_1F4B2F200017B7EA_TypeDefinitionIndex = 76819;

struct alignas(8) Class_1_345A456E01F0BD3E_Struct_2_1F4B2F200017B7EA
{
	::NodeCanvas::Framework::Node* Field_2_2; // 0x10
	::System::Threading::Tasks::Task_1<::System::Int32>* Field_2_4; // 0x18
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Int32> Field_2_5; // 0x20
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Int32> Field_2_1; // 0x28
	::NodeCanvas::Framework::Graph* Field_2_3; // 0x40
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_345A456E01F0BD3E_STRUCT_2_1F4B2F200017B7EA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_345A456E01F0BD3E_STRUCT_2_1F4B2F200017B7EA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
