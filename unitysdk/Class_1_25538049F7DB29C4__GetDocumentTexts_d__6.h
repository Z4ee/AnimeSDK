#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_25538049F7DB29C4;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_25538049F7DB29C4__GETDOCUMENTTEXTS_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2BCB5A0)
#define CLASS_1_25538049F7DB29C4__GETDOCUMENTTEXTS_D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2BCB5B0)

inline static constexpr unsigned int Class_1_25538049F7DB29C4__GetDocumentTexts_d__6_TypeDefinitionIndex = 46858;

struct alignas(8) Class_1_25538049F7DB29C4__GetDocumentTexts_d__6
{
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppArray<::System::String*>*> __t__builder; // 0x10
	::System::String* docID; // 0x28
	::Class_1_25538049F7DB29C4* __4__this; // 0x30
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> __u__1; // 0x38
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
