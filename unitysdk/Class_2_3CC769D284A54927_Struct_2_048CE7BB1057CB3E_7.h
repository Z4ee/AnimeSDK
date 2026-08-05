#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927;
namespace MoleMole { class FishMoveParam; }
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7833B0)
#define CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_7_TypeDefinitionIndex = 76687;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_048CE7BB1057CB3E_7
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_19; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x20
	::Class_2_3CC769D284A54927* Field_2_7; // 0x30
	::MoleMole::FishMoveParam* Field_2_5; // 0x38
	::MoleMole::FishPosConfig* Field_2_4; // 0x40
	::UnityEngine::Vector3 Field_2_6; // 0x48
	::System::Single Field_2_14; // 0x54
	::System::Single Field_2_15; // 0x58
	::System::Single Field_2_9; // 0x5C
	::System::Single Field_2_12; // 0x60
	::UnityEngine::Vector3 Field_2_8; // 0x64
	::UnityEngine::Vector3 Field_2_11; // 0x70
	::System::Single Field_2_13; // 0x7C
	::System::Int32 Field_2_1; // 0x80
	::UnityEngine::Vector3 Field_2_10; // 0x84

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_7_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_048CE7BB1057CB3E_7_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
