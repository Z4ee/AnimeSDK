#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_230;
class Class_2_208CC9941471731A_684;
class Class_2_3CC769D284A54927;
class Class_2_3CC769D284A54927_Class_1_1A520E7D82BE4A56_10;
class Class_3_88D140F5E09465E1_1;
class Class_3_9F091E965E210217_17;
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x794070)
#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_3_TypeDefinitionIndex = 65389;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_3
{
	::Cysharp::Threading::Tasks::UniTask Field_2_12; // 0x10
	::Class_2_3CC769D284A54927* Field_2_2; // 0x20
	::Class_2_3CC769D284A54927_Class_1_1A520E7D82BE4A56_10* Field_2_4; // 0x28
	::MoleMole::Battle::Entity* Field_2_5; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_17; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_16; // 0x48
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_88D140F5E09465E1_1*> Field_2_15; // 0x58
	::Cysharp::Threading::Tasks::UniTask Field_2_13; // 0x70
	::Class_2_208CC9941471731A_230* Field_2_8; // 0x80
	::Class_3_88D140F5E09465E1_1* Field_2_10; // 0x88
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x90
	::System::Threading::CancellationTokenSource* Field_2_14; // 0xA0
	::Class_2_208CC9941471731A_684* Field_2_11; // 0xA8
	::Class_3_9F091E965E210217_17* Field_2_6; // 0xB0
	::System::Int32 Field_2_7; // 0xB8
	::System::Int32 Field_2_3; // 0xBC
	::System::Boolean Field_2_9; // 0xC0
	::System::Int32 Field_2_0; // 0xC4

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
