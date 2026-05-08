#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_1_DEC3CCB1574F4F89_Class_1_51C5C9074A9C3F1B;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_DEC3CCB1574F4F89_CLASS_1_51C5C9074A9C3F1B_STRUCT_2_604119849220121B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x658050)
#define CLASS_1_DEC3CCB1574F4F89_CLASS_1_51C5C9074A9C3F1B_STRUCT_2_604119849220121B_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_DEC3CCB1574F4F89_Class_1_51C5C9074A9C3F1B_Struct_2_604119849220121B_TypeDefinitionIndex = 39898;

struct alignas(8) Class_1_DEC3CCB1574F4F89_Class_1_51C5C9074A9C3F1B_Struct_2_604119849220121B
{
	::System::Threading::CancellationToken Field_2_3; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Class_1_DEC3CCB1574F4F89_Class_1_51C5C9074A9C3F1B* Field_2_2; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEC3CCB1574F4F89_CLASS_1_51C5C9074A9C3F1B_STRUCT_2_604119849220121B_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_DEC3CCB1574F4F89_CLASS_1_51C5C9074A9C3F1B_STRUCT_2_604119849220121B_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
