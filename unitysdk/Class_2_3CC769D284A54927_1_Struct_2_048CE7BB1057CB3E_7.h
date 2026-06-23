#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927_1;
namespace MoleMole { class FishMoveParam; }
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8262A0)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_048CE7BB1057CB3E_7_TypeDefinitionIndex = 86311;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_048CE7BB1057CB3E_7
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::MoleMole::FishPosConfig* Field_2_6; // 0x20
	::Class_2_3CC769D284A54927_1* Field_2_2; // 0x28
	::MoleMole::FishMoveParam* Field_2_5; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_15; // 0x38
	::UnityEngine::Vector3 Field_2_7; // 0x48
	::UnityEngine::Vector3 Field_2_8; // 0x54
	::System::Single Field_2_13; // 0x60
	::System::Int32 Field_2_0; // 0x64
	::System::Single Field_2_12; // 0x68
	::System::Single Field_2_9; // 0x6C
	::System::Int32 Field_2_4; // 0x70
	::UnityEngine::Vector3 Field_2_3; // 0x74
	::System::Single Field_2_14; // 0x80
	::System::Single Field_2_11; // 0x84
	::UnityEngine::Vector3 Field_2_10; // 0x88

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_7_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_7_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
