#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_B36122F4E56D941E;
namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B36122F4E56D941E_STRUCT_2_CEC3584FEE7B6D6D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x768310)
#define CLASS_2_B36122F4E56D941E_STRUCT_2_CEC3584FEE7B6D6D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_B36122F4E56D941E_Struct_2_CEC3584FEE7B6D6D_TypeDefinitionIndex = 53241;

struct alignas(8) Class_2_B36122F4E56D941E_Struct_2_CEC3584FEE7B6D6D
{
	::Class_2_B36122F4E56D941E* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>*> Field_2_4; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x30
	::UnityEngine::Transform* Field_2_3; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B36122F4E56D941E_STRUCT_2_CEC3584FEE7B6D6D_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B36122F4E56D941E_STRUCT_2_CEC3584FEE7B6D6D_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
