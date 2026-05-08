#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/ValueType.h"

class Class_2_BC0F156725ADF64F;
class Class_2_C4F720DE4FCB69E6;
class Class_3_D23741BC79EFF5BF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_BC0F156725ADF64F_STRUCT_2_4762F35529482DD8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7138B0)
#define CLASS_2_BC0F156725ADF64F_STRUCT_2_4762F35529482DD8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_BC0F156725ADF64F_Struct_2_4762F35529482DD8_TypeDefinitionIndex = 56189;

struct alignas(8) Class_2_BC0F156725ADF64F_Struct_2_4762F35529482DD8
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_4; // 0x20
	::System::Threading::CancellationTokenSource* Field_2_8; // 0x28
	::Class_2_C4F720DE4FCB69E6* Field_2_10; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* Field_2_6; // 0x48
	::System::String* Field_2_5; // 0x50
	::Foundation::ViewObject::ViewObjectHandle Field_2_2; // 0x58
	::Class_3_D23741BC79EFF5BF* Field_2_9; // 0x68
	::Class_2_BC0F156725ADF64F* Field_2_7; // 0x70
	::System::Int32 Field_2_0; // 0x78
	::System::UInt32 Field_2_3; // 0x7C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_STRUCT_2_4762F35529482DD8_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_BC0F156725ADF64F_STRUCT_2_4762F35529482DD8_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
