#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_299;
class Class_2_208CC9941471731A_958;
class Class_2_3CC769D284A54927_1;
class Class_2_3CC769D284A54927_1_Class_1_0755F51D2CF0D842_3;
class Class_3_48A3D3A34C52331D_51;
class Class_3_9D33A2E94B3E53DC;
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E9490)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_048CE7BB1057CB3E_TypeDefinitionIndex = 57631;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_048CE7BB1057CB3E
{
	::Class_2_3CC769D284A54927_1_Class_1_0755F51D2CF0D842_3* Field_2_4; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_15; // 0x18
	::Class_3_9D33A2E94B3E53DC* Field_2_6; // 0x28
	::Class_2_208CC9941471731A_958* Field_2_10; // 0x30
	::Class_2_208CC9941471731A_299* Field_2_8; // 0x38
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_48A3D3A34C52331D_51*> Field_2_14; // 0x40
	::Cysharp::Threading::Tasks::UniTask Field_2_12; // 0x58
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_16; // 0x68
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x78
	::System::Threading::CancellationTokenSource* Field_2_13; // 0x88
	::Cysharp::Threading::Tasks::UniTask Field_2_11; // 0x90
	::MoleMole::Battle::Entity* Field_2_5; // 0xA0
	::Class_3_48A3D3A34C52331D_51* Field_2_9; // 0xA8
	::Class_2_3CC769D284A54927_1* Field_2_2; // 0xB0
	::System::Int32 Field_2_3; // 0xB8
	::System::Int32 Field_2_7; // 0xBC
	::System::Int32 Field_2_0; // 0xC0

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
