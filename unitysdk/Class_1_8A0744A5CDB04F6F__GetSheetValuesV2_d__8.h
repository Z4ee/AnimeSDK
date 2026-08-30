#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_8A0744A5CDB04F6F;
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_8A0744A5CDB04F6F__GETSHEETVALUESV2_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3A4D980)
#define CLASS_1_8A0744A5CDB04F6F__GETSHEETVALUESV2_D__8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1B79750)

inline static constexpr unsigned int Class_1_8A0744A5CDB04F6F__GetSheetValuesV2_d__8_TypeDefinitionIndex = 50410;

struct alignas(8) Class_1_8A0744A5CDB04F6F__GetSheetValuesV2_d__8
{
	::Class_1_8A0744A5CDB04F6F* __4__this; // 0x10
	::System::String* docID; // 0x18
	::System::String* sheetID; // 0x20
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppArray<::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>*>*> __t__builder; // 0x28
	::System::String* rangeAddress; // 0x40
	::System::Runtime::CompilerServices::TaskAwaiter_1<::System::String*> __u__1; // 0x48
	::System::Int32 __1__state; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A0744A5CDB04F6F__GETSHEETVALUESV2_D__8_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_8A0744A5CDB04F6F__GETSHEETVALUESV2_D__8_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
