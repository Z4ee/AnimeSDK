#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_9232271EC184E3E9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_4_7E85711946499166_STRUCT_2_256FC99814AF7B5B_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x881A70)
#define CLASS_4_7E85711946499166_STRUCT_2_256FC99814AF7B5B_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_4_7E85711946499166_Struct_2_256FC99814AF7B5B_TypeDefinitionIndex = 72372;

struct alignas(8) Class_4_7E85711946499166_Struct_2_256FC99814AF7B5B
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x10
	::System::String* Field_2_5; // 0x20
	::Foundation::ViewObject::ViewObjectHandle Field_2_7; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* Field_2_11; // 0x38
	::Class_2_9232271EC184E3E9* Field_2_9; // 0x40
	::System::Threading::CancellationToken Field_2_10; // 0x48
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_0; // 0x50
	::System::Int32 Field_2_4; // 0x58
	::System::Int32 Field_2_6; // 0x5C
	::System::Int32 Field_2_1; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_STRUCT_2_256FC99814AF7B5B_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_4_7E85711946499166_STRUCT_2_256FC99814AF7B5B_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
