#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_9232271EC184E3E9;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_AF49FD7F4B63F5FD_STRUCT_2_D36D1BF9EB02F44D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6D9220)
#define CLASS_3_AF49FD7F4B63F5FD_STRUCT_2_D36D1BF9EB02F44D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_3_AF49FD7F4B63F5FD_Struct_2_D36D1BF9EB02F44D_TypeDefinitionIndex = 89791;

struct alignas(8) Class_3_AF49FD7F4B63F5FD_Struct_2_D36D1BF9EB02F44D
{
	::Class_2_9232271EC184E3E9* Field_2_10; // 0x10
	::System::String* Field_2_5; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_9; // 0x20
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x30
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* Field_2_4; // 0x40
	::System::Threading::CancellationToken Field_2_11; // 0x48
	::Foundation::ViewObject::ViewObjectHandle Field_2_6; // 0x50
	::System::Int32 Field_2_0; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_STRUCT_2_D36D1BF9EB02F44D_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_AF49FD7F4B63F5FD_STRUCT_2_D36D1BF9EB02F44D_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
