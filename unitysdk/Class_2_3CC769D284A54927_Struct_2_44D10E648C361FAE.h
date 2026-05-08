#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927;
class Class_2_3CC769D284A54927_Class_1_4AC1ED4185BCAD50_1;
class Class_2_3CC769D284A54927_Class_1_EEEF176155BC18C7_1;
namespace MoleMole { class FishCameraConfigGroup; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_44D10E648C361FAE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x700F00)
#define CLASS_2_3CC769D284A54927_STRUCT_2_44D10E648C361FAE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_44D10E648C361FAE_TypeDefinitionIndex = 61339;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_44D10E648C361FAE
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::MoleMole::FishCameraConfigGroup* Field_2_11; // 0x20
	::Class_2_3CC769D284A54927_Class_1_EEEF176155BC18C7_1* Field_2_8; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_12; // 0x30
	::Class_2_3CC769D284A54927_Class_1_4AC1ED4185BCAD50_1* Field_2_6; // 0x40
	::Class_2_3CC769D284A54927* Field_2_2; // 0x48
	::UnityEngine::Vector3 Field_2_9; // 0x50
	::System::Boolean Field_2_5; // 0x5C
	::System::Boolean Field_2_7; // 0x5D
	::System::Int32 Field_2_0; // 0x60
	::Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A Field_2_4; // 0x64
	::System::Single Field_2_3; // 0x68
	::UnityEngine::Vector3 Field_2_10; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_44D10E648C361FAE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_44D10E648C361FAE_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
