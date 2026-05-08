#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_5FD82CD6B80F94FB;
namespace System::Net { class IPAddress; }
namespace System::Net { class IPEndPoint; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_5FD82CD6B80F94FB_STRUCT_2_56C87254928468C4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x745410)
#define CLASS_2_5FD82CD6B80F94FB_STRUCT_2_56C87254928468C4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x390820)

inline static constexpr unsigned int Class_2_5FD82CD6B80F94FB_Struct_2_56C87254928468C4_TypeDefinitionIndex = 61861;

struct alignas(8) Class_2_5FD82CD6B80F94FB_Struct_2_56C87254928468C4
{
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Boolean> Field_2_1; // 0x10
	::Il2CppArray<::System::Net::IPAddress*>* Field_2_3; // 0x28
	::System::Runtime::CompilerServices::TaskAwaiter Field_2_6; // 0x30
	::Class_2_5FD82CD6B80F94FB* Field_2_2; // 0x38
	::System::Net::IPEndPoint* Field_2_5; // 0x40
	::System::Int32 Field_2_0; // 0x48
	::System::Int32 Field_2_4; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FD82CD6B80F94FB_STRUCT_2_56C87254928468C4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_5FD82CD6B80F94FB_STRUCT_2_56C87254928468C4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
