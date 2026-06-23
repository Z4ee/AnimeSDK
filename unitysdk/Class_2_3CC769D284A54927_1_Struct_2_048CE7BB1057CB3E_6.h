#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_2_208CC9941471731A_230;
class Class_2_208CC9941471731A_782;
class Class_2_3CC769D284A54927_1;
class Class_2_3CC769D284A54927_1_Class_1_0755F51D2CF0D842_10;
class Class_3_48A3D3A34C52331D_37;
class Class_3_9D33A2E94B3E53DC;
namespace MoleMole::Battle { class Entity; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x785180)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_048CE7BB1057CB3E_6_TypeDefinitionIndex = 86309;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_048CE7BB1057CB3E_6
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::Class_2_3CC769D284A54927_1* Field_2_2; // 0x20
	::MoleMole::Battle::Entity* Field_2_5; // 0x28
	::System::Threading::CancellationTokenSource* Field_2_13; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_48A3D3A34C52331D_37*> Field_2_14; // 0x38
	::Class_2_208CC9941471731A_230* Field_2_8; // 0x50
	::Cysharp::Threading::Tasks::UniTask Field_2_11; // 0x58
	::Class_2_208CC9941471731A_782* Field_2_10; // 0x68
	::Class_2_3CC769D284A54927_1_Class_1_0755F51D2CF0D842_10* Field_2_4; // 0x70
	::Class_3_48A3D3A34C52331D_37* Field_2_9; // 0x78
	::Class_3_9D33A2E94B3E53DC* Field_2_6; // 0x80
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_15; // 0x88
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> Field_2_16; // 0x98
	::Cysharp::Threading::Tasks::UniTask Field_2_12; // 0xA8
	::System::Int32 Field_2_7; // 0xB8
	::System::Int32 Field_2_3; // 0xBC
	::System::Int32 Field_2_0; // 0xC0

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_6_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_6_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
