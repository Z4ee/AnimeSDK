#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_B34091191FCE3A1B;
namespace MoleMole { class UIUrbanMapTrackLineWidgetContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B34091191FCE3A1B_STRUCT_2_CEC3584FEE7B6D6D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x790120)
#define CLASS_2_B34091191FCE3A1B_STRUCT_2_CEC3584FEE7B6D6D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_B34091191FCE3A1B_Struct_2_CEC3584FEE7B6D6D_TypeDefinitionIndex = 87064;

struct alignas(8) Class_2_B34091191FCE3A1B_Struct_2_CEC3584FEE7B6D6D
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapTrackLineWidgetContext*>*> Field_2_4; // 0x18
	::Class_2_B34091191FCE3A1B* Field_2_6; // 0x30
	::UnityEngine::Transform* Field_2_5; // 0x38
	::System::Int32 Field_2_0; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_STRUCT_2_CEC3584FEE7B6D6D_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_B34091191FCE3A1B_STRUCT_2_CEC3584FEE7B6D6D_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
