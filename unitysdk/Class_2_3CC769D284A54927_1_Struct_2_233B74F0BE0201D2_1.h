#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC769D284A54927_1;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_233B74F0BE0201D2_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7E0840)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_233B74F0BE0201D2_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_233B74F0BE0201D2_1_TypeDefinitionIndex = 86343;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_233B74F0BE0201D2_1
{
	::Class_2_3CC769D284A54927_1* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_1; // 0x28
	::System::Single Field_2_5; // 0x40
	::System::Boolean Field_2_9; // 0x44
	::System::Boolean Field_2_4; // 0x45
	::System::Single Field_2_8; // 0x48
	::System::Int32 Field_2_0; // 0x4C
	::System::Int32 Field_2_3; // 0x50
	::System::Single Field_2_6; // 0x54
	::System::Single Field_2_7; // 0x58

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_233B74F0BE0201D2_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_233B74F0BE0201D2_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
