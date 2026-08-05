#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC769D284A54927;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_233B74F0BE0201D2_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6F56F0)
#define CLASS_2_3CC769D284A54927_STRUCT_2_233B74F0BE0201D2_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_233B74F0BE0201D2_1_TypeDefinitionIndex = 76692;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_233B74F0BE0201D2_1
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_2; // 0x10
	::Class_2_3CC769D284A54927* Field_2_1; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x30
	::System::Int32 Field_2_3; // 0x40
	::System::Single Field_2_7; // 0x44
	::System::Single Field_2_5; // 0x48
	::System::Int32 Field_2_0; // 0x4C
	::System::Single Field_2_6; // 0x50
	::System::Boolean Field_2_11; // 0x54
	::System::Single Field_2_4; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_233B74F0BE0201D2_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_233B74F0BE0201D2_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
