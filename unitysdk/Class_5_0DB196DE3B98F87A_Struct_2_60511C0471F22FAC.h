#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

class Class_5_0DB196DE3B98F87A;
class Class_5_A6F8D19602712D95;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_0DB196DE3B98F87A_STRUCT_2_60511C0471F22FAC_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x696890)
#define CLASS_5_0DB196DE3B98F87A_STRUCT_2_60511C0471F22FAC_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_5_0DB196DE3B98F87A_Struct_2_60511C0471F22FAC_TypeDefinitionIndex = 56815;

struct alignas(8) Class_5_0DB196DE3B98F87A_Struct_2_60511C0471F22FAC
{
	::System::Collections::Generic::List_1<::Class_5_A6F8D19602712D95*>* Field_2_5; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x28
	::MoleMole::HollowChessboard::HollowEntity* Field_2_4; // 0x38
	::Class_5_0DB196DE3B98F87A* Field_2_2; // 0x40
	::MoleMole::HollowChessboard::HollowCell Field_2_3; // 0x48
	::System::Int32 Field_2_0; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_STRUCT_2_60511C0471F22FAC_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_0DB196DE3B98F87A_STRUCT_2_60511C0471F22FAC_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
