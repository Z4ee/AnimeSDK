#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_222;
class Class_2_208CC9941471731A_299;
class Class_2_3CC769D284A54927;
class Class_2_3CC769D284A54927_Class_1_1A520E7D82BE4A56_6;
class Class_3_88D140F5E09465E1_5;
class Class_3_9F091E965E210217_5;
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x71A4B0)
#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_8_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_8_TypeDefinitionIndex = 61334;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_8
{
	::Class_3_88D140F5E09465E1_5* Field_2_10; // 0x10
	::System::Threading::CancellationTokenSource* Field_2_14; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_88D140F5E09465E1_5*> Field_2_15; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_16; // 0x38
	::Class_2_3CC769D284A54927* Field_2_2; // 0x48
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_17; // 0x50
	::Class_2_3CC769D284A54927_Class_1_1A520E7D82BE4A56_6* Field_2_4; // 0x60
	::MoleMole::Battle::Entity* Field_2_5; // 0x68
	::Cysharp::Threading::Tasks::UniTask Field_2_12; // 0x70
	::Cysharp::Threading::Tasks::UniTask Field_2_13; // 0x80
	::Class_2_208CC9941471731A_222* Field_2_11; // 0x90
	::Class_3_9F091E965E210217_5* Field_2_6; // 0x98
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0xA0
	::Class_2_208CC9941471731A_299* Field_2_8; // 0xB0
	::System::Int32 Field_2_7; // 0xB8
	::System::Boolean Field_2_9; // 0xBC
	::System::Int32 Field_2_0; // 0xC0
	::System::Int32 Field_2_3; // 0xC4

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_8_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_8_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
