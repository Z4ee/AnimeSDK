#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC769D284A54927_1;
class Class_3_48A3D3A34C52331D_39;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_9AED43F2DC9AE701_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8020C0)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_9AED43F2DC9AE701_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_9AED43F2DC9AE701_TypeDefinitionIndex = 62898;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_9AED43F2DC9AE701
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_48A3D3A34C52331D_39*> Field_2_5; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x38
	::Class_2_3CC769D284A54927_1* Field_2_0; // 0x48
	::System::Int32 Field_2_2; // 0x50
	::System::Int32 Field_2_7; // 0x54

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_9AED43F2DC9AE701_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_9AED43F2DC9AE701_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
