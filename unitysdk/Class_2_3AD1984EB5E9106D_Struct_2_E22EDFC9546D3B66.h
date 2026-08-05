#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Foundation/ObjectPoolOfT_1_ObjectHandler_1.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3AD1984EB5E9106D;
class Class_2_3AD1984EB5E9106D_Class_1_F7FB368C1AEE220C;
namespace MoleMole { class UISummerTideTreasureSellingLTRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3AD1984EB5E9106D_STRUCT_2_E22EDFC9546D3B66_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7CE380)
#define CLASS_2_3AD1984EB5E9106D_STRUCT_2_E22EDFC9546D3B66_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3AD1984EB5E9106D_Struct_2_E22EDFC9546D3B66_TypeDefinitionIndex = 45828;

struct alignas(8) Class_2_3AD1984EB5E9106D_Struct_2_E22EDFC9546D3B66
{
	::Class_2_3AD1984EB5E9106D_Class_1_F7FB368C1AEE220C* Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Field_2_1; // 0x18
	::Class_2_3AD1984EB5E9106D* Field_2_0; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x28
	::Foundation::ObjectPoolOfT_1_ObjectHandler_1<::System::Collections::Generic::List_1<::MoleMole::UISummerTideTreasureSellingLTRowWidgetController*>*, ::System::Collections::Generic::List_1<::MoleMole::UISummerTideTreasureSellingLTRowWidgetController*>*> Field_2_5; // 0x38
	::System::Int32 Field_2_2; // 0x40

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AD1984EB5E9106D_STRUCT_2_E22EDFC9546D3B66_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3AD1984EB5E9106D_STRUCT_2_E22EDFC9546D3B66_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
