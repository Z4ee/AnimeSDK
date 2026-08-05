#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_2B69BCB161EF3587;
class MonoSceneMap3DConfig;
namespace MoleMole { class MapChangeLayerConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_2B69BCB161EF3587_STRUCT_2_E01CB89E4BF65AD2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x838210)
#define CLASS_2_2B69BCB161EF3587_STRUCT_2_E01CB89E4BF65AD2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_2B69BCB161EF3587_Struct_2_E01CB89E4BF65AD2_TypeDefinitionIndex = 75497;

struct alignas(8) Class_2_2B69BCB161EF3587_Struct_2_E01CB89E4BF65AD2
{
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x10
	::System::Threading::CancellationToken Field_2_7; // 0x20
	::MoleMole::MapChangeLayerConfig* Field_2_4; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_2; // 0x30
	::System::Threading::CancellationTokenSource* Field_2_9; // 0x40
	::MonoSceneMap3DConfig* Field_2_6; // 0x48
	::Class_2_2B69BCB161EF3587* Field_2_1; // 0x50
	::MoleMole::MapChangeLayerConfig* Field_2_5; // 0x58
	::UnityEngine::Vector3 Field_2_11; // 0x60
	::System::Int32 Field_2_0; // 0x6C
	::System::Int32 Field_2_3; // 0x70
	::UnityEngine::Vector3 Field_2_10; // 0x74

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_STRUCT_2_E01CB89E4BF65AD2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_2B69BCB161EF3587_STRUCT_2_E01CB89E4BF65AD2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
