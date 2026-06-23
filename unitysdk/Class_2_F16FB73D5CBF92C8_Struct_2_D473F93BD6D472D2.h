#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_F16FB73D5CBF92C8;
class Class_2_F16FB73D5CBF92C8_Class_1_1A520E7D82BE4A56_3;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_F16FB73D5CBF92C8_STRUCT_2_D473F93BD6D472D2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x677240)
#define CLASS_2_F16FB73D5CBF92C8_STRUCT_2_D473F93BD6D472D2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_F16FB73D5CBF92C8_Struct_2_D473F93BD6D472D2_TypeDefinitionIndex = 48358;

struct alignas(8) Class_2_F16FB73D5CBF92C8_Struct_2_D473F93BD6D472D2
{
	::Class_2_F16FB73D5CBF92C8* Field_2_2; // 0x10
	::System::Threading::CancellationToken Field_2_5; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x30
	::Class_2_F16FB73D5CBF92C8_Class_1_1A520E7D82BE4A56_3* Field_2_3; // 0x40
	::System::Int32 Field_2_4; // 0x48
	::System::Int32 Field_2_0; // 0x4C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F16FB73D5CBF92C8_STRUCT_2_D473F93BD6D472D2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_F16FB73D5CBF92C8_STRUCT_2_D473F93BD6D472D2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
