#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_BC62748FA820C591_Class_1_0839D37CB96616D1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_BC62748FA820C591_CLASS_1_0839D37CB96616D1_STRUCT_2_604119849220121B_15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x819130)
#define CLASS_1_BC62748FA820C591_CLASS_1_0839D37CB96616D1_STRUCT_2_604119849220121B_15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_BC62748FA820C591_Class_1_0839D37CB96616D1_Struct_2_604119849220121B_15_TypeDefinitionIndex = 83576;

struct alignas(8) Class_1_BC62748FA820C591_Class_1_0839D37CB96616D1_Struct_2_604119849220121B_15
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_1_BC62748FA820C591_Class_1_0839D37CB96616D1* Field_2_2; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x28
	::System::Threading::CancellationToken Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC62748FA820C591_CLASS_1_0839D37CB96616D1_STRUCT_2_604119849220121B_15_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_BC62748FA820C591_CLASS_1_0839D37CB96616D1_STRUCT_2_604119849220121B_15_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
