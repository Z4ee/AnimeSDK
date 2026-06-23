#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_982178F761E7F1DC.h"
#include "unitysdk/Enum_3_F6AB19A8BCD630BB.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_423;
class Class_5_F5E525937B4D15FE;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_F5E525937B4D15FE_STRUCT_2_FF187FF468EA80E5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7B11C0)
#define CLASS_5_F5E525937B4D15FE_STRUCT_2_FF187FF468EA80E5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_5_F5E525937B4D15FE_Struct_2_FF187FF468EA80E5_TypeDefinitionIndex = 58172;

struct alignas(8) Class_5_F5E525937B4D15FE_Struct_2_FF187FF468EA80E5
{
	::Class_0_16E4307DCC419505_423* Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x18
	::Class_5_F5E525937B4D15FE* Field_2_4; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x30
	::Class_0_16E4307DCC419505_423* Field_2_6; // 0x40
	::System::Threading::CancellationToken Field_2_5; // 0x48
	::System::Int32 Field_2_0; // 0x50
	::Enum_3_F6AB19A8BCD630BB Field_2_3; // 0x54
	::Enum_3_982178F761E7F1DC Field_2_2; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_STRUCT_2_FF187FF468EA80E5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_F5E525937B4D15FE_STRUCT_2_FF187FF468EA80E5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
