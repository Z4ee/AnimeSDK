#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_17E903BDA51D43F0;
class MonoSceneMap3DConfig;
namespace MoleMole { class MapChangeLayerConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_2_17E903BDA51D43F0_STRUCT_2_E01CB89E4BF65AD2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7625C0)
#define CLASS_2_17E903BDA51D43F0_STRUCT_2_E01CB89E4BF65AD2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_17E903BDA51D43F0_Struct_2_E01CB89E4BF65AD2_TypeDefinitionIndex = 58711;

struct alignas(8) Class_2_17E903BDA51D43F0_Struct_2_E01CB89E4BF65AD2
{
	::MoleMole::MapChangeLayerConfig* Field_2_7; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_11; // 0x18
	::MonoSceneMap3DConfig* Field_2_5; // 0x28
	::Class_2_17E903BDA51D43F0* Field_2_2; // 0x30
	::System::Threading::CancellationToken Field_2_4; // 0x38
	::MoleMole::MapChangeLayerConfig* Field_2_6; // 0x40
	::System::Threading::CancellationTokenSource* Field_2_10; // 0x48
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x50
	::UnityEngine::Vector3 Field_2_8; // 0x60
	::UnityEngine::Vector3 Field_2_9; // 0x6C
	::System::Int32 Field_2_0; // 0x78
	::System::Int32 Field_2_3; // 0x7C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_STRUCT_2_E01CB89E4BF65AD2_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_17E903BDA51D43F0_STRUCT_2_E01CB89E4BF65AD2_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
