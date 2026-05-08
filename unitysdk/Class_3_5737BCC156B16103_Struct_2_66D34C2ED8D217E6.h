#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_441;
class Class_0_16E4307DCC419505_587;
class Class_1_B7C41BE725AAED79;
class Class_3_5737BCC156B16103;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_5737BCC156B16103_STRUCT_2_66D34C2ED8D217E6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A3690)
#define CLASS_3_5737BCC156B16103_STRUCT_2_66D34C2ED8D217E6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_3_5737BCC156B16103_Struct_2_66D34C2ED8D217E6_TypeDefinitionIndex = 82523;

struct alignas(8) Class_3_5737BCC156B16103_Struct_2_66D34C2ED8D217E6
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_0_16E4307DCC419505_441*> Field_2_7; // 0x10
	::Class_3_5737BCC156B16103* Field_2_2; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_0_16E4307DCC419505_441*> Field_2_1; // 0x30
	::System::String* Field_2_3; // 0x48
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_B7C41BE725AAED79*> Field_2_6; // 0x50
	::Class_0_16E4307DCC419505_587* Field_2_4; // 0x68
	::System::Int32 Field_2_5; // 0x70
	::System::Int32 Field_2_0; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5737BCC156B16103_STRUCT_2_66D34C2ED8D217E6_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_5737BCC156B16103_STRUCT_2_66D34C2ED8D217E6_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
