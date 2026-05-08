#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_441;
class Class_0_16E4307DCC419505_587;
class Class_1_8D68BB826C7B7E2E;
class Class_1_9465CC52E1CFB15A;
class Class_1_B7C41BE725AAED79;
class Class_1_CF009758DC576A56;
class Class_3_5737BCC156B16103;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_5737BCC156B16103_STRUCT_2_0A755E56BBBD3518_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x78C2B0)
#define CLASS_3_5737BCC156B16103_STRUCT_2_0A755E56BBBD3518_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_3_5737BCC156B16103_Struct_2_0A755E56BBBD3518_TypeDefinitionIndex = 82520;

struct alignas(8) Class_3_5737BCC156B16103_Struct_2_0A755E56BBBD3518
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_0_16E4307DCC419505_441*> Field_2_12; // 0x10
	::Class_1_9465CC52E1CFB15A* Field_2_7; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_0_16E4307DCC419505_441*> Field_2_1; // 0x30
	::Class_0_16E4307DCC419505_587* Field_2_6; // 0x48
	::System::Collections::Generic::List_1_Enumerator<::Class_1_CF009758DC576A56*> Field_2_10; // 0x50
	::System::Collections::Generic::List_1<::Class_1_9465CC52E1CFB15A*>* Field_2_8; // 0x68
	::System::String* Field_2_5; // 0x70
	::System::Collections::Generic::List_1<::Class_1_8D68BB826C7B7E2E*>* Field_2_9; // 0x78
	::Class_3_5737BCC156B16103* Field_2_3; // 0x80
	::Class_1_B7C41BE725AAED79* Field_2_2; // 0x88
	::Class_1_CF009758DC576A56* Field_2_11; // 0x90
	::System::Int32 Field_2_0; // 0x98
	::System::Int32 Field_2_4; // 0x9C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5737BCC156B16103_STRUCT_2_0A755E56BBBD3518_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_5737BCC156B16103_STRUCT_2_0A755E56BBBD3518_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
