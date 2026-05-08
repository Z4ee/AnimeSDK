#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1D0F14FBEE98E5ED_Class_1_F1C53540FBA79864_8;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_1D0F14FBEE98E5ED_STRUCT_2_49603D8F31CD596C_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6EE6E0)
#define CLASS_1_1D0F14FBEE98E5ED_STRUCT_2_49603D8F31CD596C_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6EE6F0)

inline static constexpr unsigned int Class_1_1D0F14FBEE98E5ED_Struct_2_49603D8F31CD596C_TypeDefinitionIndex = 67685;

struct alignas(8) Class_1_1D0F14FBEE98E5ED_Struct_2_49603D8F31CD596C
{
	::Class_1_1D0F14FBEE98E5ED_Class_1_F1C53540FBA79864_8* Field_2_2; // 0x10
	::System::Action* Field_2_3; // 0x18
	::System::Action* Field_2_4; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x28
	::System::Runtime::CompilerServices::AsyncTaskMethodBuilder Field_2_1; // 0x38
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_STRUCT_2_49603D8F31CD596C_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_STRUCT_2_49603D8F31CD596C_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
