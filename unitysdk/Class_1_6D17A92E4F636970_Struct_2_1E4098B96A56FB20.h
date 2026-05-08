#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_2_FDFE69FE7B72463B;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_6D17A92E4F636970_STRUCT_2_1E4098B96A56FB20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x61F560)
#define CLASS_1_6D17A92E4F636970_STRUCT_2_1E4098B96A56FB20_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_6D17A92E4F636970_Struct_2_1E4098B96A56FB20_TypeDefinitionIndex = 82558;

struct alignas(8) Class_1_6D17A92E4F636970_Struct_2_1E4098B96A56FB20
{
	::System::Threading::CancellationToken Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87> Field_2_1; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x30
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x40
	::System::String* Field_2_3; // 0x48
	::System::Int32 Field_2_0; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_STRUCT_2_1E4098B96A56FB20_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_6D17A92E4F636970_STRUCT_2_1E4098B96A56FB20_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
