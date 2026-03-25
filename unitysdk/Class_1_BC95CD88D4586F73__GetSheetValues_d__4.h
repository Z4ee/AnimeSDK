#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_BC95CD88D4586F73;
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_BC95CD88D4586F73__GETSHEETVALUES_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC5AF50)
#define CLASS_1_BC95CD88D4586F73__GETSHEETVALUES_D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x7EF60)

inline static constexpr unsigned int Class_1_BC95CD88D4586F73__GetSheetValues_d__4_TypeDefinitionIndex = 40365;

struct alignas(8) Class_1_BC95CD88D4586F73__GetSheetValues_d__4
{
	::System::String* docID; // 0x10
	::System::String* range; // 0x18
	::Class_1_BC95CD88D4586F73* __4__this; // 0x20
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppArray<::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>*>*> __t__builder; // 0x28
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> __u__1; // 0x40
	::System::Int32 __1__state; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73__GETSHEETVALUES_D__4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73__GETSHEETVALUES_D__4_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
