#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

class Class_5_0DB196DE3B98F87A;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_0DB196DE3B98F87A_STRUCT_2_CFA1AEA9A3CDF452_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x717B30)
#define CLASS_5_0DB196DE3B98F87A_STRUCT_2_CFA1AEA9A3CDF452_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_5_0DB196DE3B98F87A_Struct_2_CFA1AEA9A3CDF452_1_TypeDefinitionIndex = 56813;

struct alignas(8) Class_5_0DB196DE3B98F87A_Struct_2_CFA1AEA9A3CDF452_1
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_4; // 0x10
	::Il2CppArray<::MoleMole::HollowChessboard::HollowCell>* Field_2_3; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::Class_5_0DB196DE3B98F87A* Field_2_2; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_STRUCT_2_CFA1AEA9A3CDF452_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_STRUCT_2_CFA1AEA9A3CDF452_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
