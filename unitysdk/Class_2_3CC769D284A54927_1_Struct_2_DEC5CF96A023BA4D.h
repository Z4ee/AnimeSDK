#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927_1;
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_DEC5CF96A023BA4D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x705E80)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_DEC5CF96A023BA4D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_DEC5CF96A023BA4D_TypeDefinitionIndex = 57659;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_DEC5CF96A023BA4D
{
	::Class_2_3CC769D284A54927_1* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x18
	::MoleMole::FishPosConfig* Field_2_4; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_8; // 0x30
	::System::Int32 Field_2_0; // 0x40
	::UnityEngine::Vector3 Field_2_7; // 0x44
	::System::Single Field_2_3; // 0x50
	::UnityEngine::Vector3 Field_2_5; // 0x54
	::System::Single Field_2_6; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_DEC5CF96A023BA4D_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_DEC5CF96A023BA4D_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
