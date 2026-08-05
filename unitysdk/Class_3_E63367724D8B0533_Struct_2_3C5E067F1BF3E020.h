#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0BE87BAA5B57AD70;
class Class_3_E63367724D8B0533;
class Class_3_E63367724D8B0533_Class_1_3E2990DBB8544800;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_3_E63367724D8B0533_STRUCT_2_3C5E067F1BF3E020_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A58A0)
#define CLASS_3_E63367724D8B0533_STRUCT_2_3C5E067F1BF3E020_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_3_E63367724D8B0533_Struct_2_3C5E067F1BF3E020_TypeDefinitionIndex = 78484;

struct alignas(8) Class_3_E63367724D8B0533_Struct_2_3C5E067F1BF3E020
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_4; // 0x10
	::System::Collections::Generic::List_1_Enumerator<::Class_3_E63367724D8B0533_Class_1_3E2990DBB8544800*> Field_2_5; // 0x20
	::Class_3_E63367724D8B0533* Field_2_6; // 0x38
	::Class_1_0BE87BAA5B57AD70* Field_2_7; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Int32> Field_2_0; // 0x48
	::System::Int32 Field_2_1; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_STRUCT_2_3C5E067F1BF3E020_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_3_E63367724D8B0533_STRUCT_2_3C5E067F1BF3E020_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
