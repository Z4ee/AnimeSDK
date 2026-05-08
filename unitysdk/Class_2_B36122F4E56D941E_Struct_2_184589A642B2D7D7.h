#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_B36122F4E56D941E;
namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_B36122F4E56D941E_STRUCT_2_184589A642B2D7D7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A0130)
#define CLASS_2_B36122F4E56D941E_STRUCT_2_184589A642B2D7D7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_B36122F4E56D941E_Struct_2_184589A642B2D7D7_TypeDefinitionIndex = 53237;

struct alignas(8) Class_2_B36122F4E56D941E_Struct_2_184589A642B2D7D7
{
	::Class_2_B36122F4E56D941E* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>*> Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_3; // 0x30
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B36122F4E56D941E_STRUCT_2_184589A642B2D7D7_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B36122F4E56D941E_STRUCT_2_184589A642B2D7D7_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
