#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_8A0744A5CDB04F6F;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_8A0744A5CDB04F6F__GETDOCUMENTTEXTS_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2DF7990)
#define CLASS_1_8A0744A5CDB04F6F__GETDOCUMENTTEXTS_D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2DF79A0)

inline static constexpr unsigned int Class_1_8A0744A5CDB04F6F__GetDocumentTexts_d__6_TypeDefinitionIndex = 50407;

struct alignas(8) Class_1_8A0744A5CDB04F6F__GetDocumentTexts_d__6
{
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppArray<::System::String*>*> __t__builder; // 0x10
	::Class_1_8A0744A5CDB04F6F* __4__this; // 0x28
	::System::String* docID; // 0x30
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> __u__1; // 0x38
	::System::Int32 __1__state; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A0744A5CDB04F6F__GETDOCUMENTTEXTS_D__6_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_8A0744A5CDB04F6F__GETDOCUMENTTEXTS_D__6_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
