#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_5_E28D3B621241E562;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_E28D3B621241E562_STRUCT_2_194744A9DCF73F6A_4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x836BA0)
#define CLASS_5_E28D3B621241E562_STRUCT_2_194744A9DCF73F6A_4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_5_E28D3B621241E562_Struct_2_194744A9DCF73F6A_4_TypeDefinitionIndex = 65865;

struct alignas(8) Class_5_E28D3B621241E562_Struct_2_194744A9DCF73F6A_4
{
	::Class_5_E28D3B621241E562* Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x28
	::System::Int32 Field_2_1; // 0x38

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_E28D3B621241E562_STRUCT_2_194744A9DCF73F6A_4_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_E28D3B621241E562_STRUCT_2_194744A9DCF73F6A_4_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
