#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_982178F761E7F1DC.h"
#include "unitysdk/Enum_3_F6AB19A8BCD630BB.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_311;
class Class_5_BFFF8608392BE06B;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_BFFF8608392BE06B_STRUCT_2_FF187FF468EA80E5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x816020)
#define CLASS_5_BFFF8608392BE06B_STRUCT_2_FF187FF468EA80E5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_5_BFFF8608392BE06B_Struct_2_FF187FF468EA80E5_TypeDefinitionIndex = 73178;

struct alignas(8) Class_5_BFFF8608392BE06B_Struct_2_FF187FF468EA80E5
{
	::Class_0_16E4307DCC419505_311* Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x18
	::System::Threading::CancellationToken Field_2_5; // 0x28
	::Class_0_16E4307DCC419505_311* Field_2_11; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x38
	::Class_5_BFFF8608392BE06B* Field_2_6; // 0x48
	::Enum_3_F6AB19A8BCD630BB Field_2_7; // 0x50
	::System::Int32 Field_2_2; // 0x54
	::Enum_3_982178F761E7F1DC Field_2_0; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_BFFF8608392BE06B_STRUCT_2_FF187FF468EA80E5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_BFFF8608392BE06B_STRUCT_2_FF187FF468EA80E5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
