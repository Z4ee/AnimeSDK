#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927_1;
class Class_2_3CC769D284A54927_1_Class_1_4AC1ED4185BCAD50_1;
class Class_2_3CC769D284A54927_1_Class_1_EEEF176155BC18C7_1;
namespace MoleMole { class FishCameraConfigGroupV2; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_1_STRUCT_2_3137F2C95403B016_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7FF5B0)
#define CLASS_2_3CC769D284A54927_1_STRUCT_2_3137F2C95403B016_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_3CC769D284A54927_1_Struct_2_3137F2C95403B016_TypeDefinitionIndex = 86310;

struct alignas(8) Class_2_3CC769D284A54927_1_Struct_2_3137F2C95403B016
{
	::MoleMole::FishCameraConfigGroupV2* Field_2_11; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_12; // 0x18
	::Class_2_3CC769D284A54927_1_Class_1_EEEF176155BC18C7_1* Field_2_8; // 0x28
	::Class_2_3CC769D284A54927_1* Field_2_2; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x38
	::Class_2_3CC769D284A54927_1_Class_1_4AC1ED4185BCAD50_1* Field_2_6; // 0x48
	::System::Int32 Field_2_0; // 0x50
	::UnityEngine::Vector3 Field_2_9; // 0x54
	::System::Single Field_2_3; // 0x60
	::UnityEngine::Vector3 Field_2_10; // 0x64
	::Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A Field_2_4; // 0x70
	::System::Boolean Field_2_5; // 0x74
	::System::Boolean Field_2_7; // 0x75

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_3137F2C95403B016_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_1_STRUCT_2_3137F2C95403B016_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
