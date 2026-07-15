#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_25538049F7DB29C4;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_25538049F7DB29C4__GETDOCUMENTTEXTS_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x38D1D90)
#define CLASS_1_25538049F7DB29C4__GETDOCUMENTTEXTS_D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x12D0F40)

inline static constexpr unsigned int Class_1_25538049F7DB29C4__GetDocumentTexts_d__6_TypeDefinitionIndex = 47823;

struct alignas(8) Class_1_25538049F7DB29C4__GetDocumentTexts_d__6
{
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> __u__1; // 0x10
	::Class_1_25538049F7DB29C4* __4__this; // 0x18
	::System::String* docID; // 0x20
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppArray<::System::String*>*> __t__builder; // 0x28
	::System::Int32 __1__state; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25538049F7DB29C4__GETDOCUMENTTEXTS_D__6_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_25538049F7DB29C4__GETDOCUMENTTEXTS_D__6_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
