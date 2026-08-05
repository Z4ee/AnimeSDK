#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_F6AB19A8BCD630BB.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_6D212096371432EC_Class_1_35B910601396194F;
class Class_2_6D212096371432EC_Class_1_DC19A1F07A189AC6_4;
namespace MoleMole { class GameMixedModeSubSystem; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_6D212096371432EC_CLASS_1_35B910601396194F_STRUCT_2_F62600CBCC84CE7A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C1180)
#define CLASS_2_6D212096371432EC_CLASS_1_35B910601396194F_STRUCT_2_F62600CBCC84CE7A_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int Class_2_6D212096371432EC_Class_1_35B910601396194F_Struct_2_F62600CBCC84CE7A_TypeDefinitionIndex = 73468;

struct alignas(8) Class_2_6D212096371432EC_Class_1_35B910601396194F_Struct_2_F62600CBCC84CE7A
{
	::Class_2_6D212096371432EC_Class_1_35B910601396194F* Field_2_7; // 0x10
	::MoleMole::GameMixedModeSubSystem* Field_2_9; // 0x18
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_10; // 0x20
	::System::Threading::CancellationToken Field_2_6; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_0; // 0x38
	::Class_2_6D212096371432EC_Class_1_DC19A1F07A189AC6_4* Field_2_5; // 0x48
	::System::Int32 Field_2_1; // 0x50
	::UnityEngine::Vector3 Field_2_11; // 0x54
	::Enum_3_F6AB19A8BCD630BB Field_2_8; // 0x60
	::UnityEngine::Vector3 Field_2_4; // 0x64

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6D212096371432EC_CLASS_1_35B910601396194F_STRUCT_2_F62600CBCC84CE7A_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_6D212096371432EC_CLASS_1_35B910601396194F_STRUCT_2_F62600CBCC84CE7A_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
