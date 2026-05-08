#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_97AD8E82C04AAAA2;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class RenderTexture; }

#define CLASS_1_6C4D3DBE13068390_STRUCT_2_A02B2633A8FEA788_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7930B0)
#define CLASS_1_6C4D3DBE13068390_STRUCT_2_A02B2633A8FEA788_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Class_1_6C4D3DBE13068390_Struct_2_A02B2633A8FEA788_TypeDefinitionIndex = 68385;

struct alignas(8) Class_1_6C4D3DBE13068390_Struct_2_A02B2633A8FEA788
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Field_2_1; // 0x10
	::UnityEngine::RenderTexture* Field_2_2; // 0x20
	::System::Action* Field_2_4; // 0x28
	::System::Action_1<::System::String*>* Field_2_3; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_97AD8E82C04AAAA2*> Field_2_6; // 0x38
	::Cysharp::Threading::Tasks::UniTask_Awaiter Field_2_5; // 0x50
	::System::Int32 Field_2_0; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6C4D3DBE13068390_STRUCT_2_A02B2633A8FEA788_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + CLASS_1_6C4D3DBE13068390_STRUCT_2_A02B2633A8FEA788_SETSTATEMACHINE_OFFSET))(this, a1);
	}
};
