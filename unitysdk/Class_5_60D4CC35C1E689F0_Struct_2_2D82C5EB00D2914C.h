#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_ABCAEFDF06E3479A.h"
#include "unitysdk/System/ValueType.h"

class Class_1_2899B0E942F4D2BC;
class Class_1_ED492469204624B4;
class Class_3_4CEBE66D8E0DD3A7;
class Class_5_60D4CC35C1E689F0;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_60D4CC35C1E689F0_STRUCT_2_2D82C5EB00D2914C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7F3F30)
#define CLASS_5_60D4CC35C1E689F0_STRUCT_2_2D82C5EB00D2914C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_5_60D4CC35C1E689F0_Struct_2_2D82C5EB00D2914C_TypeDefinitionIndex = 45013;

struct alignas(8) Class_5_60D4CC35C1E689F0_Struct_2_2D82C5EB00D2914C
{
	::Class_1_ED492469204624B4* Field_2_2; // 0x10
	::Class_3_4CEBE66D8E0DD3A7* Field_2_4; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Class_1_2899B0E942F4D2BC* Field_2_3; // 0x30
	::Class_5_60D4CC35C1E689F0* Field_2_6; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x40
	::Enum_3_ABCAEFDF06E3479A Field_2_5; // 0x50
	::System::Int32 Field_2_0; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_60D4CC35C1E689F0_STRUCT_2_2D82C5EB00D2914C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_60D4CC35C1E689F0_STRUCT_2_2D82C5EB00D2914C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
