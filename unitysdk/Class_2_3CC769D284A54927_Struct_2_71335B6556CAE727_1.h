#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/FishCameraConfig.h"
#include "unitysdk/System/ValueType.h"

class Class_2_3CC769D284A54927;
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_2_3CC769D284A54927_STRUCT_2_71335B6556CAE727_1_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x741410)
#define CLASS_2_3CC769D284A54927_STRUCT_2_71335B6556CAE727_1_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_2_3CC769D284A54927_Struct_2_71335B6556CAE727_1_TypeDefinitionIndex = 61332;

struct alignas(8) Class_2_3CC769D284A54927_Struct_2_71335B6556CAE727_1
{
	::Class_2_3CC769D284A54927* Field_2_2; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_7; // 0x18
	::MoleMole::FishCameraConfig Field_2_3; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Boolean> Field_2_1; // 0x50
	::MoleMole::Config::ConfigHollowCameraShake* Field_2_4; // 0x68
	::System::Single Field_2_5; // 0x70
	::System::Int32 Field_2_0; // 0x74
	::System::Single Field_2_6; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_71335B6556CAE727_1_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_2_3CC769D284A54927_STRUCT_2_71335B6556CAE727_1_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
