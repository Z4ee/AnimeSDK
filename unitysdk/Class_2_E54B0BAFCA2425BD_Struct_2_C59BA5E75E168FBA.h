#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/Struct_2_9D8B950D8621E6B3.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_E54B0BAFCA2425BD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_E54B0BAFCA2425BD_STRUCT_2_C59BA5E75E168FBA_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x834970)
#define CLASS_2_E54B0BAFCA2425BD_STRUCT_2_C59BA5E75E168FBA_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_E54B0BAFCA2425BD_Struct_2_C59BA5E75E168FBA_TypeDefinitionIndex = 54300;

struct alignas(8) Class_2_E54B0BAFCA2425BD_Struct_2_C59BA5E75E168FBA
{
	::Foundation::ViewObject::ViewObjectHandle Field_2_3; // 0x10
	::System::String* Field_2_5; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* Field_2_6; // 0x28
	::Class_2_E54B0BAFCA2425BD* Field_2_4; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Struct_2_9D8B950D8621E6B3> Field_2_7; // 0x38
	::System::Threading::CancellationToken Field_2_2; // 0x58
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x60
	::System::Int32 Field_2_0; // 0x70

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_STRUCT_2_C59BA5E75E168FBA_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_E54B0BAFCA2425BD_STRUCT_2_C59BA5E75E168FBA_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
