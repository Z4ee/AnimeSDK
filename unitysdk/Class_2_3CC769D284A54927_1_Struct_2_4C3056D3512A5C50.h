#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Collections/Generic/List_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927_1;
class Class_3_C93CC3D2C2AC4067;
class MonoRootMotion;
namespace MoleMole { class FishPosConfig; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_4C3056D3512A5C50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8020B0)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_4C3056D3512A5C50_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_4C3056D3512A5C50_TypeDefinitionIndex = 62899;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_4C3056D3512A5C50
{
	::Class_2_3CC769D284A54927_1* Field_2_6; // 0x10
	::System::Collections::Generic::List_1_Enumerator<::MoleMole::FishPosConfig*> Field_2_4; // 0x18
	::Class_3_C93CC3D2C2AC4067* Field_2_11; // 0x30
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_12; // 0x38
	::MonoRootMotion* Field_2_13; // 0x48
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_7; // 0x50
	::System::Boolean Field_2_5; // 0x60
	::System::Single Field_2_15; // 0x64
	::System::Int32 Field_2_0; // 0x68
	::System::Single Field_2_9; // 0x6C
	::System::Single Field_2_10; // 0x70
	::UnityEngine::Vector3 Field_2_8; // 0x74
	::System::Int32 Field_2_14; // 0x80

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_4C3056D3512A5C50_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_4C3056D3512A5C50_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
