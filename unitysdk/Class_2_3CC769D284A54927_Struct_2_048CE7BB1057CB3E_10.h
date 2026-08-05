#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_50;
class Class_2_208CC9941471731A_56;
class Class_2_3CC769D284A54927;
class Class_2_3CC769D284A54927_Class_1_1A520E7D82BE4A56_15;
class Class_3_9F091E965E210217_8;
class Class_3_D9FABB598B022DEA;
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x801AB0)
#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_10_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_10_TypeDefinitionIndex = 76718;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_10
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_19; // 0x10
	::Cysharp::Threading::Tasks::UniTask Field_2_14; // 0x20
	::System::Threading::CancellationTokenSource* Field_2_13; // 0x30
	::Class_2_3CC769D284A54927* Field_2_1; // 0x38
	::Class_2_3CC769D284A54927_Class_1_1A520E7D82BE4A56_15* Field_2_7; // 0x40
	::Class_3_9F091E965E210217_8* Field_2_5; // 0x48
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_18; // 0x50
	::Class_2_208CC9941471731A_56* Field_2_8; // 0x60
	::Cysharp::Threading::Tasks::UniTask Field_2_15; // 0x68
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x78
	::MoleMole::Battle::Entity* Field_2_6; // 0x88
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_D9FABB598B022DEA*> Field_2_12; // 0x90
	::Class_2_208CC9941471731A_50* Field_2_11; // 0xA8
	::Class_3_D9FABB598B022DEA* Field_2_9; // 0xB0
	::System::Int32 Field_2_4; // 0xB8
	::System::Int32 Field_2_0; // 0xBC
	::System::Boolean Field_2_10; // 0xC0
	::System::Int32 Field_2_3; // 0xC4

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_10_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_10_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
