#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_1D0F14FBEE98E5ED;
class Class_1_1D0F14FBEE98E5ED_Class_1_4E271783D45CB8C7;
class Class_1_1D0F14FBEE98E5ED_Class_1_ACB37ECEDD0477B4;
class Class_1_1D0F14FBEE98E5ED_Class_1_F1C53540FBA79864_7;
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_1D0F14FBEE98E5ED_STRUCT_2_AC3B69DB815B15CB_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7638E0)
#define CLASS_1_1D0F14FBEE98E5ED_STRUCT_2_AC3B69DB815B15CB_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_1D0F14FBEE98E5ED_Struct_2_AC3B69DB815B15CB_TypeDefinitionIndex = 67669;

struct alignas(8) Class_1_1D0F14FBEE98E5ED_Struct_2_AC3B69DB815B15CB
{
	::System::Action* Field_2_5; // 0x10
	::Class_1_1D0F14FBEE98E5ED_Class_1_F1C53540FBA79864_7* Field_2_4; // 0x18
	::Class_1_1D0F14FBEE98E5ED_Class_1_ACB37ECEDD0477B4* Field_2_6; // 0x20
	::Class_1_1D0F14FBEE98E5ED* Field_2_2; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x40
	::Class_1_1D0F14FBEE98E5ED_Class_1_4E271783D45CB8C7* Field_2_8; // 0x50
	::System::Boolean Field_2_7; // 0x58
	::System::Int32 Field_2_3; // 0x5C
	::System::Int32 Field_2_0; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_STRUCT_2_AC3B69DB815B15CB_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_1D0F14FBEE98E5ED_STRUCT_2_AC3B69DB815B15CB_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
