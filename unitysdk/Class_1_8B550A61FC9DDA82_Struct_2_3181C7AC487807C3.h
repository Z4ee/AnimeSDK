#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Struct_2_864D927135D66FAE.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueType.h"

class Class_2_FDFE69FE7B72463B;
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_3181C7AC487807C3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7BF460)
#define CLASS_1_8B550A61FC9DDA82_STRUCT_2_3181C7AC487807C3_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Struct_2_3181C7AC487807C3_TypeDefinitionIndex = 82162;

struct alignas(8) Class_1_8B550A61FC9DDA82_Struct_2_3181C7AC487807C3
{
	::System::String* Field_2_3; // 0x10
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_6; // 0x18
	::System::Nullable_1<::System::Threading::CancellationTokenRegistration> Field_2_5; // 0x28
	::Class_1_8B550A61FC9DDA82_Struct_2_864D927135D66FAE Field_2_4; // 0x48
	::Class_2_FDFE69FE7B72463B* Field_2_2; // 0x58
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> Field_2_1; // 0x60
	::System::Int32 Field_2_0; // 0x78

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_3181C7AC487807C3_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_STRUCT_2_3181C7AC487807C3_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
