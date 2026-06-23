#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_5_A6F8D19602712D95;
namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define CLASS_5_A6F8D19602712D95_STRUCT_2_1AD4E15DDC3D2A1A_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7920B0)
#define CLASS_5_A6F8D19602712D95_STRUCT_2_1AD4E15DDC3D2A1A_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int Class_5_A6F8D19602712D95_Struct_2_1AD4E15DDC3D2A1A_TypeDefinitionIndex = 42412;

struct alignas(8) Class_5_A6F8D19602712D95_Struct_2_1AD4E15DDC3D2A1A
{
	::MoleMole::IVideoPlayer* Field_2_2; // 0x10
	::System::Action* Field_2_4; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x20
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x30
	::Class_5_A6F8D19602712D95* Field_2_3; // 0x40
	::System::Int32 Field_2_0; // 0x48

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_STRUCT_2_1AD4E15DDC3D2A1A_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_STRUCT_2_1AD4E15DDC3D2A1A_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
