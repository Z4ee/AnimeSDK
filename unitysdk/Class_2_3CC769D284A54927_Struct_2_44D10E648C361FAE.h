#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_3CC769D284A54927;
class Class_2_3CC769D284A54927_Class_1_4AC1ED4185BCAD50;
class Class_2_3CC769D284A54927_Class_1_EEEF176155BC18C7;
namespace MoleMole { class FishCameraConfigGroup; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_44D10E648C361FAE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x594320)
#define CLASS_2_3CC769D284A54927_STRUCT_2_44D10E648C361FAE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_44D10E648C361FAE_TypeDefinitionIndex = 65379;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_44D10E648C361FAE
{
	::MoleMole::FishCameraConfigGroup* Field_2_11; // 0x10
	::Class_2_3CC769D284A54927_Class_1_EEEF176155BC18C7* Field_2_8; // 0x18
	::Class_2_3CC769D284A54927* Field_2_2; // 0x20
	::Class_2_3CC769D284A54927_Class_1_4AC1ED4185BCAD50* Field_2_6; // 0x28
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_12; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x40
	::System::Boolean Field_2_7; // 0x50
	::System::Boolean Field_2_5; // 0x51
	::Class_2_3CC769D284A54927_Enum_3_57164B6F828D1B2A Field_2_4; // 0x54
	::System::Int32 Field_2_0; // 0x58
	::System::Single Field_2_3; // 0x5C
	::UnityEngine::Vector3 Field_2_10; // 0x60
	::UnityEngine::Vector3 Field_2_9; // 0x6C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_44D10E648C361FAE_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_44D10E648C361FAE_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
