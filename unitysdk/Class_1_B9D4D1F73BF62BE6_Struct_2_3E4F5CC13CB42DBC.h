#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Struct_2_9D8B950D8621E6B3.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_204;
class Class_1_B7C41BE725AAED79;
class Class_1_B9D4D1F73BF62BE6;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_B9D4D1F73BF62BE6_STRUCT_2_3E4F5CC13CB42DBC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x801BB0)
#define CLASS_1_B9D4D1F73BF62BE6_STRUCT_2_3E4F5CC13CB42DBC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_1_B9D4D1F73BF62BE6_Struct_2_3E4F5CC13CB42DBC_TypeDefinitionIndex = 41103;

struct alignas(8) Class_1_B9D4D1F73BF62BE6_Struct_2_3E4F5CC13CB42DBC
{
	::Class_1_B9D4D1F73BF62BE6* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Struct_2_9D8B950D8621E6B3> Field_2_2; // 0x20
	::Class_0_16E4307DCC419505_204* Field_2_7; // 0x40
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Struct_2_9D8B950D8621E6B3> Field_2_4; // 0x48
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_B7C41BE725AAED79*> Field_2_5; // 0x68
	::System::Int32 Field_2_3; // 0x80
	::System::Int32 Field_2_6; // 0x84

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9D4D1F73BF62BE6_STRUCT_2_3E4F5CC13CB42DBC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_B9D4D1F73BF62BE6_STRUCT_2_3E4F5CC13CB42DBC_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
