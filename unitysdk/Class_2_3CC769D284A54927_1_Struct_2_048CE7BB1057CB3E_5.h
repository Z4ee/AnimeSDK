#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927_1;
namespace MoleMole { class FishMove3DCurve; }
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x634CD0)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_5_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_048CE7BB1057CB3E_5_TypeDefinitionIndex = 62919;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_048CE7BB1057CB3E_5
{
	::MoleMole::FishPosConfig* Field_2_4; // 0x10
	::Class_2_3CC769D284A54927_1* Field_2_0; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::MoleMole::FishMove3DCurve* Field_2_14; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_18; // 0x38
	::UnityEngine::Vector3 Field_2_11; // 0x48
	::System::Int32 Field_2_6; // 0x54
	::System::Single Field_2_13; // 0x58
	::System::Single Field_2_12; // 0x5C
	::UnityEngine::Vector3 Field_2_7; // 0x60
	::System::Single Field_2_19; // 0x6C
	::UnityEngine::Vector3 Field_2_10; // 0x70
	::System::Int32 Field_2_2; // 0x7C
	::System::Single Field_2_9; // 0x80
	::System::Single Field_2_15; // 0x84
	::UnityEngine::Vector3 Field_2_8; // 0x88
	::System::Int32 Field_2_5; // 0x94

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_5_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_048CE7BB1057CB3E_5_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
